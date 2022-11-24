#pragma once

#include "KeyboardUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct KeyboardUserPage : KeyboardUserPageT<KeyboardUserPage>
    {
    public:
        KeyboardUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct KeyboardUserPage : KeyboardUserPageT<KeyboardUserPage, implementation::KeyboardUserPage>
    {

    };

}
