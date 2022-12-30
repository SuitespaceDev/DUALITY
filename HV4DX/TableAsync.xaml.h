#pragma once

#include "TableAsync.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAsync : TableAsyncT<TableAsync>
    {
    public:
        TableAsync();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAsync : TableAsyncT<TableAsync, implementation::TableAsync>
    {
    };
}
