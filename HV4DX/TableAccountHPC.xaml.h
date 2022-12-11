#pragma once

#include "TableAccountHPC.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAccountHPC : TableAccountHPCT<TableAccountHPC>
    {
    public:
        TableAccountHPC();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccountHPC : TableAccountHPCT<TableAccountHPC, implementation::TableAccountHPC>
    {
    };
}
