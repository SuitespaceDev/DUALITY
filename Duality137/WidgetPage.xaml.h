#pragma once

#include "WidgetPage.g.h"

namespace winrt::Duality137::implementation
{
    struct WidgetPage : WidgetPageT<WidgetPage>
    {
    public:
        WidgetPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct WidgetPage : WidgetPageT<WidgetPage, implementation::WidgetPage>
    {

    };

}
