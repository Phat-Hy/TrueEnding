#define COBJMACROS
#define WIDL_C_INLINE_WRAPPERS
#include <windows.h>
#include <initguid.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "gfx_backend.h"

#define NUM_BACK_BUFFERS 2

typedef struct {
    HWND hwnd;
    ID3D12Device* device;
    ID3D12CommandQueue* command_queue;
    IDXGISwapChain3* swap_chain;
    ID3D12DescriptorHeap* rtv_heap;
    ID3D12DescriptorHeap* srv_heap;
    ID3D12Resource* render_targets[NUM_BACK_BUFFERS];
    ID3D12CommandAllocator* command_allocators[NUM_BACK_BUFFERS];
    ID3D12GraphicsCommandList* command_list;
    ID3D12RootSignature* root_signature;
    ID3D12PipelineState* pipeline_state;
    ID3D12Fence* fence;
    HANDLE fence_event;
    UINT64 fence_values[NUM_BACK_BUFFERS];
    UINT frame_index;

    // Framebuffer texture & upload buffer
    ID3D12Resource* fb_texture;
    ID3D12Resource* fb_upload_buffer;
    int fb_width;
    int fb_height;
    int win_width;
    int win_height;
    bool vsync;
    bool fullscreen;
    GfxAspectRatio aspect_ratio;
    uint32_t* rgba_staging;
} D3D12Backend;

static D3D12Backend s_d3d12 = {0};

// Precompiled bytecode for fullscreen triangle vertex shader (Shader Model 5.0)
static const uint8_t s_d3d12_vs_bytecode[] = {
    68,88,66,67,41,202,118,217,148,229,195,145,177,153,30,111,81,189,178,135,1,0,0,0,
    144,2,0,0,5,0,0,0,52,0,0,0,140,0,0,0,188,0,0,0,32,1,0,0,164,1,0,0,
    82,68,69,70,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,4,255,255,
    0,1,0,0,60,0,0,0,77,105,99,114,111,115,111,102,116,32,40,82,41,32,72,76,
    83,76,32,83,104,97,100,101,114,32,67,111,109,112,105,108,101,114,32,49,48,46,49,0,
    73,83,71,78,40,0,0,0,1,0,0,0,8,0,0,0,32,0,0,0,0,0,0,0,6,0,0,0,
    1,0,0,0,0,0,0,0,1,1,0,0,83,86,95,86,101,114,116,101,120,73,68,0,
    79,83,71,78,92,0,0,0,2,0,0,0,8,0,0,0,32,0,0,0,0,0,0,0,1,0,0,0,
    3,0,0,0,0,0,0,0,15,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,
    1,0,0,0,3,12,0,0,83,86,95,80,111,115,105,116,105,111,110,0,84,69,88,67,
    79,79,82,68,0,171,83,72,68,82,124,0,0,0,64,0,1,0,31,0,0,0,94,0,0,4,
    10,16,16,0,0,0,0,0,5,0,0,4,242,32,16,0,0,0,0,0,1,0,0,2,
    101,0,0,4,242,32,16,0,0,0,0,0,1,0,0,2,103,0,0,4,242,32,16,0,
    1,0,0,0,1,0,0,2,24,0,0,7,50,0,16,0,10,16,16,0,0,0,0,0,
    2,64,0,0,0,0,0,0,1,0,0,0,86,0,0,5,50,0,16,0,70,0,16,0,
    2,64,0,0,2,0,0,0,2,0,0,0,86,0,0,7,50,32,16,0,1,0,0,0,
    70,0,16,0,2,64,0,0,0,0,0,64,0,0,0,192,2,64,0,0,0,0,128,191,
    0,0,128,63,54,0,0,5,50,32,16,0,0,0,0,0,70,32,16,0,1,0,0,0,
    54,0,0,5,194,32,16,0,0,0,0,0,2,64,0,0,0,0,0,0,0,0,128,63,
    56,0,0,5,50,32,16,0,1,0,0,0,70,0,16,0,62,0,0,1,
    83,84,65,84,116,0,0,0,9,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,4,0,0,0,
    0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

// Precompiled bytecode for texture sampling pixel shader
static const uint8_t s_d3d12_ps_bytecode[] = {
    68,88,66,67,163,149,152,112,197,149,173,171,200,90,120,44,87,143,156,151,1,0,0,0,
    148,2,0,0,5,0,0,0,52,0,0,0,224,0,0,0,60,1,0,0,112,1,0,0,168,1,0,0,
    82,68,69,70,164,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,28,0,0,0,0,4,255,255,
    0,1,0,0,140,0,0,0,60,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,1,0,0,0,115,109,112,0,116,101,120,0,77,105,99,114,
    111,115,111,102,116,32,40,82,41,32,72,76,83,76,32,83,104,97,100,101,114,32,67,111,
    109,112,105,108,101,114,32,49,48,46,49,0,73,83,71,78,84,0,0,0,2,0,0,0,
    8,0,0,0,32,0,0,0,0,0,0,0,1,0,0,0,3,0,0,0,0,0,0,0,15,0,0,0,
    44,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,1,0,0,0,3,3,0,0,83,86,
    95,80,111,115,105,116,105,111,110,0,84,69,88,67,79,79,82,68,0,171,79,83,71,78,
    44,0,0,0,1,0,0,0,8,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,
    0,0,0,0,15,0,0,0,83,86,95,84,97,114,103,101,116,0,171,171,83,72,68,82,
    48,0,0,0,64,0,0,0,12,0,0,0,90,0,0,3,0,96,16,0,0,0,0,0,
    88,0,0,4,0,112,16,0,0,0,0,0,2,0,0,0,98,16,0,3,50,16,16,0,
    1,0,0,0,101,0,0,3,242,32,16,0,0,0,0,0,69,0,0,9,242,32,16,0,
    0,0,0,0,70,16,16,0,1,0,0,0,70,126,16,0,0,0,0,0,0,96,16,0,
    0,0,0,0,62,0,0,1,83,84,65,84,116,0,0,0,1,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

static inline uint8_t clamp_u8_d3d12(int v) {
    return (uint8_t)(v < 0 ? 0 : (v > 255 ? 255 : v));
}

static void wait_for_gpu(void) {
    if (!s_d3d12.command_queue || !s_d3d12.fence) return;
    UINT64 fence_val = s_d3d12.fence_values[s_d3d12.frame_index];
    ID3D12CommandQueue_Signal(s_d3d12.command_queue, s_d3d12.fence, fence_val);
    if (ID3D12Fence_GetCompletedValue(s_d3d12.fence) < fence_val) {
        ID3D12Fence_SetEventOnCompletion(s_d3d12.fence, fence_val, s_d3d12.fence_event);
        WaitForSingleObject(s_d3d12.fence_event, INFINITE);
    }
    s_d3d12.fence_values[s_d3d12.frame_index]++;
}

static bool create_fb_resources(int width, int height) {
    if (!s_d3d12.device) return false;

    s_d3d12.fb_width = width;
    s_d3d12.fb_height = height;

    if (s_d3d12.fb_texture) {
        ID3D12Resource_Release(s_d3d12.fb_texture);
        s_d3d12.fb_texture = NULL;
    }
    if (s_d3d12.fb_upload_buffer) {
        ID3D12Resource_Release(s_d3d12.fb_upload_buffer);
        s_d3d12.fb_upload_buffer = NULL;
    }

    // Default Texture Resource
    D3D12_HEAP_PROPERTIES default_heap = {
        .Type = D3D12_HEAP_TYPE_DEFAULT,
        .CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN,
        .MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN,
        .CreationNodeMask = 1,
        .VisibleNodeMask = 1
    };

    D3D12_RESOURCE_DESC tex_desc = {
        .Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D,
        .Alignment = 0,
        .Width = width,
        .Height = height,
        .DepthOrArraySize = 1,
        .MipLevels = 1,
        .Format = DXGI_FORMAT_R8G8B8A8_UNORM,
        .SampleDesc = { .Count = 1, .Quality = 0 },
        .Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN,
        .Flags = D3D12_RESOURCE_FLAG_NONE
    };

    HRESULT hr = ID3D12Device_CreateCommittedResource(
        s_d3d12.device,
        &default_heap,
        D3D12_HEAP_FLAG_NONE,
        &tex_desc,
        D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE,
        NULL,
        &IID_ID3D12Resource,
        (void**)&s_d3d12.fb_texture
    );
    if (FAILED(hr)) return false;

    // Create SRV in srv_heap (descriptor 0)
    D3D12_SHADER_RESOURCE_VIEW_DESC srv_desc = {
        .Format = DXGI_FORMAT_R8G8B8A8_UNORM,
        .ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D,
        .Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING,
        .Texture2D = { .MostDetailedMip = 0, .MipLevels = 1, .PlaneSlice = 0, .ResourceMinLODClamp = 0.0f }
    };
    D3D12_CPU_DESCRIPTOR_HANDLE srv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(s_d3d12.srv_heap);
    ID3D12Device_CreateShaderResourceView(s_d3d12.device, s_d3d12.fb_texture, &srv_desc, srv_handle);

    // Upload Buffer (256-byte aligned row pitch)
    UINT row_pitch = (width * 4 + 255) & ~255;
    UINT64 upload_size = (UINT64)row_pitch * height;

    D3D12_HEAP_PROPERTIES upload_heap = {
        .Type = D3D12_HEAP_TYPE_UPLOAD,
        .CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN,
        .MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN,
        .CreationNodeMask = 1,
        .VisibleNodeMask = 1
    };

    D3D12_RESOURCE_DESC buf_desc = {
        .Dimension = D3D12_RESOURCE_DIMENSION_BUFFER,
        .Alignment = 0,
        .Width = upload_size,
        .Height = 1,
        .DepthOrArraySize = 1,
        .MipLevels = 1,
        .Format = DXGI_FORMAT_UNKNOWN,
        .SampleDesc = { .Count = 1, .Quality = 0 },
        .Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR,
        .Flags = D3D12_RESOURCE_FLAG_NONE
    };

    hr = ID3D12Device_CreateCommittedResource(
        s_d3d12.device,
        &upload_heap,
        D3D12_HEAP_FLAG_NONE,
        &buf_desc,
        D3D12_RESOURCE_STATE_GENERIC_READ,
        NULL,
        &IID_ID3D12Resource,
        (void**)&s_d3d12.fb_upload_buffer
    );
    if (FAILED(hr)) return false;

    if (s_d3d12.rgba_staging) free(s_d3d12.rgba_staging);
    s_d3d12.rgba_staging = (uint32_t*)malloc(width * height * sizeof(uint32_t));
    return true;
}

bool d3d12_init(HWND hwnd, const GfxConfig* config) {
    s_d3d12.hwnd = hwnd;
    s_d3d12.win_width = config->window_width;
    s_d3d12.win_height = config->window_height;
    s_d3d12.vsync = config->vsync;
    s_d3d12.fullscreen = config->fullscreen;
    s_d3d12.aspect_ratio = config->aspect_ratio;
    s_d3d12.fb_width = 640;
    s_d3d12.fb_height = 480;

    // 1. Create Device
    HRESULT hr = D3D12CreateDevice(NULL, D3D_FEATURE_LEVEL_11_0, &IID_ID3D12Device, (void**)&s_d3d12.device);
    if (FAILED(hr)) {
        printf("[D3D12] Hardware device creation failed: 0x%08lX\n", (unsigned long)hr);
        return false;
    }

    // 2. Create Command Queue
    D3D12_COMMAND_QUEUE_DESC qd = {
        .Type = D3D12_COMMAND_LIST_TYPE_DIRECT,
        .Priority = D3D12_COMMAND_QUEUE_PRIORITY_NORMAL,
        .Flags = D3D12_COMMAND_QUEUE_FLAG_NONE,
        .NodeMask = 0
    };
    hr = ID3D12Device_CreateCommandQueue(s_d3d12.device, &qd, &IID_ID3D12CommandQueue, (void**)&s_d3d12.command_queue);
    if (FAILED(hr)) return false;

    // 3. Create Swap Chain
    IDXGIFactory4* factory = NULL;
    hr = CreateDXGIFactory1(&IID_IDXGIFactory4, (void**)&factory);
    if (FAILED(hr)) return false;

    DXGI_SWAP_CHAIN_DESC1 scd = {
        .Width = s_d3d12.win_width,
        .Height = s_d3d12.win_height,
        .Format = DXGI_FORMAT_R8G8B8A8_UNORM,
        .Stereo = FALSE,
        .SampleDesc = { .Count = 1, .Quality = 0 },
        .BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT,
        .BufferCount = NUM_BACK_BUFFERS,
        .Scaling = DXGI_SCALING_STRETCH,
        .SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD,
        .AlphaMode = DXGI_ALPHA_MODE_UNSPECIFIED,
        .Flags = 0
    };

    IDXGISwapChain1* sc1 = NULL;
    hr = IDXGIFactory4_CreateSwapChainForHwnd(
        factory,
        (IUnknown*)s_d3d12.command_queue,
        hwnd,
        &scd,
        NULL,
        NULL,
        &sc1
    );
    IDXGIFactory4_Release(factory);
    if (FAILED(hr)) return false;

    hr = IDXGISwapChain1_QueryInterface(sc1, &IID_IDXGISwapChain3, (void**)&s_d3d12.swap_chain);
    IDXGISwapChain1_Release(sc1);
    if (FAILED(hr)) return false;

    s_d3d12.frame_index = IDXGISwapChain3_GetCurrentBackBufferIndex(s_d3d12.swap_chain);

    // 4. Create RTV Descriptor Heap
    D3D12_DESCRIPTOR_HEAP_DESC rtv_desc = {
        .Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV,
        .NumDescriptors = NUM_BACK_BUFFERS,
        .Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE,
        .NodeMask = 0
    };
    hr = ID3D12Device_CreateDescriptorHeap(s_d3d12.device, &rtv_desc, &IID_ID3D12DescriptorHeap, (void**)&s_d3d12.rtv_heap);
    if (FAILED(hr)) return false;

    UINT rtv_inc_size = ID3D12Device_GetDescriptorHandleIncrementSize(s_d3d12.device, D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(s_d3d12.rtv_heap);

    for (UINT i = 0; i < NUM_BACK_BUFFERS; i++) {
        hr = IDXGISwapChain3_GetBuffer(s_d3d12.swap_chain, i, &IID_ID3D12Resource, (void**)&s_d3d12.render_targets[i]);
        if (FAILED(hr)) return false;
        ID3D12Device_CreateRenderTargetView(s_d3d12.device, s_d3d12.render_targets[i], NULL, rtv_handle);
        rtv_handle.ptr += rtv_inc_size;
    }

    // 5. Create SRV Descriptor Heap
    D3D12_DESCRIPTOR_HEAP_DESC srv_desc = {
        .Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,
        .NumDescriptors = 1,
        .Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE,
        .NodeMask = 0
    };
    hr = ID3D12Device_CreateDescriptorHeap(s_d3d12.device, &srv_desc, &IID_ID3D12DescriptorHeap, (void**)&s_d3d12.srv_heap);
    if (FAILED(hr)) return false;

    // 6. Create Root Signature
    D3D12_DESCRIPTOR_RANGE range = {
        .RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV,
        .NumDescriptors = 1,
        .BaseShaderRegister = 0,
        .RegisterSpace = 0,
        .OffsetInDescriptorsFromTableStart = D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND
    };

    D3D12_ROOT_PARAMETER root_param = {
        .ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE,
        .DescriptorTable = { .NumDescriptorRanges = 1, .pDescriptorRanges = &range },
        .ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL
    };

    D3D12_STATIC_SAMPLER_DESC sampler = {
        .Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR,
        .AddressU = D3D12_TEXTURE_ADDRESS_MODE_CLAMP,
        .AddressV = D3D12_TEXTURE_ADDRESS_MODE_CLAMP,
        .AddressW = D3D12_TEXTURE_ADDRESS_MODE_CLAMP,
        .MipLODBias = 0,
        .MaxAnisotropy = 1,
        .ComparisonFunc = D3D12_COMPARISON_FUNC_NEVER,
        .BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK,
        .MinLOD = 0.0f,
        .MaxLOD = D3D12_FLOAT32_MAX,
        .ShaderRegister = 0,
        .RegisterSpace = 0,
        .ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL
    };

    D3D12_ROOT_SIGNATURE_DESC rs_desc = {
        .NumParameters = 1,
        .pParameters = &root_param,
        .NumStaticSamplers = 1,
        .pStaticSamplers = &sampler,
        .Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT
    };

    ID3DBlob* rs_blob = NULL;
    ID3DBlob* err_blob = NULL;
    hr = D3D12SerializeRootSignature(&rs_desc, D3D_ROOT_SIGNATURE_VERSION_1, &rs_blob, &err_blob);
    if (FAILED(hr)) return false;

    hr = ID3D12Device_CreateRootSignature(s_d3d12.device, 0, ID3D10Blob_GetBufferPointer(rs_blob), ID3D10Blob_GetBufferSize(rs_blob), &IID_ID3D12RootSignature, (void**)&s_d3d12.root_signature);
    ID3D10Blob_Release(rs_blob);
    if (FAILED(hr)) return false;

    // 7. Create Pipeline State Object (PSO)
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pso_desc = {
        .pRootSignature = s_d3d12.root_signature,
        .VS = { .pShaderBytecode = s_d3d12_vs_bytecode, .BytecodeLength = sizeof(s_d3d12_vs_bytecode) },
        .PS = { .pShaderBytecode = s_d3d12_ps_bytecode, .BytecodeLength = sizeof(s_d3d12_ps_bytecode) },
        .RasterizerState = {
            .FillMode = D3D12_FILL_MODE_SOLID,
            .CullMode = D3D12_CULL_MODE_NONE,
            .FrontCounterClockwise = FALSE,
            .DepthBias = D3D12_DEFAULT_DEPTH_BIAS,
            .DepthBiasClamp = D3D12_DEFAULT_DEPTH_BIAS_CLAMP,
            .SlopeScaledDepthBias = D3D12_DEFAULT_SLOPE_SCALED_DEPTH_BIAS,
            .DepthClipEnable = TRUE,
            .MultisampleEnable = FALSE,
            .AntialiasedLineEnable = FALSE,
            .ForcedSampleCount = 0,
            .ConservativeRaster = D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF
        },
        .BlendState = {
            .AlphaToCoverageEnable = FALSE,
            .IndependentBlendEnable = FALSE,
            .RenderTarget = {
                [0] = {
                    .BlendEnable = FALSE,
                    .LogicOpEnable = FALSE,
                    .SrcBlend = D3D12_BLEND_ONE,
                    .DestBlend = D3D12_BLEND_ZERO,
                    .BlendOp = D3D12_BLEND_OP_ADD,
                    .SrcBlendAlpha = D3D12_BLEND_ONE,
                    .DestBlendAlpha = D3D12_BLEND_ZERO,
                    .BlendOpAlpha = D3D12_BLEND_OP_ADD,
                    .LogicOp = D3D12_LOGIC_OP_NOOP,
                    .RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL
                }
            }
        },
        .DepthStencilState = { .DepthEnable = FALSE, .StencilEnable = FALSE },
        .SampleMask = UINT_MAX,
        .PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE,
        .NumRenderTargets = 1,
        .RTVFormats = { [0] = DXGI_FORMAT_R8G8B8A8_UNORM },
        .SampleDesc = { .Count = 1, .Quality = 0 },
        .NodeMask = 0,
        .Flags = D3D12_PIPELINE_STATE_FLAG_NONE
    };

    hr = ID3D12Device_CreateGraphicsPipelineState(s_d3d12.device, &pso_desc, &IID_ID3D12PipelineState, (void**)&s_d3d12.pipeline_state);
    if (FAILED(hr)) return false;

    // 8. Create Command Allocators & List
    for (UINT i = 0; i < NUM_BACK_BUFFERS; i++) {
        hr = ID3D12Device_CreateCommandAllocator(s_d3d12.device, D3D12_COMMAND_LIST_TYPE_DIRECT, &IID_ID3D12CommandAllocator, (void**)&s_d3d12.command_allocators[i]);
        if (FAILED(hr)) return false;
    }

    hr = ID3D12Device_CreateCommandList(
        s_d3d12.device,
        0,
        D3D12_COMMAND_LIST_TYPE_DIRECT,
        s_d3d12.command_allocators[s_d3d12.frame_index],
        s_d3d12.pipeline_state,
        &IID_ID3D12GraphicsCommandList,
        (void**)&s_d3d12.command_list
    );
    if (FAILED(hr)) return false;
    ID3D12GraphicsCommandList_Close(s_d3d12.command_list);

    // 9. Create Sync Objects
    hr = ID3D12Device_CreateFence(s_d3d12.device, 0, D3D12_FENCE_FLAG_NONE, &IID_ID3D12Fence, (void**)&s_d3d12.fence);
    if (FAILED(hr)) return false;
    s_d3d12.fence_values[s_d3d12.frame_index]++;

    s_d3d12.fence_event = CreateEventA(NULL, FALSE, FALSE, NULL);
    if (!s_d3d12.fence_event) return false;

    // 10. Create Texture & Staging Resources
    if (!create_fb_resources(s_d3d12.fb_width, s_d3d12.fb_height)) return false;

    printf("[D3D12] Initialized Direct3D 12 Low-Overhead Hardware Pipeline (%dx%d, VSync: %s)\n",
           s_d3d12.win_width, s_d3d12.win_height, s_d3d12.vsync ? "ON" : "OFF");
    return true;
}

bool d3d12_present(const uint8_t* yuyv_data, int fb_width, int fb_height) {
    if (!s_d3d12.device || !s_d3d12.swap_chain) return false;

    if (fb_width != s_d3d12.fb_width || fb_height != s_d3d12.fb_height) {
        wait_for_gpu();
        if (!create_fb_resources(fb_width, fb_height)) return false;
    }

    // Convert YUYV422 to RGBA32
    if (yuyv_data && s_d3d12.rgba_staging) {
        int total_pixels = fb_width * fb_height;
        const uint8_t* src = yuyv_data;
        uint32_t* dst = s_d3d12.rgba_staging;

        for (int i = 0; i < total_pixels; i += 2) {
            int y0 = src[0];
            int u  = src[1];
            int y1 = src[2];
            int v  = src[3];
            src += 4;

            int c0 = y0 - 16;
            int c1 = y1 - 16;
            int d  = u - 128;
            int e  = v - 128;

            uint8_t r0 = clamp_u8_d3d12((298 * c0 + 409 * e + 128) >> 8);
            uint8_t g0 = clamp_u8_d3d12((298 * c0 - 100 * d - 208 * e + 128) >> 8);
            uint8_t b0 = clamp_u8_d3d12((298 * c0 + 516 * d + 128) >> 8);

            uint8_t r1 = clamp_u8_d3d12((298 * c1 + 409 * e + 128) >> 8);
            uint8_t g1 = clamp_u8_d3d12((298 * c1 - 100 * d - 208 * e + 128) >> 8);
            uint8_t b1 = clamp_u8_d3d12((298 * c1 + 516 * d + 128) >> 8);

            dst[0] = (uint32_t)(r0 | (g0 << 8) | (b0 << 16) | (0xFF << 24));
            dst[1] = (uint32_t)(r1 | (g1 << 8) | (b1 << 16) | (0xFF << 24));
            dst += 2;
        }

        // Copy into upload buffer
        UINT row_pitch = (fb_width * 4 + 255) & ~255;
        void* mapped_ptr = NULL;
        D3D12_RANGE read_range = {0, 0};
        HRESULT hr = ID3D12Resource_Map(s_d3d12.fb_upload_buffer, 0, &read_range, &mapped_ptr);
        if (SUCCEEDED(hr)) {
            const uint8_t* p_src = (const uint8_t*)s_d3d12.rgba_staging;
            uint8_t* p_dst = (uint8_t*)mapped_ptr;
            int row_bytes = fb_width * 4;
            for (int y = 0; y < fb_height; y++) {
                memcpy(p_dst, p_src, row_bytes);
                p_src += row_bytes;
                p_dst += row_pitch;
            }
            ID3D12Resource_Unmap(s_d3d12.fb_upload_buffer, 0, NULL);
        }
    }

    // Reset command allocator and command list
    ID3D12CommandAllocator_Reset(s_d3d12.command_allocators[s_d3d12.frame_index]);
    ID3D12GraphicsCommandList_Reset(s_d3d12.command_list, s_d3d12.command_allocators[s_d3d12.frame_index], s_d3d12.pipeline_state);

    // Transition texture from PIXEL_SHADER_RESOURCE to COPY_DEST
    D3D12_RESOURCE_BARRIER b_copy_dest = {
        .Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION,
        .Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE,
        .Transition = {
            .pResource = s_d3d12.fb_texture,
            .Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
            .StateBefore = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE,
            .StateAfter = D3D12_RESOURCE_STATE_COPY_DEST
        }
    };
    ID3D12GraphicsCommandList_ResourceBarrier(s_d3d12.command_list, 1, &b_copy_dest);

    // Copy buffer to texture
    UINT row_pitch = (fb_width * 4 + 255) & ~255;
    D3D12_TEXTURE_COPY_LOCATION dst_loc = {
        .pResource = s_d3d12.fb_texture,
        .Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX,
        .SubresourceIndex = 0
    };
    D3D12_TEXTURE_COPY_LOCATION src_loc = {
        .pResource = s_d3d12.fb_upload_buffer,
        .Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT,
        .PlacedFootprint = {
            .Offset = 0,
            .Footprint = {
                .Format = DXGI_FORMAT_R8G8B8A8_UNORM,
                .Width = fb_width,
                .Height = fb_height,
                .Depth = 1,
                .RowPitch = row_pitch
            }
        }
    };
    ID3D12GraphicsCommandList_CopyTextureRegion(s_d3d12.command_list, &dst_loc, 0, 0, 0, &src_loc, NULL);

    // Transition texture back to PIXEL_SHADER_RESOURCE
    D3D12_RESOURCE_BARRIER b_shader_res = {
        .Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION,
        .Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE,
        .Transition = {
            .pResource = s_d3d12.fb_texture,
            .Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
            .StateBefore = D3D12_RESOURCE_STATE_COPY_DEST,
            .StateAfter = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE
        }
    };
    ID3D12GraphicsCommandList_ResourceBarrier(s_d3d12.command_list, 1, &b_shader_res);

    // Transition Swapchain Render Target from PRESENT to RENDER_TARGET
    D3D12_RESOURCE_BARRIER b_rtv = {
        .Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION,
        .Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE,
        .Transition = {
            .pResource = s_d3d12.render_targets[s_d3d12.frame_index],
            .Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
            .StateBefore = D3D12_RESOURCE_STATE_PRESENT,
            .StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET
        }
    };
    ID3D12GraphicsCommandList_ResourceBarrier(s_d3d12.command_list, 1, &b_rtv);

    // Set Render Target & Clear to solid black (letterbox bars)
    UINT rtv_inc_size = ID3D12Device_GetDescriptorHandleIncrementSize(s_d3d12.device, D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(s_d3d12.rtv_heap);
    rtv_handle.ptr += s_d3d12.frame_index * rtv_inc_size;

    ID3D12GraphicsCommandList_OMSetRenderTargets(s_d3d12.command_list, 1, &rtv_handle, FALSE, NULL);
    const FLOAT black_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    ID3D12GraphicsCommandList_ClearRenderTargetView(s_d3d12.command_list, rtv_handle, black_color, 0, NULL);

    // Calculate Aspect Ratio Preserving Viewport
    float vx = 0.0f, vy = 0.0f;
    float vw = (float)s_d3d12.win_width;
    float vh = (float)s_d3d12.win_height;

    if (s_d3d12.aspect_ratio != GFX_ASPECT_STRETCH && s_d3d12.win_height > 0) {
        float target_aspect = (s_d3d12.aspect_ratio == GFX_ASPECT_4_3) ? (4.0f / 3.0f) : (16.0f / 9.0f);
        float win_aspect = (float)s_d3d12.win_width / (float)s_d3d12.win_height;
        if (win_aspect > target_aspect) {
            vh = (float)s_d3d12.win_height;
            vw = (float)s_d3d12.win_height * target_aspect;
            vx = ((float)s_d3d12.win_width - vw) * 0.5f;
            vy = 0.0f;
        } else {
            vw = (float)s_d3d12.win_width;
            vh = (float)s_d3d12.win_width / target_aspect;
            vx = 0.0f;
            vy = ((float)s_d3d12.win_height - vh) * 0.5f;
        }
    }

    D3D12_VIEWPORT vp = {
        .TopLeftX = vx,
        .TopLeftY = vy,
        .Width = vw,
        .Height = vh,
        .MinDepth = 0.0f,
        .MaxDepth = 1.0f
    };
    D3D12_RECT scissor = {
        .left = 0,
        .top = 0,
        .right = s_d3d12.win_width,
        .bottom = s_d3d12.win_height
    };
    ID3D12GraphicsCommandList_RSSetViewports(s_d3d12.command_list, 1, &vp);
    ID3D12GraphicsCommandList_RSSetScissorRects(s_d3d12.command_list, 1, &scissor);

    // Set Root Signature & Descriptor Heap
    ID3D12GraphicsCommandList_SetGraphicsRootSignature(s_d3d12.command_list, s_d3d12.root_signature);
    ID3D12DescriptorHeap* heaps[] = { s_d3d12.srv_heap };
    ID3D12GraphicsCommandList_SetDescriptorHeaps(s_d3d12.command_list, 1, heaps);

    D3D12_GPU_DESCRIPTOR_HANDLE srv_gpu_handle = ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(s_d3d12.srv_heap);
    ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(s_d3d12.command_list, 0, srv_gpu_handle);

    // Draw full-screen triangle
    ID3D12GraphicsCommandList_IASetPrimitiveTopology(s_d3d12.command_list, D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D12GraphicsCommandList_DrawInstanced(s_d3d12.command_list, 3, 1, 0, 0);

    // Transition back to PRESENT
    D3D12_RESOURCE_BARRIER b_present = {
        .Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION,
        .Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE,
        .Transition = {
            .pResource = s_d3d12.render_targets[s_d3d12.frame_index],
            .Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
            .StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET,
            .StateAfter = D3D12_RESOURCE_STATE_PRESENT
        }
    };
    ID3D12GraphicsCommandList_ResourceBarrier(s_d3d12.command_list, 1, &b_present);

    ID3D12GraphicsCommandList_Close(s_d3d12.command_list);

    // Execute command list
    ID3D12CommandList* lists[] = { (ID3D12CommandList*)s_d3d12.command_list };
    ID3D12CommandQueue_ExecuteCommandLists(s_d3d12.command_queue, 1, lists);

    // Present
    IDXGISwapChain3_Present(s_d3d12.swap_chain, s_d3d12.vsync ? 1 : 0, 0);

    // Advance frame and sync
    UINT64 cur_fence_val = s_d3d12.fence_values[s_d3d12.frame_index];
    ID3D12CommandQueue_Signal(s_d3d12.command_queue, s_d3d12.fence, cur_fence_val);

    s_d3d12.frame_index = IDXGISwapChain3_GetCurrentBackBufferIndex(s_d3d12.swap_chain);
    if (ID3D12Fence_GetCompletedValue(s_d3d12.fence) < s_d3d12.fence_values[s_d3d12.frame_index]) {
        ID3D12Fence_SetEventOnCompletion(s_d3d12.fence, s_d3d12.fence_values[s_d3d12.frame_index], s_d3d12.fence_event);
        WaitForSingleObject(s_d3d12.fence_event, INFINITE);
    }
    s_d3d12.fence_values[s_d3d12.frame_index] = cur_fence_val + 1;
    return true;
}

void d3d12_resize(int new_width, int new_height) {
    if (!s_d3d12.swap_chain || new_width <= 0 || new_height <= 0) return;
    s_d3d12.win_width = new_width;
    s_d3d12.win_height = new_height;

    wait_for_gpu();

    for (UINT i = 0; i < NUM_BACK_BUFFERS; i++) {
        if (s_d3d12.render_targets[i]) {
            ID3D12Resource_Release(s_d3d12.render_targets[i]);
            s_d3d12.render_targets[i] = NULL;
        }
    }

    HRESULT hr = IDXGISwapChain3_ResizeBuffers(s_d3d12.swap_chain, NUM_BACK_BUFFERS, new_width, new_height, DXGI_FORMAT_R8G8B8A8_UNORM, 0);
    if (FAILED(hr)) return;

    s_d3d12.frame_index = IDXGISwapChain3_GetCurrentBackBufferIndex(s_d3d12.swap_chain);

    UINT rtv_inc_size = ID3D12Device_GetDescriptorHandleIncrementSize(s_d3d12.device, D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(s_d3d12.rtv_heap);

    for (UINT i = 0; i < NUM_BACK_BUFFERS; i++) {
        IDXGISwapChain3_GetBuffer(s_d3d12.swap_chain, i, &IID_ID3D12Resource, (void**)&s_d3d12.render_targets[i]);
        ID3D12Device_CreateRenderTargetView(s_d3d12.device, s_d3d12.render_targets[i], NULL, rtv_handle);
        rtv_handle.ptr += rtv_inc_size;
    }
}

void d3d12_shutdown(void) {
    wait_for_gpu();

    if (s_d3d12.rgba_staging) {
        free(s_d3d12.rgba_staging);
        s_d3d12.rgba_staging = NULL;
    }
    if (s_d3d12.fb_upload_buffer) {
        ID3D12Resource_Release(s_d3d12.fb_upload_buffer);
        s_d3d12.fb_upload_buffer = NULL;
    }
    if (s_d3d12.fb_texture) {
        ID3D12Resource_Release(s_d3d12.fb_texture);
        s_d3d12.fb_texture = NULL;
    }
    for (UINT i = 0; i < NUM_BACK_BUFFERS; i++) {
        if (s_d3d12.render_targets[i]) {
            ID3D12Resource_Release(s_d3d12.render_targets[i]);
            s_d3d12.render_targets[i] = NULL;
        }
        if (s_d3d12.command_allocators[i]) {
            ID3D12CommandAllocator_Release(s_d3d12.command_allocators[i]);
            s_d3d12.command_allocators[i] = NULL;
        }
    }
    if (s_d3d12.command_list) {
        ID3D12GraphicsCommandList_Release(s_d3d12.command_list);
        s_d3d12.command_list = NULL;
    }
    if (s_d3d12.pipeline_state) {
        ID3D12PipelineState_Release(s_d3d12.pipeline_state);
        s_d3d12.pipeline_state = NULL;
    }
    if (s_d3d12.root_signature) {
        ID3D12RootSignature_Release(s_d3d12.root_signature);
        s_d3d12.root_signature = NULL;
    }
    if (s_d3d12.srv_heap) {
        ID3D12DescriptorHeap_Release(s_d3d12.srv_heap);
        s_d3d12.srv_heap = NULL;
    }
    if (s_d3d12.rtv_heap) {
        ID3D12DescriptorHeap_Release(s_d3d12.rtv_heap);
        s_d3d12.rtv_heap = NULL;
    }
    if (s_d3d12.fence) {
        ID3D12Fence_Release(s_d3d12.fence);
        s_d3d12.fence = NULL;
    }
    if (s_d3d12.fence_event) {
        CloseHandle(s_d3d12.fence_event);
        s_d3d12.fence_event = NULL;
    }
    if (s_d3d12.swap_chain) {
        IDXGISwapChain3_Release(s_d3d12.swap_chain);
        s_d3d12.swap_chain = NULL;
    }
    if (s_d3d12.command_queue) {
        ID3D12CommandQueue_Release(s_d3d12.command_queue);
        s_d3d12.command_queue = NULL;
    }
    if (s_d3d12.device) {
        ID3D12Device_Release(s_d3d12.device);
        s_d3d12.device = NULL;
    }
}
