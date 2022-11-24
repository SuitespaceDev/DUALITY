#pragma once

#include "ComputeKernelUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ComputeKernelUserPage : ComputeKernelUserPageT<ComputeKernelUserPage>
    {
    public:
        ComputeKernelUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ComputeKernelUserPage : ComputeKernelUserPageT<ComputeKernelUserPage, implementation::ComputeKernelUserPage>
    {

    };

}
