#pragma once

#include "TableAccountHPC.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableAccountHPC : TableAccountHPCT<TableAccountHPC>
    {
    public:
        TableAccountHPC();

    };
}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableAccountHPC : TableAccountHPCT<TableAccountHPC, implementation::TableAccountHPC>
    {
    };
}
