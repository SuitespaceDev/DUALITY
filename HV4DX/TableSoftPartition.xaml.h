#pragma once

#include "TableSoftPartition.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableSoftPartition : TableSoftPartitionT<TableSoftPartition>
    {
    public:
        TableSoftPartition();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableSoftPartition : TableSoftPartitionT<TableSoftPartition, implementation::TableSoftPartition>
    {
    };
}
