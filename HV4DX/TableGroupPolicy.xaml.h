#pragma once

#include "TableGroupPolicy.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableGroupPolicy : TableGroupPolicyT<TableGroupPolicy>
    {
    public:
        TableGroupPolicy();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableGroupPolicy : TableGroupPolicyT<TableGroupPolicy, implementation::TableGroupPolicy>
    {
    };
}
