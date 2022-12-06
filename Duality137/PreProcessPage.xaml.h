#pragma once

#include "PreProcessPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PreProcessPage : PreProcessPageT<PreProcessPage>
    {
    public:
        PreProcessPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PreProcessPage : PreProcessPageT<PreProcessPage, implementation::PreProcessPage>
    {

    };

}
