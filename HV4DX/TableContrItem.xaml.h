#pragma once

#include "TableContrItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableContrItem : TableContrItemT<TableContrItem>
    {
    public:
        TableContrItem();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableContrItem : TableContrItemT<TableContrItem, implementation::TableContrItem>
    {
    };
}
