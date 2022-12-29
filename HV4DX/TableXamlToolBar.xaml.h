#pragma once

#include "TableXamlToolBar.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXamlToolBar : TableXamlToolBarT<TableXamlToolBar>
    {
    public:
        TableXamlToolBar();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXamlToolBar : TableXamlToolBarT<TableXamlToolBar, implementation::TableXamlToolBar>
    {
    };
}
