#pragma once

#include "TableXamlWidget.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXamlWidget : TableXamlWidgetT<TableXamlWidget>
    {
    public:
        TableXamlWidget();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXamlWidget : TableXamlWidgetT<TableXamlWidget, implementation::TableXamlWidget>
    {
    };
}
