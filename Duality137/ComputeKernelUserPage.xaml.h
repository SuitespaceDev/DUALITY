#pragma once

#include "ComputeKernelUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ComputeKernelUserPage : ComputeKernelUserPageT<ComputeKernelUserPage>
    {
    public:
        ComputeKernelUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ComputeKernelUserPage : ComputeKernelUserPageT<ComputeKernelUserPage, implementation::ComputeKernelUserPage>
    {

    };

}
