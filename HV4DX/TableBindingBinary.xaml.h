#pragma once

#include "TableBindingBinary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingBinary : TableBindingBinaryT<TableBindingBinary>
    {
    public:
        TableBindingBinary();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingBinary : TableBindingBinaryT<TableBindingBinary, implementation::TableBindingBinary>
    {
    };
}
