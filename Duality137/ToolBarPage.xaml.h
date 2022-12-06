#pragma once

#include "ToolBarPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ToolBarPage : ToolBarPageT<ToolBarPage>
    {
    public:
        ToolBarPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ToolBarPage : ToolBarPageT<ToolBarPage, implementation::ToolBarPage>
    {

    };

}
