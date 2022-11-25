#pragma once

#include "ThemeUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ThemeUserPage : ThemeUserPageT<ThemeUserPage>
    {
    public:
        ThemeUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ThemeUserPage : ThemeUserPageT<ThemeUserPage, implementation::ThemeUserPage>
    {

    };

}
