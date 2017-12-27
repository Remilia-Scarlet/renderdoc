/******************************************************************************
 * The MIT License (MIT)
 *
 * Copyright (c) 2016-2017 Baldur Karlsson
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

#include "d3d12_common.h"
#include "d3d12_resources.h"

template <>
std::string DoStringise(const D3D12Chunk &el)
{
  RDCCOMPILE_ASSERT((uint32_t)D3D12Chunk::Max == 1083, "Chunks changed without updating names");

  BEGIN_ENUM_STRINGISE(D3D12Chunk)
  {
    STRINGISE_ENUM_CLASS_NAMED(SetName, "ID3D12Resource::SetName");
    STRINGISE_ENUM_CLASS_NAMED(PushMarker, "Push Debug Region");
    STRINGISE_ENUM_CLASS_NAMED(SetMarker, "Set Marker");
    STRINGISE_ENUM_CLASS_NAMED(PopMarker, "Pop Debug Region");
    STRINGISE_ENUM_CLASS_NAMED(SetShaderDebugPath, "SetShaderDebugPath");
    STRINGISE_ENUM_CLASS_NAMED(CreateSwapBuffer, "IDXGISwapChain::GetBuffer");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateCommandQueue, "ID3D12Device::CreateCommandQueue");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateCommandAllocator,
                               "ID3D12Device::CreateCommandAllocator");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateCommandList, "ID3D12Device::CreateCommandList");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateGraphicsPipeline,
                               "ID3D12Device::CreateGraphicsPipeline");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateComputePipeline, "ID3D12Device::CreateComputePipeline");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateDescriptorHeap, "ID3D12Device::CreateDescriptorHeap");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateRootSignature, "ID3D12Device::CreateRootSignature");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateCommandSignature,
                               "ID3D12Device::CreateCommandSignature");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateHeap, "ID3D12Device::CreateHeap");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateCommittedResource,
                               "ID3D12Device::CreateCommittedResource");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreatePlacedResource, "ID3D12Device::CreatePlacedResource");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateQueryHeap, "ID3D12Device::CreateQueryHeap");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateFence, "ID3D12Device::CreateFence");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateReservedResource,
                               "ID3D12Device::CreateReservedResource");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateConstantBufferView,
                               "ID3D12Device::CreateConstantBufferView");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateShaderResourceView,
                               "ID3D12Device::CreateShaderResourceView");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateUnorderedAccessView,
                               "ID3D12Device::CreateUnorderedAccessView");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateRenderTargetView,
                               "ID3D12Device::CreateRenderTargetView");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateDepthStencilView,
                               "ID3D12Device::CreateDepthStencilView");
    STRINGISE_ENUM_CLASS_NAMED(Device_CreateSampler, "ID3D12Device::CreateSampler");
    STRINGISE_ENUM_CLASS_NAMED(Device_CopyDescriptors, "ID3D12Device::CopyDescriptors");
    STRINGISE_ENUM_CLASS_NAMED(Device_CopyDescriptorsSimple, "ID3D12Device::CopyDescriptorsSimple");
    STRINGISE_ENUM_CLASS_NAMED(Queue_ExecuteCommandLists,
                               "ID3D12CommandQueue::ExecuteCommandLists");
    STRINGISE_ENUM_CLASS_NAMED(Queue_Signal, "ID3D12CommandQueue::Signal");
    STRINGISE_ENUM_CLASS_NAMED(Queue_Wait, "ID3D12CommandQueue::Wait");
    STRINGISE_ENUM_CLASS_NAMED(Queue_UpdateTileMappings, "ID3D12CommandQueue::UpdateTileMappings");
    STRINGISE_ENUM_CLASS_NAMED(Queue_CopyTileMappings, "ID3D12CommandQueue::CopyTileMappings");
    STRINGISE_ENUM_CLASS_NAMED(List_Close, "ID3D12GraphicsCommandList::Close");
    STRINGISE_ENUM_CLASS_NAMED(List_Reset, "ID3D12GraphicsCommandList::Reset");
    STRINGISE_ENUM_CLASS_NAMED(List_ResourceBarrier, "ID3D12GraphicsCommandList::ResourceBarrier");
    STRINGISE_ENUM_CLASS_NAMED(List_BeginQuery, "ID3D12GraphicsCommandList::BeginQuery");
    STRINGISE_ENUM_CLASS_NAMED(List_EndQuery, "ID3D12GraphicsCommandList::EndQuery");
    STRINGISE_ENUM_CLASS_NAMED(List_ResolveQueryData,
                               "ID3D12GraphicsCommandList::ResolveQueryData");
    STRINGISE_ENUM_CLASS_NAMED(List_SetPredication, "ID3D12GraphicsCommandList::SetPredication");
    STRINGISE_ENUM_CLASS_NAMED(List_DrawIndexedInstanced,
                               "ID3D12GraphicsCommandList::DrawIndexedInstanced");
    STRINGISE_ENUM_CLASS_NAMED(List_DrawInstanced, "ID3D12GraphicsCommandList::DrawInstanced");
    STRINGISE_ENUM_CLASS_NAMED(List_Dispatch, "ID3D12GraphicsCommandList::Dispatch");
    STRINGISE_ENUM_CLASS_NAMED(List_ExecuteIndirect, "ID3D12GraphicsCommandList::ExecuteIndirect");
    STRINGISE_ENUM_CLASS_NAMED(List_ExecuteBundle, "ID3D12GraphicsCommandList::ExecuteBundle");
    STRINGISE_ENUM_CLASS_NAMED(List_CopyBufferRegion,
                               "ID3D12GraphicsCommandList::CopyBufferRegion");
    STRINGISE_ENUM_CLASS_NAMED(List_CopyTextureRegion,
                               "ID3D12GraphicsCommandList::CopyTextureRegion");
    STRINGISE_ENUM_CLASS_NAMED(List_CopyResource, "ID3D12GraphicsCommandList::CopyResource");
    STRINGISE_ENUM_CLASS_NAMED(List_ResolveSubresource,
                               "ID3D12GraphicsCommandList::ResolveSubresource");
    STRINGISE_ENUM_CLASS_NAMED(List_ClearRenderTargetView,
                               "ID3D12GraphicsCommandList::ClearRenderTargetView");
    STRINGISE_ENUM_CLASS_NAMED(List_ClearDepthStencilView,
                               "ID3D12GraphicsCommandList::ClearDepthStencilView");
    STRINGISE_ENUM_CLASS_NAMED(List_ClearUnorderedAccessViewUint,
                               "ID3D12GraphicsCommandList::ClearUnorderedAccessViewUint");
    STRINGISE_ENUM_CLASS_NAMED(List_ClearUnorderedAccessViewFloat,
                               "ID3D12GraphicsCommandList::ClearUnorderedAccessViewFloat");
    STRINGISE_ENUM_CLASS_NAMED(List_DiscardResource, "ID3D12GraphicsCommandList::DiscardResource");
    STRINGISE_ENUM_CLASS_NAMED(List_IASetPrimitiveTopology,
                               "ID3D12GraphicsCommandList::IASetPrimitiveTopology");
    STRINGISE_ENUM_CLASS_NAMED(List_IASetIndexBuffer,
                               "ID3D12GraphicsCommandList::IASetIndexBuffer");
    STRINGISE_ENUM_CLASS_NAMED(List_IASetVertexBuffers,
                               "ID3D12GraphicsCommandList::IASetVertexBuffers");
    STRINGISE_ENUM_CLASS_NAMED(List_SOSetTargets, "ID3D12GraphicsCommandList::SOSetTargets");
    STRINGISE_ENUM_CLASS_NAMED(List_RSSetViewports, "ID3D12GraphicsCommandList::RSSetViewports");
    STRINGISE_ENUM_CLASS_NAMED(List_RSSetScissorRects,
                               "ID3D12GraphicsCommandList::RSSetScissorRects");
    STRINGISE_ENUM_CLASS_NAMED(List_SetPipelineState,
                               "ID3D12GraphicsCommandList::SetPipelineState");
    STRINGISE_ENUM_CLASS_NAMED(List_SetDescriptorHeaps,
                               "ID3D12GraphicsCommandList::SetDescriptorHeaps");
    STRINGISE_ENUM_CLASS_NAMED(List_OMSetRenderTargets,
                               "ID3D12GraphicsCommandList::OMSetRenderTargets");
    STRINGISE_ENUM_CLASS_NAMED(List_OMSetStencilRef, "ID3D12GraphicsCommandList::OMSetStencilRef");
    STRINGISE_ENUM_CLASS_NAMED(List_OMSetBlendFactor,
                               "ID3D12GraphicsCommandList::OMSetBlendFactor");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRootDescriptorTable,
                               "ID3D12GraphicsCommandList::SetGraphicsRootDescriptorTable");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRootSignature,
                               "ID3D12GraphicsCommandList::SetGraphicsRootSignature");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRoot32BitConstant,
                               "ID3D12GraphicsCommandList::SetGraphicsRoot32BitConstant");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRoot32BitConstants,
                               "ID3D12GraphicsCommandList::SetGraphicsRoot32BitConstants");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRootConstantBufferView,
                               "ID3D12GraphicsCommandList::SetGraphicsRootConstantBufferView");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRootShaderResourceView,
                               "ID3D12GraphicsCommandList::SetGraphicsRootShaderResourceView");
    STRINGISE_ENUM_CLASS_NAMED(List_SetGraphicsRootUnorderedAccessView,
                               "ID3D12GraphicsCommandList::SetGraphicsRootUnorderedAccessView");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRootDescriptorTable,
                               "ID3D12GraphicsCommandList::SetComputeRootDescriptorTable");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRootSignature,
                               "ID3D12GraphicsCommandList::SetComputeRootSignature");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRoot32BitConstant,
                               "ID3D12GraphicsCommandList::SetComputeRoot32BitConstant");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRoot32BitConstants,
                               "ID3D12GraphicsCommandList::SetComputeRoot32BitConstants");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRootConstantBufferView,
                               "ID3D12GraphicsCommandList::SetComputeRootConstantBufferView");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRootShaderResourceView,
                               "ID3D12GraphicsCommandList::SetComputeRootShaderResourceView");
    STRINGISE_ENUM_CLASS_NAMED(List_SetComputeRootUnorderedAccessView,
                               "ID3D12GraphicsCommandList::SetComputeRootUnorderedAccessView");
    STRINGISE_ENUM_CLASS_NAMED(List_CopyTiles, "ID3D12GraphicsCommandList::CopyTiles");
    STRINGISE_ENUM_CLASS_NAMED(Resource_Unmap, "ID3D12Resource::Unmap");
    STRINGISE_ENUM_CLASS_NAMED(Resource_WriteToSubresource, "ID3D12Resource::WriteToSubresource");
    STRINGISE_ENUM_CLASS_NAMED(List_IndirectSubCommand, "Indirect Sub-command");
    STRINGISE_ENUM_CLASS_NAMED(Max, "Max Chunk");
  }
  END_ENUM_STRINGISE()
}

template <>
std::string DoStringise(const D3D12DescriptorType &el)
{
  if((uint32_t)el < (uint32_t)D3D12DescriptorType::CBV)
    return "Sampler";

  BEGIN_ENUM_STRINGISE(D3D12DescriptorType);
  {
    STRINGISE_ENUM_CLASS_NAMED(CBV, "CBV");
    STRINGISE_ENUM_CLASS_NAMED(SRV, "SRV");
    STRINGISE_ENUM_CLASS_NAMED(UAV, "UAV");
    STRINGISE_ENUM_CLASS_NAMED(RTV, "RTV");
    STRINGISE_ENUM_CLASS_NAMED(DSV, "DSV");
    STRINGISE_ENUM_CLASS_NAMED(Undefined, "Undefined");
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12ResourceType &el)
{
  BEGIN_ENUM_STRINGISE(D3D12ResourceType);
  {
    STRINGISE_ENUM_NAMED(Resource_Device, "Device");
    STRINGISE_ENUM_NAMED(Resource_Unknown, "Unknown");
    STRINGISE_ENUM_NAMED(Resource_CommandAllocator, "Command Allocator");
    STRINGISE_ENUM_NAMED(Resource_CommandQueue, "Command Queue");
    STRINGISE_ENUM_NAMED(Resource_CommandSignature, "Command Signature");
    STRINGISE_ENUM_NAMED(Resource_DescriptorHeap, "Descriptor Heap");
    STRINGISE_ENUM_NAMED(Resource_Fence, "Fence");
    STRINGISE_ENUM_NAMED(Resource_Heap, "Heap");
    STRINGISE_ENUM_NAMED(Resource_PipelineState, "Pipeline State");
    STRINGISE_ENUM_NAMED(Resource_QueryHeap, "Query Heap");
    STRINGISE_ENUM_NAMED(Resource_Resource, "Resource");
    STRINGISE_ENUM_NAMED(Resource_GraphicsCommandList, "Graphics CommandList");
    STRINGISE_ENUM_NAMED(Resource_RootSignature, "Root Signature");
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_HEAP_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_HEAP_TYPE);
  {
    STRINGISE_ENUM(D3D12_HEAP_TYPE_DEFAULT)
    STRINGISE_ENUM(D3D12_HEAP_TYPE_UPLOAD)
    STRINGISE_ENUM(D3D12_HEAP_TYPE_READBACK)
    STRINGISE_ENUM(D3D12_HEAP_TYPE_CUSTOM)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_CPU_PAGE_PROPERTY &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_CPU_PAGE_PROPERTY);
  {
    STRINGISE_ENUM(D3D12_CPU_PAGE_PROPERTY_UNKNOWN)
    STRINGISE_ENUM(D3D12_CPU_PAGE_PROPERTY_NOT_AVAILABLE)
    STRINGISE_ENUM(D3D12_CPU_PAGE_PROPERTY_WRITE_COMBINE)
    STRINGISE_ENUM(D3D12_CPU_PAGE_PROPERTY_WRITE_BACK)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_MEMORY_POOL &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_MEMORY_POOL);
  {
    STRINGISE_ENUM(D3D12_MEMORY_POOL_UNKNOWN)
    STRINGISE_ENUM(D3D12_MEMORY_POOL_L0)
    STRINGISE_ENUM(D3D12_MEMORY_POOL_L1)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_QUERY_HEAP_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_QUERY_HEAP_TYPE);
  {
    STRINGISE_ENUM(D3D12_QUERY_HEAP_TYPE_OCCLUSION)
    STRINGISE_ENUM(D3D12_QUERY_HEAP_TYPE_TIMESTAMP)
    STRINGISE_ENUM(D3D12_QUERY_HEAP_TYPE_PIPELINE_STATISTICS)
    STRINGISE_ENUM(D3D12_QUERY_HEAP_TYPE_SO_STATISTICS)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_QUERY_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_QUERY_TYPE);
  {
    STRINGISE_ENUM(D3D12_QUERY_TYPE_OCCLUSION)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_BINARY_OCCLUSION)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_TIMESTAMP)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_PIPELINE_STATISTICS)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_SO_STATISTICS_STREAM0)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_SO_STATISTICS_STREAM1)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_SO_STATISTICS_STREAM2)
    STRINGISE_ENUM(D3D12_QUERY_TYPE_SO_STATISTICS_STREAM3)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_PREDICATION_OP &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_PREDICATION_OP);
  {
    STRINGISE_ENUM(D3D12_PREDICATION_OP_EQUAL_ZERO)
    STRINGISE_ENUM(D3D12_PREDICATION_OP_NOT_EQUAL_ZERO)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_DESCRIPTOR_HEAP_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_DESCRIPTOR_HEAP_TYPE);
  {
    STRINGISE_ENUM(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV)
    STRINGISE_ENUM(D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER)
    STRINGISE_ENUM(D3D12_DESCRIPTOR_HEAP_TYPE_RTV)
    STRINGISE_ENUM(D3D12_DESCRIPTOR_HEAP_TYPE_DSV)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_RESOURCE_BARRIER_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_RESOURCE_BARRIER_TYPE);
  {
    STRINGISE_ENUM(D3D12_RESOURCE_BARRIER_TYPE_TRANSITION)
    STRINGISE_ENUM(D3D12_RESOURCE_BARRIER_TYPE_ALIASING)
    STRINGISE_ENUM(D3D12_RESOURCE_BARRIER_TYPE_UAV)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_SRV_DIMENSION &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_SRV_DIMENSION);
  {
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_UNKNOWN)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_BUFFER)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE1D)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE1DARRAY)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE2D)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE2DARRAY)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE2DMS)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURE3D)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURECUBE)
    STRINGISE_ENUM(D3D12_SRV_DIMENSION_TEXTURECUBEARRAY)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_RTV_DIMENSION &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_RTV_DIMENSION);
  {
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_UNKNOWN)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_BUFFER)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE1D)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE1DARRAY)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE2D)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE2DARRAY)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE2DMS)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY)
    STRINGISE_ENUM(D3D12_RTV_DIMENSION_TEXTURE3D)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_UAV_DIMENSION &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_UAV_DIMENSION);
  {
    STRINGISE_ENUM(D3D12_UAV_DIMENSION_BUFFER)
    STRINGISE_ENUM(D3D12_UAV_DIMENSION_TEXTURE1D)
    STRINGISE_ENUM(D3D12_UAV_DIMENSION_TEXTURE1DARRAY)
    STRINGISE_ENUM(D3D12_UAV_DIMENSION_TEXTURE2D)
    STRINGISE_ENUM(D3D12_UAV_DIMENSION_TEXTURE2DARRAY)
    STRINGISE_ENUM(D3D12_UAV_DIMENSION_TEXTURE3D)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_DSV_DIMENSION &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_DSV_DIMENSION);
  {
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_UNKNOWN)
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_TEXTURE1D)
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_TEXTURE1DARRAY)
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_TEXTURE2D)
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_TEXTURE2DARRAY)
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_TEXTURE2DMS)
    STRINGISE_ENUM(D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_FILTER &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_FILTER);
  {
    STRINGISE_ENUM(D3D12_FILTER_MIN_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MIN_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MIN_POINT_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MIN_LINEAR_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MIN_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MIN_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_ANISOTROPIC);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_COMPARISON_ANISOTROPIC);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MINIMUM_ANISOTROPIC);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR);
    STRINGISE_ENUM(D3D12_FILTER_MAXIMUM_ANISOTROPIC);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TEXTURE_ADDRESS_MODE &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_TEXTURE_ADDRESS_MODE);
  {
    STRINGISE_ENUM(D3D12_TEXTURE_ADDRESS_MODE_WRAP);
    STRINGISE_ENUM(D3D12_TEXTURE_ADDRESS_MODE_MIRROR);
    STRINGISE_ENUM(D3D12_TEXTURE_ADDRESS_MODE_CLAMP);
    STRINGISE_ENUM(D3D12_TEXTURE_ADDRESS_MODE_BORDER);
    STRINGISE_ENUM(D3D12_TEXTURE_ADDRESS_MODE_MIRROR_ONCE);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_BLEND &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_BLEND);
  {
    STRINGISE_ENUM(D3D12_BLEND_ZERO);
    STRINGISE_ENUM(D3D12_BLEND_ONE);
    STRINGISE_ENUM(D3D12_BLEND_SRC_COLOR);
    STRINGISE_ENUM(D3D12_BLEND_INV_SRC_COLOR);
    STRINGISE_ENUM(D3D12_BLEND_SRC_ALPHA);
    STRINGISE_ENUM(D3D12_BLEND_INV_SRC_ALPHA);
    STRINGISE_ENUM(D3D12_BLEND_DEST_ALPHA);
    STRINGISE_ENUM(D3D12_BLEND_INV_DEST_ALPHA);
    STRINGISE_ENUM(D3D12_BLEND_DEST_COLOR);
    STRINGISE_ENUM(D3D12_BLEND_INV_DEST_COLOR);
    STRINGISE_ENUM(D3D12_BLEND_SRC_ALPHA_SAT);
    STRINGISE_ENUM(D3D12_BLEND_BLEND_FACTOR);
    STRINGISE_ENUM(D3D12_BLEND_INV_BLEND_FACTOR);
    STRINGISE_ENUM(D3D12_BLEND_SRC1_COLOR);
    STRINGISE_ENUM(D3D12_BLEND_INV_SRC1_COLOR);
    STRINGISE_ENUM(D3D12_BLEND_SRC1_ALPHA);
    STRINGISE_ENUM(D3D12_BLEND_INV_SRC1_ALPHA);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_BLEND_OP &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_BLEND_OP);
  {
    STRINGISE_ENUM(D3D12_BLEND_OP_ADD);
    STRINGISE_ENUM(D3D12_BLEND_OP_SUBTRACT);
    STRINGISE_ENUM(D3D12_BLEND_OP_REV_SUBTRACT);
    STRINGISE_ENUM(D3D12_BLEND_OP_MIN);
    STRINGISE_ENUM(D3D12_BLEND_OP_MAX);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_LOGIC_OP &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_LOGIC_OP);
  {
    STRINGISE_ENUM(D3D12_LOGIC_OP_CLEAR);
    STRINGISE_ENUM(D3D12_LOGIC_OP_SET);
    STRINGISE_ENUM(D3D12_LOGIC_OP_COPY);
    STRINGISE_ENUM(D3D12_LOGIC_OP_COPY_INVERTED);
    STRINGISE_ENUM(D3D12_LOGIC_OP_NOOP);
    STRINGISE_ENUM(D3D12_LOGIC_OP_INVERT);
    STRINGISE_ENUM(D3D12_LOGIC_OP_AND);
    STRINGISE_ENUM(D3D12_LOGIC_OP_NAND);
    STRINGISE_ENUM(D3D12_LOGIC_OP_OR);
    STRINGISE_ENUM(D3D12_LOGIC_OP_NOR);
    STRINGISE_ENUM(D3D12_LOGIC_OP_XOR);
    STRINGISE_ENUM(D3D12_LOGIC_OP_EQUIV);
    STRINGISE_ENUM(D3D12_LOGIC_OP_AND_REVERSE);
    STRINGISE_ENUM(D3D12_LOGIC_OP_AND_INVERTED);
    STRINGISE_ENUM(D3D12_LOGIC_OP_OR_REVERSE);
    STRINGISE_ENUM(D3D12_LOGIC_OP_OR_INVERTED);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_FILL_MODE &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_FILL_MODE);
  {
    STRINGISE_ENUM(D3D12_FILL_MODE_WIREFRAME);
    STRINGISE_ENUM(D3D12_FILL_MODE_SOLID);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_CULL_MODE &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_CULL_MODE);
  {
    STRINGISE_ENUM(D3D12_CULL_MODE_NONE);
    STRINGISE_ENUM(D3D12_CULL_MODE_FRONT);
    STRINGISE_ENUM(D3D12_CULL_MODE_BACK);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_CONSERVATIVE_RASTERIZATION_MODE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_CONSERVATIVE_RASTERIZATION_MODE);
  {
    STRINGISE_ENUM(D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF)
    STRINGISE_ENUM(D3D12_CONSERVATIVE_RASTERIZATION_MODE_ON)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_COMPARISON_FUNC &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_COMPARISON_FUNC);
  {
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_NEVER);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_LESS);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_EQUAL);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_LESS_EQUAL);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_GREATER);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_NOT_EQUAL);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_GREATER_EQUAL);
    STRINGISE_ENUM(D3D12_COMPARISON_FUNC_ALWAYS);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_DEPTH_WRITE_MASK &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_DEPTH_WRITE_MASK);
  {
    STRINGISE_ENUM(D3D12_DEPTH_WRITE_MASK_ZERO)
    STRINGISE_ENUM(D3D12_DEPTH_WRITE_MASK_ALL)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_STENCIL_OP &el)
{
  // possible for unused fields via 0-initialisation
  if((int)el == 0)
    return "--";

  BEGIN_ENUM_STRINGISE(D3D12_STENCIL_OP);
  {
    STRINGISE_ENUM(D3D12_STENCIL_OP_KEEP);
    STRINGISE_ENUM(D3D12_STENCIL_OP_ZERO);
    STRINGISE_ENUM(D3D12_STENCIL_OP_REPLACE);
    STRINGISE_ENUM(D3D12_STENCIL_OP_INCR_SAT);
    STRINGISE_ENUM(D3D12_STENCIL_OP_DECR_SAT);
    STRINGISE_ENUM(D3D12_STENCIL_OP_INVERT);
    STRINGISE_ENUM(D3D12_STENCIL_OP_INCR);
    STRINGISE_ENUM(D3D12_STENCIL_OP_DECR);
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_INPUT_CLASSIFICATION &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_INPUT_CLASSIFICATION);
  {
    STRINGISE_ENUM(D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA)
    STRINGISE_ENUM(D3D12_INPUT_CLASSIFICATION_PER_INSTANCE_DATA)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_INDEX_BUFFER_STRIP_CUT_VALUE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_INDEX_BUFFER_STRIP_CUT_VALUE);
  {
    STRINGISE_ENUM(D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_DISABLED)
    STRINGISE_ENUM(D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFF)
    STRINGISE_ENUM(D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFFFFFF)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_PRIMITIVE_TOPOLOGY_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_PRIMITIVE_TOPOLOGY_TYPE);
  {
    STRINGISE_ENUM(D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED)
    STRINGISE_ENUM(D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT)
    STRINGISE_ENUM(D3D12_PRIMITIVE_TOPOLOGY_TYPE_LINE)
    STRINGISE_ENUM(D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE)
    STRINGISE_ENUM(D3D12_PRIMITIVE_TOPOLOGY_TYPE_PATCH)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_INDIRECT_ARGUMENT_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_INDIRECT_ARGUMENT_TYPE);
  {
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_DRAW)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_DRAW_INDEXED)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_DISPATCH)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_VERTEX_BUFFER_VIEW)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_INDEX_BUFFER_VIEW)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_CONSTANT)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_CONSTANT_BUFFER_VIEW)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_SHADER_RESOURCE_VIEW)
    STRINGISE_ENUM(D3D12_INDIRECT_ARGUMENT_TYPE_UNORDERED_ACCESS_VIEW)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_COMMAND_LIST_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_COMMAND_LIST_TYPE);
  {
    STRINGISE_ENUM(D3D12_COMMAND_LIST_TYPE_DIRECT)
    STRINGISE_ENUM(D3D12_COMMAND_LIST_TYPE_BUNDLE)
    STRINGISE_ENUM(D3D12_COMMAND_LIST_TYPE_COMPUTE)
    STRINGISE_ENUM(D3D12_COMMAND_LIST_TYPE_COPY)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TEXTURE_COPY_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_TEXTURE_COPY_TYPE);
  {
    STRINGISE_ENUM(D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX)
    STRINGISE_ENUM(D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_RESOURCE_DIMENSION &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_RESOURCE_DIMENSION);
  {
    STRINGISE_ENUM(D3D12_RESOURCE_DIMENSION_UNKNOWN)
    STRINGISE_ENUM(D3D12_RESOURCE_DIMENSION_BUFFER)
    STRINGISE_ENUM(D3D12_RESOURCE_DIMENSION_TEXTURE1D)
    STRINGISE_ENUM(D3D12_RESOURCE_DIMENSION_TEXTURE2D)
    STRINGISE_ENUM(D3D12_RESOURCE_DIMENSION_TEXTURE3D)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TEXTURE_LAYOUT &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_TEXTURE_LAYOUT);
  {
    STRINGISE_ENUM(D3D12_TEXTURE_LAYOUT_UNKNOWN)
    STRINGISE_ENUM(D3D12_TEXTURE_LAYOUT_ROW_MAJOR)
    STRINGISE_ENUM(D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE)
    STRINGISE_ENUM(D3D12_TEXTURE_LAYOUT_64KB_STANDARD_SWIZZLE)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TILED_RESOURCES_TIER &el)
{
  BEGIN_ENUM_STRINGISE(D3D12_TILED_RESOURCES_TIER);
  {
    STRINGISE_ENUM(D3D12_TILED_RESOURCES_TIER_NOT_SUPPORTED)
    STRINGISE_ENUM(D3D12_TILED_RESOURCES_TIER_1)
    STRINGISE_ENUM(D3D12_TILED_RESOURCES_TIER_2)
    STRINGISE_ENUM(D3D12_TILED_RESOURCES_TIER_3)
  }
  END_ENUM_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_CLEAR_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_CLEAR_FLAGS);
  {
    STRINGISE_BITFIELD_BIT(D3D12_CLEAR_FLAG_DEPTH);
    STRINGISE_BITFIELD_BIT(D3D12_CLEAR_FLAG_STENCIL);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_BUFFER_SRV_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_BUFFER_SRV_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_BUFFER_SRV_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_BUFFER_SRV_FLAG_RAW);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_DSV_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_DSV_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_DSV_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_DSV_FLAG_READ_ONLY_DEPTH);
    STRINGISE_BITFIELD_BIT(D3D12_DSV_FLAG_READ_ONLY_STENCIL);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_BUFFER_UAV_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_BUFFER_UAV_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_BUFFER_UAV_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_BUFFER_UAV_FLAG_RAW);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_HEAP_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_HEAP_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_HEAP_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_SHARED);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_DENY_BUFFERS);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_ALLOW_DISPLAY);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_SHARED_CROSS_ADAPTER);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_DENY_RT_DS_TEXTURES);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_DENY_NON_RT_DS_TEXTURES);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_ALLOW_ALL_BUFFERS_AND_TEXTURES);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_ALLOW_ONLY_NON_RT_DS_TEXTURES);
    STRINGISE_BITFIELD_BIT(D3D12_HEAP_FLAG_ALLOW_ONLY_RT_DS_TEXTURES);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_FENCE_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_FENCE_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_FENCE_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_FENCE_FLAG_SHARED);
    STRINGISE_BITFIELD_BIT(D3D12_FENCE_FLAG_SHARED_CROSS_ADAPTER);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_DESCRIPTOR_HEAP_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_DESCRIPTOR_HEAP_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_DESCRIPTOR_HEAP_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_RESOURCE_BARRIER_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_RESOURCE_BARRIER_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_RESOURCE_BARRIER_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_BARRIER_FLAG_BEGIN_ONLY);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_BARRIER_FLAG_END_ONLY);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_RESOURCE_STATES &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_RESOURCE_STATES);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_RESOURCE_STATE_COMMON);
    STRINGISE_BITFIELD_VALUE(D3D12_RESOURCE_STATE_GENERIC_READ);

    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_INDEX_BUFFER);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_RENDER_TARGET);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_DEPTH_WRITE);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_DEPTH_READ);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_STREAM_OUT);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_COPY_DEST);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_COPY_SOURCE);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_RESOLVE_DEST);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_RESOLVE_SOURCE);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_STATE_PREDICATION);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_PIPELINE_STATE_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_PIPELINE_STATE_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_PIPELINE_STATE_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_PIPELINE_STATE_FLAG_TOOL_DEBUG);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_RESOURCE_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_RESOURCE_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_RESOURCE_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_FLAG_ALLOW_CROSS_ADAPTER);
    STRINGISE_BITFIELD_BIT(D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_COMMAND_QUEUE_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_COMMAND_QUEUE_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_COMMAND_QUEUE_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_COMMAND_QUEUE_FLAG_DISABLE_GPU_TIMEOUT);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TILE_COPY_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_TILE_COPY_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_TILE_COPY_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_TILE_COPY_FLAG_NO_HAZARD);
    STRINGISE_BITFIELD_BIT(D3D12_TILE_COPY_FLAG_LINEAR_BUFFER_TO_SWIZZLED_TILED_RESOURCE);
    STRINGISE_BITFIELD_BIT(D3D12_TILE_COPY_FLAG_SWIZZLED_TILED_RESOURCE_TO_LINEAR_BUFFER);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TILE_MAPPING_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_TILE_MAPPING_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_TILE_MAPPING_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_TILE_MAPPING_FLAG_NO_HAZARD);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_TILE_RANGE_FLAGS &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_TILE_RANGE_FLAGS);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_TILE_RANGE_FLAG_NONE);

    STRINGISE_BITFIELD_BIT(D3D12_TILE_RANGE_FLAG_NULL);
    STRINGISE_BITFIELD_BIT(D3D12_TILE_RANGE_FLAG_SKIP);
    STRINGISE_BITFIELD_BIT(D3D12_TILE_RANGE_FLAG_REUSE_SINGLE_TILE);
  }
  END_BITFIELD_STRINGISE();
}

template <>
std::string DoStringise(const D3D12_COLOR_WRITE_ENABLE &el)
{
  BEGIN_BITFIELD_STRINGISE(D3D12_COLOR_WRITE_ENABLE);
  {
    STRINGISE_BITFIELD_VALUE(D3D12_COLOR_WRITE_ENABLE_ALL);

    STRINGISE_BITFIELD_BIT(D3D12_COLOR_WRITE_ENABLE_RED);
    STRINGISE_BITFIELD_BIT(D3D12_COLOR_WRITE_ENABLE_GREEN);
    STRINGISE_BITFIELD_BIT(D3D12_COLOR_WRITE_ENABLE_BLUE);
    STRINGISE_BITFIELD_BIT(D3D12_COLOR_WRITE_ENABLE_ALPHA);
  }
  END_BITFIELD_STRINGISE();
}