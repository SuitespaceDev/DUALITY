#pragma once

#include "KernelUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct KernelUserPage : KernelUserPageT<KernelUserPage>
    {
    public:
        KernelUserPage();


    };

}

namespace winrt::Duality23::factory_implementation
{
    struct KernelUserPage : KernelUserPageT<KernelUserPage, implementation::KernelUserPage>
    {

    };

}
