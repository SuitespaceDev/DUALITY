#pragma once

#include "ShellUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ShellUserPage : ShellUserPageT<ShellUserPage>
    {
    public:
        ShellUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ShellUserPage : ShellUserPageT<ShellUserPage, implementation::ShellUserPage>
    {

    };

}
