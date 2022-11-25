#pragma once

#include "ContextMenuUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ContextMenuUserPage : ContextMenuUserPageT<ContextMenuUserPage>
    {
    public:
        ContextMenuUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ContextMenuUserPage : ContextMenuUserPageT<ContextMenuUserPage, implementation::ContextMenuUserPage>
    {

    };

}
