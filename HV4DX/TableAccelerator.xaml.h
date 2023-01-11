#pragma once

#include "TableAccelerator.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAccelerator : TableAcceleratorT<TableAccelerator>
    {
    public:
        TableAccelerator();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccelerator : TableAcceleratorT<TableAccelerator, implementation::TableAccelerator>
    {
    };
}
