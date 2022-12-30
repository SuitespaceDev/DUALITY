#pragma once

#include "TableRPC.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableRPC : TableRPCT<TableRPC>
    {
    public:
        TableRPC();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableRPC : TableRPCT<TableRPC, implementation::TableRPC>
    {
    };
}
