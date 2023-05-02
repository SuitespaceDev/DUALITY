#include "pch.h"

#include "CHV4DQueue.h"


namespace PeregrineX12
{
	void CHV4DQueue::HV4DNewQueue()
	{
		HRESULT hr = S_OK;

		hr = (*d3dDevice)->CreateCommandQueue(
			&d3dQueueDesc,
			__uuidof(ID3D12CommandQueue),
			(void**)d3dCommandQueue);

		hr = (*d3dDevice9)->CreateCommandAllocator(
			D3D12_COMMAND_LIST_TYPE_DIRECT,
			__uuidof(ID3D12CommandAllocator),
			(void**)d3dCommandAllocator);

		hr = (*d3dDevice9)->CreateCommandList(
			1,
			D3D12_COMMAND_LIST_TYPE_DIRECT,
			*d3dCommandAllocator,
			*d3dPipelineState,
			__uuidof(ID3D12GraphicsCommandList5),
			(void**)d3dCommandList);

		hr = (*d3dCommandList)->Close();

		D3D12_COMMAND_QUEUE_DESC d3dQueueDesc{
		d3dQueueDesc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT,
		d3dQueueDesc.Priority = D3D12_COMMAND_QUEUE_PRIORITY_NORMAL,
		d3dQueueDesc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE,
		d3dQueueDesc.NodeMask = NULL };

		return;

	}

	void CHV4DQueue::HV4DPopulateQueue()
	{

		hr = (*d3dCommandAllocator)->Reset();

		hr = (*d3dCommandList)->Reset(
			*d3dCommandAllocator,
			*d3dPipelineState);

		(*d3dCommandList)->SetGraphicsRootSignature(*d3dRootSignature);
		(*d3dCommandList)->RSSetViewports(1, &d3dViewport);
		(*d3dCommandList)->RSSetScissorRects(1, &d3dScissorRect);

		d3dResourceBarrier = CD3DX12_RESOURCE_BARRIER::Transition(
			d3dRenderTargets[frame_index],
			D3D12_RESOURCE_STATE_PRESENT,
			D3D12_RESOURCE_STATE_RENDER_TARGET);

		(*d3dCommandList)->ResourceBarrier(1, &d3dResourceBarrier);

		*d3dRTVHandle = CD3DX12_CPU_DESCRIPTOR_HANDLE(
			(*d3dRTVHeap)->GetCPUDescriptorHandleForHeapStart(),
			frame_index,
			rtv_descriptor_size);

		(*d3dCommandList)->OMSetRenderTargets(
			1,
			d3dRTVHandle,
			FALSE,
			nullptr);


		const float clearColor[] = { 0.5f, 0.5f, 0.5f, 1.0f };

		(*d3dCommandList)->ClearRenderTargetView(*d3dRTVHandle, clearColor, 0, nullptr);
		(*d3dCommandList)->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
		(*d3dCommandList)->IASetVertexBuffers(0, 1, &d3dVertexBufferView);
		(*d3dCommandList)->DrawInstanced(oInputBuffer.Size() * 3, 1, 0, 0);

		d3dResourceBarrier = CD3DX12_RESOURCE_BARRIER::Transition(
			d3dRenderTargets[frame_index],
			D3D12_RESOURCE_STATE_RENDER_TARGET,
			D3D12_RESOURCE_STATE_PRESENT);

		(*d3dCommandList)->ResourceBarrier(1, &d3dResourceBarrier);

		hr = (*d3dCommandList)->Close();

		return;

	}

	void CHV4DQueue::HV4DExecuteQueue()
	{

		*d3dCommandLists = *d3dCommandList;
		(*d3dCommandQueue)->ExecuteCommandLists(
			1,
			d3dCommandLists);

		return;

	}

}