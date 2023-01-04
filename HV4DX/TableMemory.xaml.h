#pragma once


#include "TableMemory.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableMemory : TableMemoryT<TableMemory>
    {
    public:
        TableMemory();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableMemory : TableMemoryT<TableMemory, implementation::TableMemory>
    {
    };
}
