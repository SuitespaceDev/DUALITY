#include "pch.h"

#include "CHV4DShaderRT.h"


namespace PeregrineX12
{

	void CHV4DShaderRT::HV4DShaderFromFile(std::wstring file)
	{
		HRESULT hr = S_OK;

#if defined(_DEBUG)
		UINT compileFlags = D3DCOMPILE_DEBUG | D3DCOMPILE_SKIP_OPTIMIZATION;
#else
		UINT compileFlags = 0;
#endif

		hr = D3D12SerializeRootSignature(
			&d3dRootSignatureDesc,
			D3D_ROOT_SIGNATURE_VERSION_1,
			d3dSignature,
			d3dError);

		hr = (*d3dDevice9)->CreateRootSignature(
			0,
			(*d3dSignature)->GetBufferPointer(),
			(*d3dSignature)->GetBufferSize(),
			__uuidof(ID3D12RootSignature),
			(void**)d3dRootSignature);

		hr = D3DCompileFromFile(
			L"C:\\Users\\rebek\\source\\DUALITY\\PeregrineX12\\shaders.hlsl",
			nullptr,
			nullptr,
			"VSMain",
			"vs_5_0",
			compileFlags,
			0,
			d3dShaderBlob,
			d3dError);
	
	}

}