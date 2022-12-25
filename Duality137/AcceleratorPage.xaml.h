#pragma once

#include "winrt/HV4DX.h"

#include "AcceleratorPage.g.h"

namespace winrt::Duality137::implementation
{
    struct AcceleratorPage : AcceleratorPageT<AcceleratorPage>
    {
    public:
        AcceleratorPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct AcceleratorPage : AcceleratorPageT<AcceleratorPage, implementation::AcceleratorPage>
    {

    };

}
