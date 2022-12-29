#pragma once

#include "winrt/HV4DX.h"

#include "XamlResourcePage.g.h"

namespace winrt::Duality137::implementation
{
    struct XamlResourcePage : XamlResourcePageT<XamlResourcePage>
    {
    public:
        XamlResourcePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XamlResourcePage : XamlResourcePageT<XamlResourcePage, implementation::XamlResourcePage>
    {

    };

}
