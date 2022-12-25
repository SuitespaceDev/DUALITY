#pragma once


#include "TableRandomMemory.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableRandomMemory : TableRandomMemoryT<TableRandomMemory>
    {
    public:
        TableRandomMemory();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableRandomMemory : TableRandomMemoryT<TableRandomMemory, implementation::TableRandomMemory>
    {
    };
}
