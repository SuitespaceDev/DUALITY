#pragma once

#include "winrt/HV4DX.h"

#include "IteratorPage.g.h"

namespace winrt::Duality137::implementation
{
    struct IteratorPage : IteratorPageT<IteratorPage>
    {
    public:
        IteratorPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct IteratorPage : IteratorPageT<IteratorPage, implementation::IteratorPage>
    {

    };

}
