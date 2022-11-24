#pragma once

#include "WidgetUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct WidgetUserPage : WidgetUserPageT<WidgetUserPage>
    {
    public:
        WidgetUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct WidgetUserPage : WidgetUserPageT<WidgetUserPage, implementation::WidgetUserPage>
    {

    };

}
