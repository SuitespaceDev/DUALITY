#pragma once

#include "TableParamItem.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableParamItem : TableParamItemT<TableParamItem>
    {
    public:
        TableParamItem();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableParamItem : TableParamItemT<TableParamItem, implementation::TableParamItem>
    {
    };
}
