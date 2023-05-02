#pragma onc

#include "IPeregrineX12.h"


namespace PeregrineX12
{
    class CHV4DQueue : ICHV4DQueue
    {
    public:
        CHV4DQueue() = default;

        virtual void HV4DNewQueue();

        virtual void HV4DPopulateQueue();

        virtual void HV4DExecuteQueue();


    private:
        ::ID3D12Device** d3dDevice{ new ::ID3D12Device * [1] };

        ::ID3D12CommandAllocator** d3dCommandAllocator{ new ::ID3D12CommandAllocator * [1] };

        ::ID3D12CommandQueue** d3dCommandQueue{ new ::ID3D12CommandQueue * [1] };

        ::ID3D12CommandList** d3dCommandLists{ new ::ID3D12CommandList * [1] };

        ::ID3D12GraphicsCommandList** d3dCommandList{ new ::ID3D12GraphicsCommandList * [1] };

    };

}
