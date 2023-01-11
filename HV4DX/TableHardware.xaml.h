#pragma once

#include "TableHardware.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableHardware : TableHardwareT<TableHardware>
    {
    public:
        TableHardware();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableHardware : TableHardwareT<TableHardware, implementation::TableHardware>
    {
    };
}
