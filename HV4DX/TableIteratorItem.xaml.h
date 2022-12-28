#pragma once

#include "TableIteratorItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableIteratorItem : TableIteratorItemT<TableIteratorItem>
    {
    public:
        TableIteratorItem();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableIteratorItem : TableIteratorItemT<TableIteratorItem, implementation::TableIteratorItem>
    {
    };
}
