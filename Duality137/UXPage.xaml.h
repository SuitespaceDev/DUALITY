#pragma once

#include "winrt/HV4DX.h"

#include "UXPage.g.h"

namespace winrt::Duality137::implementation
{
    struct UXPage : UXPageT<UXPage>
    {
    public:
        UXPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UXPage : UXPageT<UXPage, implementation::UXPage>
    {
    };
}
