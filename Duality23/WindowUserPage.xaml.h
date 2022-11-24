#pragma once

#include "WindowUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct WindowUserPage : WindowUserPageT<WindowUserPage>
    {
    public:
        WindowUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct WindowUserPage : WindowUserPageT<WindowUserPage, implementation::WindowUserPage>
    {

    };

}
