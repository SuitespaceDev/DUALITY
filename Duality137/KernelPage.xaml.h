#pragma once

#include "KernelPage.g.h"

namespace winrt::Duality137::implementation
{
    struct KernelPage : KernelPageT<KernelPage>
    {
    public:
        KernelPage();


    };

}

namespace winrt::Duality137::factory_implementation
{
    struct KernelPage : KernelPageT<KernelPage, implementation::KernelPage>
    {

    };

}
