#pragma once

#include "ShellUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ShellUserPage : ShellUserPageT<ShellUserPage>
    {
    public:
        ShellUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ShellUserPage : ShellUserPageT<ShellUserPage, implementation::ShellUserPage>
    {

    };

}
