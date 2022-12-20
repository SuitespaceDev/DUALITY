#pragma once

#include "TableIttItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableIttItem : TableIttItemT<TableIttItem>
    {
    public:
        TableIttItem();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableIttItem : TableIttItemT<TableIttItem, implementation::TableIttItem>
    {
    };
}
