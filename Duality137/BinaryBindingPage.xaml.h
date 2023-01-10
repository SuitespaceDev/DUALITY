#pragma once

#include "winrt/HV4DX.h"

#include "BinaryBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BinaryBindingPage : BinaryBindingPageT<BinaryBindingPage>
    {
    public:
        BinaryBindingPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BinaryBindingPage : BinaryBindingPageT<BinaryBindingPage, implementation::BinaryBindingPage>
    {

    };

}
