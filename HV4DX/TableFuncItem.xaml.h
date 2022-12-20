#pragma once

#include "TableFuncItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableFuncItem : TableFuncItemT<TableFuncItem>
    {
    public:
        TableFuncItem();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableFuncItem : TableFuncItemT<TableFuncItem, implementation::TableFuncItem>
    {
    };
}
