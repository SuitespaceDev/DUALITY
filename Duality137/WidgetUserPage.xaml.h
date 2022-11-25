#pragma once

#include "WidgetUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct WidgetUserPage : WidgetUserPageT<WidgetUserPage>
    {
    public:
        WidgetUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct WidgetUserPage : WidgetUserPageT<WidgetUserPage, implementation::WidgetUserPage>
    {

    };

}
