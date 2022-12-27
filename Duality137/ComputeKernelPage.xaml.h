#pragma once

#include "winrt/HV4DX.h"

#include "ComputeKernelPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ComputeKernelPage : ComputeKernelPageT<ComputeKernelPage>
    {
    public:
        ComputeKernelPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ComputeKernelPage : ComputeKernelPageT<ComputeKernelPage, implementation::ComputeKernelPage>
    {

    };

}
