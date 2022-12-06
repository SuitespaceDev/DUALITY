#pragma once

#include "UserControlPage.g.h"

namespace winrt::Duality137::implementation
{
    struct UserControlPage : UserControlPageT<UserControlPage>
    {
    public:
        UserControlPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct UserControlPage : UserControlPageT<UserControlPage, implementation::UserControlPage>
    {

    };

}
