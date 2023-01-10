#pragma once

#include "winrt/HV4DX.h"

#include "XAMLBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XAMLBindingPage : XAMLBindingPageT<XAMLBindingPage>
    {
    public:
        XAMLBindingPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XAMLBindingPage : XAMLBindingPageT<XAMLBindingPage, implementation::XAMLBindingPage>
    {

    };

}
