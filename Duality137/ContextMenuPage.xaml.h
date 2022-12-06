#pragma once

#include "ContextMenuPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ContextMenuPage : ContextMenuPageT<ContextMenuPage>
    {
    public:
        ContextMenuPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ContextMenuPage : ContextMenuPageT<ContextMenuPage, implementation::ContextMenuPage>
    {

    };

}
