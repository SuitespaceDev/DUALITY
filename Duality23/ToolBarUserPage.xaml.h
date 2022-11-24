#pragma once

#include "ToolBarUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ToolBarUserPage : ToolBarUserPageT<ToolBarUserPage>
    {
    public:
        ToolBarUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ToolBarUserPage : ToolBarUserPageT<ToolBarUserPage, implementation::ToolBarUserPage>
    {

    };

}
