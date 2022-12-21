#pragma once

#include "TableAccountPostgreSQL.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAccountPostgreSQL : TableAccountPostgreSQLT<TableAccountPostgreSQL>
    {
    public:
        TableAccountPostgreSQL();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccountPostgreSQL : TableAccountPostgreSQLT<TableAccountPostgreSQL, implementation::TableAccountPostgreSQL>
    {
    };
}
