#pragma once

#include "TableBindingPostgreSQL.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingPostgreSQL : TableBindingPostgreSQLT<TableBindingPostgreSQL>
    {
    public:
        TableBindingPostgreSQL();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingPostgreSQL : TableBindingPostgreSQLT<TableBindingPostgreSQL, implementation::TableBindingPostgreSQL>
    {
    };
}
