#pragma once


#include "TableRandomMemory.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableRandomMemory : TableRandomMemoryT<TableRandomMemory>
    {
        TableRandomMemory();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableRandomMemory : TableRandomMemoryT<TableRandomMemory, implementation::TableRandomMemory>
    {
    };
}
