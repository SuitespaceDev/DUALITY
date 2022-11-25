#pragma once

#include "ToolBarUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ToolBarUserPage : ToolBarUserPageT<ToolBarUserPage>
    {
    public:
        ToolBarUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ToolBarUserPage : ToolBarUserPageT<ToolBarUserPage, implementation::ToolBarUserPage>
    {

    };

}
