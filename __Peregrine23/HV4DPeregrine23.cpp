#include "pch.h"
#include "HV4DPeregrineX12RT.h"
#if __has_include("HV4DPeregrineX12RT.g.cpp")
#include "HV4DPeregrineX12RT.g.cpp"
#endif

using namespace DirectX;

using namespace winrt;

using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Collections;

using namespace winrt::Microsoft::UI::Xaml;

using namespace winrt::HV4DDUALITY;
using namespace winrt::HV4D::HV4DTensors;

namespace winrt::PeregrineX12::implementation
{
	void HV4DPeregrineX12RT::HV4DOnInit(Windows::Foundation::IInspectable panel)
	{
		InitializeDebugLayer();

		PokeSupportedFeatureLevel();

		SetSwapChainPanel(panel);

		return;

	}

	void HV4DPeregrineX12RT::HV4DNewQueue()
	{
		GetCommandQueue();

		return;

	}

	void HV4DPeregrineX12RT::HV4DInitializeGPU()
	{
		CreateDevice();

		CreateSwapChain();

		CreateHeap();

		return;

	}

	void HV4DPeregrineX12RT::HV4DNewRTV()
	{
		CreateRTV();

		return;

	}

	void HV4DPeregrineX12RT::HV4DNewShader()
	{



		return;

	}

	void HV4DPeregrineX12RT::HV4DLoadInputBuffer()
	{



		return;

	}

	void HV4DPeregrineX12RT::HV4DBindPipeline()
	{
		MapResourcesOntoPipeline();


		return;

	}

	void HV4DPeregrineX12RT::HV4DUpdate()
	{


		return;

	}

	void HV4DPeregrineX12RT::HV4DRender()
	{
		HRESULT hr = S_OK;

		HV4DPopulateCommandList();
		


		hr = (*dxgiSwapChain1)->Present(1, 0);

		HV4DWaitForPreviousFrame();
		
		return;

	}

	void HV4DPeregrineX12RT::HV4DDestroy()
	{
		HV4DWaitForPreviousFrame();

		CloseHandle(hFenceEvent);

		return;

	}

	void HV4DPeregrineX12RT::InitializeDebugLayer()
	{
		HRESULT hr = S_OK;

#if defined(_DEBUG)
		{
			hr = D3D12GetDebugInterface(
				__uuidof(ID3D12Debug),
				(void**)d3dDebugController);

			(*d3dDebugController)->EnableDebugLayer();
		}
#endif

		return;

	}

	void HV4DPeregrineX12RT::PokeSupportedFeatureLevel()
	{
		feature_level = D3D_FEATURE_LEVEL_12_0;

		return;

	}

	void HV4DPeregrineX12RT::SetSwapChainPanel(winrt::Windows::Foundation::IInspectable panel)
	{
		unknPanel = panel;

		xamlSwapChainPanel = unknPanel.as<Microsoft::UI::Xaml::Controls::SwapChainPanel>();

		auto oNativeSwapChainPanel{ xamlSwapChainPanel.as<::ISwapChainPanelNative>() };
		nativeSwapChainPanel = oNativeSwapChainPanel;

		return;

	}

	void HV4DPeregrineX12RT::CreateCommandQueue()
	{



		return;

	}

	void HV4DPeregrineX12RT::CreateDevice()
	{
		HRESULT hr = S_OK;

		hr = CreateDXGIFactory2(
			DXGI_CREATE_FACTORY_DEBUG,
			__uuidof(IDXGIFactory7),
			(void**)dxgiFactory7);

		IDXGIAdapter1* oAdaptor;
		hr = (*dxgiFactory7)->EnumAdapters1(
			2,
			&oAdaptor);

		hr = oAdaptor->QueryInterface(
			__uuidof(IDXGIAdapter4),
			(void**)dxgiAdapter4);

		hr = D3D12CreateDevice(
			*dxgiAdapter4,
			D3D_FEATURE_LEVEL_12_0,
			_uuidof(ID3D12Device),
			(void**)d3dDevice9);

		return;

	}

	void HV4DPeregrineX12RT::CreateSwapChain()
	{
		HRESULT hr = S_OK;

		hr = (*dxgiFactory7)->CreateSwapChainForComposition(
			*d3dCommandQueue,
			&dxgiSwapChainDesc,
			NULL,
			dxgiSwapChain1);

		::IDXGISwapChain** oSwapChain{ new ::IDXGISwapChain * [1] };
		hr = (*dxgiSwapChain1)->QueryInterface(
			__uuidof(::IDXGISwapChain),
			(VOID**)oSwapChain);

		hr = nativeSwapChainPanel.get()->SetSwapChain(*oSwapChain);

		hr = (*oSwapChain)->Release();

		hr = (*dxgiSwapChain1)->QueryInterface(
			__uuidof(IDXGISwapChain4),
			(void**)dxgiSwapChain4);

		frame_index = (*dxgiSwapChain4)->GetCurrentBackBufferIndex();


		return;

	}

	void HV4DPeregrineX12RT::CreateHeap()
	{
		HRESULT hr = S_OK;

		hr = (*d3dDevice9)->CreateDescriptorHeap(
			&d3dRTVHeapDesc,
			__uuidof(ID3D12DescriptorHeap),
			(void**)d3dRTVHeap);

		return;

	}

	void HV4DPeregrineX12RT::CreateRTV()
	{
		HRESULT hr = S_OK;

		rtv_descriptor_size = (*d3dDevice9)->GetDescriptorHandleIncrementSize(
			D3D12_DESCRIPTOR_HEAP_TYPE_RTV);

		CD3DX12_CPU_DESCRIPTOR_HANDLE oD3DXRTVHandle(
			(*d3dRTVHeap)->GetCPUDescriptorHandleForHeapStart());

		for (UINT n = 0; n < frame_count; n++)
		{
			hr = (*dxgiSwapChain4)->GetBuffer(
				n,
				__uuidof(ID3D12Resource),
				(void**)&(d3dRenderTargets[n]));

			(*d3dDevice9)->CreateRenderTargetView(
				d3dRenderTargets[n],
				nullptr,
				oD3DXRTVHandle);

			oD3DXRTVHandle.Offset(
				1,
				rtv_descriptor_size);

		}

		oD3DXRTVHandle.Offset(
			-2,
			rtv_descriptor_size);

		*d3dRTVHandle = oD3DXRTVHandle;

		return;

	}

	void HV4DPeregrineX12RT::MapResourcesOntoPipeline()
	{
		HRESULT hr = S_OK;

		d3dPSODesc.pRootSignature = *d3dRootSignature;
		d3dPSODesc.VS = CD3DX12_SHADER_BYTECODE(*d3dVertexShader);
		d3dPSODesc.PS = CD3DX12_SHADER_BYTECODE(*d3dPixelShader);
		d3dPSODesc.DS = { nullptr };
		d3dPSODesc.HS = { nullptr };
		d3dPSODesc.GS = { nullptr };
		d3dPSODesc.InputLayout = { d3dStandardVertex, _countof(d3dStandardVertex) };

		hr = (*d3dDevice9)->CreateGraphicsPipelineState(
			&d3dPSODesc,
			__uuidof(ID3D12PipelineState),
			(void**)d3dPipelineState);

		vertex_buffer_size = oInputBuffer.Size() * sizeof(HV4DTriangle);

		d3dResourceDesc = CD3DX12_RESOURCE_DESC::Buffer(vertex_buffer_size);

		d3dHeapProps = CD3DX12_HEAP_PROPERTIES(D3D12_HEAP_TYPE_UPLOAD); //don't use this type use default

		hr = (*d3dDevice9)->CreateCommittedResource(
			&d3dHeapProps,
			D3D12_HEAP_FLAG_NONE,
			&d3dResourceDesc,
			D3D12_RESOURCE_STATE_GENERIC_READ,
			nullptr,
			__uuidof(ID3D12Resource),
			(void**)d3dVertexBuffer);

		UINT8* vertex_data_begin;

		CD3DX12_RANGE readRange(0, 0); // We do not intend to read from this resource on the CPU.

		hr = (*d3dVertexBuffer)->Map(
			0,
			&readRange,
			(void**)&vertex_data_begin);

		HV4DTriangle* mem = (HV4DTriangle*)vertex_data_begin;

		for (UINT i = 0; i < oInputBuffer.Size(); i++)
		{
			mem[i] = oInputBuffer.GetAt(i);

		}

		//memcpy(vertex_data_begin, &oInputBuffer.GetAt(0), vertex_buffer_size);

		(*d3dVertexBuffer)->Unmap(0, nullptr);

		d3dVertexBufferView.BufferLocation = (*d3dVertexBuffer)->GetGPUVirtualAddress();
		d3dVertexBufferView.StrideInBytes = sizeof(HV4DVertex);
		d3dVertexBufferView.SizeInBytes = vertex_buffer_size;

		hr = (*d3dDevice9)->CreateFence(
			0,
			D3D12_FENCE_FLAG_NONE,
			__uuidof(ID3D12Fence),
			(void**)d3dFence);

		fence_value = 1;

		*hFenceEvent = CreateEvent(
			nullptr,
			FALSE,
			FALSE,
			nullptr);

		if (*hFenceEvent == nullptr)
		{
			winrt::throw_last_error();
		}

		HV4DWaitForPreviousFrame();

		return;

	}

	void HV4DPeregrineX12RT::HV4DWaitForPreviousFrame()
	{
		HRESULT hr = S_OK;

		const UINT64 fence = fence_value;

		hr = (*d3dCommandQueue)->Signal(
			*d3dFence, 
			fence);
		
		fence_value++;

		if ((*d3dFence)->GetCompletedValue() < fence)
		{
			hr = (*d3dFence)->SetEventOnCompletion(
				fence, 
				*hFenceEvent);
		
			WaitForSingleObject(
				*hFenceEvent,
				INFINITE);
		
		}

		frame_index = (*dxgiSwapChain4)->GetCurrentBackBufferIndex();

		return;

	}

}
