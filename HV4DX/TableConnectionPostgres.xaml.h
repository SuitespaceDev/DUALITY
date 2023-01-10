#pragma once

#include "TableConnectionPostgres.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableConnectionPostgres : TableConnectionPostgresT<TableConnectionPostgres>
    {
    public:
        TableConnectionPostgres();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableConnectionPostgres : TableConnectionPostgresT<TableConnectionPostgres, implementation::TableConnectionPostgres>
    {
    };
}
