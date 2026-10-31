# Injected into the aurora build with -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES so the spike
# executable is built incrementally in the SAME build tree as aurora (no second full
# configure/build, no duplicate Dawn download). tools/aurora_spike/build.ps1 does this;
# see README.md. TOP_LEVEL_INCLUDES (not PROJECT_INCLUDE) is required: the latter also runs
# inside every nested project() - googletest's, for one - where add_executable/add_custom_command
# would fail.
#
# The include runs at the end of aurora's top-level project() call, i.e. before the aurora
# targets it references exist - that is fine, target names resolve at generate time.

if (TARGET tls_gx_replay)
  return()
endif ()
if (NOT DEFINED TLS_SPIKE_DIR)
  message(FATAL_ERROR "TLS_SPIKE_DIR must be set (see tools/aurora_spike/build.ps1)")
endif ()

add_executable(tls_gx_replay "${TLS_SPIKE_DIR}/aurora_replay.cpp")
target_compile_features(tls_gx_replay PRIVATE cxx_std_20)
target_compile_definitions(tls_gx_replay PRIVATE AURORA TARGET_PC=1)
# aurora::gx first, core second, gx again: GNU ld resolves a static archive in one pass, and
# aurora_core and aurora_gx reference each other.
target_link_libraries(tls_gx_replay PRIVATE dbghelp
  aurora::gx
  aurora::core
  aurora::gx
  aurora::vi
)
set_target_properties(tls_gx_replay PROPERTIES FOLDER "aurora-spike")

# ---------------------------------------------------------------------------------------------
# 5c.47 AP-AX phase P1: the same engine as a DLL the RUNNER can load at runtime.
#
# The runner is built by MinGW GCC from C only (tools/recomp_harness.py) and must not gain a C++
# link dependency, so aurora crosses that boundary as a C ABI shared library that the runner
# LoadLibrary()s. `aurora_live.cpp` #includes `aurora_replay.cpp`, so the DLL's adapter is the
# harness's adapter by construction - "the runner's aurora frame equals the harness's" is then a
# statement about the frame source, not about two ports of the same code.
# ---------------------------------------------------------------------------------------------
# NOTE ON TIMING: this file is processed by CMAKE_PROJECT_TOP_LEVEL_INCLUDES, i.e. before the
# platform configuration is fully in place - an `add_library(... SHARED ...)` written here comes
# out as STATIC_LIBRARY ("tls_aurora_live type at definition: STATIC_LIBRARY", measured), while
# an executable is fine. So the DLL target is DEFERRED to the end of the top-level directory,
# where the platform is initialised and aurora's targets exist.
function(tls_aurora_live_target)
  if (TARGET tls_aurora_live)
    return()
  endif ()
  add_library(tls_aurora_live SHARED "${TLS_SPIKE_DIR}/aurora_live.cpp")
  target_compile_features(tls_aurora_live PRIVATE cxx_std_20)
  target_compile_definitions(tls_aurora_live PRIVATE AURORA TARGET_PC=1)
  target_link_libraries(tls_aurora_live PRIVATE dbghelp
    aurora::gx
    aurora::core
    aurora::gx
    aurora::vi
  )
  get_target_property(_tls_live_type tls_aurora_live TYPE)
  message(STATUS "tls_aurora_live type: ${_tls_live_type}")
  # build.ps1 puts the MSVC stub libraries (libcomsuppw.a is an EMPTY archive; SDL3's imported
  # target asks for the MSVC COM support library, which MinGW does not ship) on the EXE linker
  # line through CMAKE_EXE_LINKER_FLAGS. A shared library does not see that variable, so the same
  # directory is added here - otherwise the DLL fails with "cannot find -lcomsuppw".
  if (EXISTS "${CMAKE_SOURCE_DIR}/../stublibs")
    target_link_directories(tls_aurora_live PRIVATE "${CMAKE_SOURCE_DIR}/../stublibs")
  endif ()
  set_target_properties(tls_aurora_live PROPERTIES FOLDER "aurora-spike")
  if (TLS_SPIKE_RUNTIME_DLLS)
    add_custom_command(TARGET tls_aurora_live POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different ${TLS_SPIKE_RUNTIME_DLLS} $<TARGET_FILE_DIR:tls_aurora_live>
      COMMENT "Copying Dawn/SDL3/runtime DLLs next to tls_aurora_live.dll"
    )
  endif ()
endfunction()

if (TARGET tls_gx_replay)
  cmake_language(DEFER DIRECTORY "${CMAKE_SOURCE_DIR}" CALL tls_aurora_live_target)
endif ()

# Runtime DLLs must sit next to the executable. aurora's own aurora_copy_runtime_dlls() uses
# $<TARGET_RUNTIME_DLLS:...>, which expands empty for an executable that links *static*
# aurora archives (the DLLs come in transitively, not through the target's own link line),
# so the DLLs are collected by path instead - one glob over the packages and the built
# zlib/libpng, executed at generate time when those directories exist.
file(GLOB TLS_SPIKE_RUNTIME_DLLS
  "${CMAKE_BINARY_DIR}/_deps/dawn_prebuilt-src/bin/*.dll"
  "${CMAKE_BINARY_DIR}/_deps/sdl3_prebuilt-src/bin/*.dll"
  "${CMAKE_BINARY_DIR}/_deps/*-build/*.dll"
)
if (TLS_SPIKE_RUNTIME_DLLS)
  add_custom_command(TARGET tls_gx_replay POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${TLS_SPIKE_RUNTIME_DLLS} $<TARGET_FILE_DIR:tls_gx_replay>
    COMMENT "Copying Dawn/SDL3/runtime DLLs next to tls_gx_replay.exe"
  )
else ()
  message(WARNING "aurora-spike: no runtime DLLs found to copy")
endif ()