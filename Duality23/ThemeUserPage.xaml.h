#pragma once

#include "ThemeUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ThemeUserPage : ThemeUserPageT<ThemeUserPage>
    {
    public:
        ThemeUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ThemeUserPage : ThemeUserPageT<ThemeUserPage, implementation::ThemeUserPage>
    {

    };

}
