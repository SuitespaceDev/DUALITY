#pragma once

#include "TableEventItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableEventItem : TableEventItemT<TableEventItem>
    {
    public:
        TableEventItem();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableEventItem : TableEventItemT<TableEventItem, implementation::TableEventItem>
    {
    };
}
