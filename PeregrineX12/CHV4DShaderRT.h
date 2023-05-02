#pragma once

#include "IPeregrineX12.h"

namespace PeregrineX12
{
    class CHV4DShaderRT : IHV4DShader
    {
    public:
        CHV4DShaderRT() = default;

        virtual void HV4DShaderFromFile(std::wstring file);


    private:
        D3D_FEATURE_LEVEL feature_level{};

        ::ID3D12Device9** d3dDevice9{ new ::ID3D12Device9 * [1] };

        ::ID3D12RootSignature** d3dRootSignature{ new ::ID3D12RootSignature * [1] };

        ::ID3DBlob** d3dShaderBlob{ new ::ID3DBlob * [1] };

        ::ID3DBlob** d3dError{ new ::ID3DBlob * [1] };

        ::ID3DBlob** d3dSignature{ new ::ID3DBlob * [1] };

        D3D12_INPUT_ELEMENT_DESC d3dStandardVertex[3]{
            { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 24, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 } };

        D3D12_ROOT_SIGNATURE_DESC d3dRootSignatureDesc{
            d3dRootSignatureDesc.NumParameters = 0,
            d3dRootSignatureDesc.pParameters = { nullptr },
            d3dRootSignatureDesc.NumStaticSamplers = 0,
            d3dRootSignatureDesc.pStaticSamplers = { nullptr },
            d3dRootSignatureDesc.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT };

    };

}
