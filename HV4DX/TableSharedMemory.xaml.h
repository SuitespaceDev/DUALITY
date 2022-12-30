#pragma once

#include "TableSharedMemory.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableSharedMemory : TableSharedMemoryT<TableSharedMemory>
    {
    public:
        TableSharedMemory();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableSharedMemory : TableSharedMemoryT<TableSharedMemory, implementation::TableSharedMemory>
    {
    };
}
