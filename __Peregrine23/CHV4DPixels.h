#pragma once

#include "HV4DClassFactory.h"

namespace PeregrineX12
{
    class CHV4DPixels
    {
    public:
        CHV4DPixels() = default;

        IHV4DShader* HV4DLoadShaderResource(std::wstring);

        D3D12_INPUT_ELEMENT_DESC d3dStandardVertex[3]{
            { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 24, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 } };

    };

}