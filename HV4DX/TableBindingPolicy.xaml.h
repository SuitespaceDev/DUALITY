#pragma once

#include "TableBindingPolicy.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingPolicy : TableBindingPolicyT<TableBindingPolicy>
    {
    public:
        TableBindingPolicy();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingPolicy : TableBindingPolicyT<TableBindingPolicy, implementation::TableBindingPolicy>
    {
    };
}
