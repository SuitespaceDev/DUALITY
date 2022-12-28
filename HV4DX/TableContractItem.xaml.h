#pragma once

#include "TableContractItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableContractItem : TableContractItemT<TableContractItem>
    {
    public:
        TableContractItem();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableContractItem : TableContractItemT<TableContractItem, implementation::TableContractItem>
    {
    };
}
