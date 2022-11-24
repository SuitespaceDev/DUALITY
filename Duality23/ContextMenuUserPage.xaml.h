#pragma once

#include "ContextMenuUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ContextMenuUserPage : ContextMenuUserPageT<ContextMenuUserPage>
    {
    public:
        ContextMenuUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ContextMenuUserPage : ContextMenuUserPageT<ContextMenuUserPage, implementation::ContextMenuUserPage>
    {

    };

}
