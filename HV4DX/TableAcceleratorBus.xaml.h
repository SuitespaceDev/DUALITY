#pragma once

#include "TableAcceleratorBus.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAcceleratorBus : TableAcceleratorBusT<TableAcceleratorBus>
    {
    public:
        TableAcceleratorBus();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAcceleratorBus : TableAcceleratorBusT<TableAcceleratorBus, implementation::TableAcceleratorBus>
    {
    };
}
