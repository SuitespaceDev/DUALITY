#pragma once

#include "WindowUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct WindowUserPage : WindowUserPageT<WindowUserPage>
    {
    public:
        WindowUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct WindowUserPage : WindowUserPageT<WindowUserPage, implementation::WindowUserPage>
    {

    };

}
