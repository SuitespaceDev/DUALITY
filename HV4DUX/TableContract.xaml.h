#pragma once

#include "TableContract.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableContract : TableContractT<TableContract>
    {
    public:
        TableContract();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableContract : TableContractT<TableContract, implementation::TableContract>
    {
    };
}
