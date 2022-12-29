#pragma once

#include "TableXamlContextMenu.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXamlContextMenu : TableXamlContextMenuT<TableXamlContextMenu>
    {
    public:
        TableXamlContextMenu();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXamlContextMenu : TableXamlContextMenuT<TableXamlContextMenu, implementation::TableXamlContextMenu>
    {
    };
}
