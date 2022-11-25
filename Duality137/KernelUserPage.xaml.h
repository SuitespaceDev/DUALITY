#pragma once

#include "KernelUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct KernelUserPage : KernelUserPageT<KernelUserPage>
    {
    public:
        KernelUserPage();


    };

}

namespace winrt::Duality137::factory_implementation
{
    struct KernelUserPage : KernelUserPageT<KernelUserPage, implementation::KernelUserPage>
    {

    };

}
