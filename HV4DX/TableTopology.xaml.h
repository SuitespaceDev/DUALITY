#pragma once

#include "TableTopology.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableTopology : TableTopologyT<TableTopology>
    {
    public:
        TableTopology();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableTopology : TableTopologyT<TableTopology, implementation::TableTopology>
    {
    };
}
