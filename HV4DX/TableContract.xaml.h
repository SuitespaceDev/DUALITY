#pragma once

#include "TableContract.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableContract : TableContractT<TableContract>
    {
    public:
        TableContract();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableContract : TableContractT<TableContract, implementation::TableContract>
    {
    };
}
