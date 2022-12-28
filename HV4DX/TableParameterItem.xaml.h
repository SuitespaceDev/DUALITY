#pragma once

#include "TableParameterItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableParameterItem : TableParameterItemT<TableParameterItem>
    {
    public:
        TableParameterItem();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableParameterItem : TableParameterItemT<TableParameterItem, implementation::TableParameterItem>
    {
    };
}
