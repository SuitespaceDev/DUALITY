#pragma once

#include "winrt/HV4DX.h"

#include "XamlWidgetPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XamlWidgetPage : XamlWidgetPageT<XamlWidgetPage>
    {
    public:
        XamlWidgetPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XamlWidgetPage : XamlWidgetPageT<XamlWidgetPage, implementation::XamlWidgetPage>
    {

    };

}
