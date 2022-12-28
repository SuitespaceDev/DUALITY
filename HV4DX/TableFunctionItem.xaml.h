#pragma once

#include "TableFunctionItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableFunctionItem : TableFunctionItemT<TableFunctionItem>
    {
    public:
        TableFunctionItem();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableFunctionItem : TableFunctionItemT<TableFunctionItem, implementation::TableFunctionItem>
    {
    };
}
