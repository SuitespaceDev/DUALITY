#pragma once

#include "winrt/HV4DX.h"

#include "XamlControlPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XamlControlPage : XamlControlPageT<XamlControlPage>
    {
    public:
        XamlControlPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XamlControlPage : XamlControlPageT<XamlControlPage, implementation::XamlControlPage>
    {

    };

}
