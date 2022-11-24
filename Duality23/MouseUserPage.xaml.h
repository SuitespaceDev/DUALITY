#pragma once

#include "MouseUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct MouseUserPage : MouseUserPageT<MouseUserPage>
    {
    public:
        MouseUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct MouseUserPage : MouseUserPageT<MouseUserPage, implementation::MouseUserPage>
    {

    };

}
