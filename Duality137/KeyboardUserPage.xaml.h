#pragma once

#include "KeyboardUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct KeyboardUserPage : KeyboardUserPageT<KeyboardUserPage>
    {
    public:
        KeyboardUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct KeyboardUserPage : KeyboardUserPageT<KeyboardUserPage, implementation::KeyboardUserPage>
    {

    };

}
