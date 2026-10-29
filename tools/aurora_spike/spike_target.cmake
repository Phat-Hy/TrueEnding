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