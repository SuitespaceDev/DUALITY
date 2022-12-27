#pragma once

#include "TableBindingQIF.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingQIF : TableBindingQIFT<TableBindingQIF>
    {
    public:
        TableBindingQIF();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingQIF : TableBindingQIFT<TableBindingQIF, implementation::TableBindingQIF>
    {
    };
}
