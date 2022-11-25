#pragma once

#include "MouseUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct MouseUserPage : MouseUserPageT<MouseUserPage>
    {
    public:
        MouseUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct MouseUserPage : MouseUserPageT<MouseUserPage, implementation::MouseUserPage>
    {

    };

}
