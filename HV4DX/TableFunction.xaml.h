#pragma once

#include "TableFunction.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableFunction : TableFunctionT<TableFunction>
    {
    public:
        TableFunction();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableFunction : TableFunctionT<TableFunction, implementation::TableFunction>
    {
    };
}
