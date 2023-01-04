#pragma once

#include "TableBindingPostgres.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingPostgres : TableBindingPostgresT<TableBindingPostgres>
    {
    public:
        TableBindingPostgres();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingPostgres : TableBindingPostgresT<TableBindingPostgres, implementation::TableBindingPostgres>
    {
    };
}
