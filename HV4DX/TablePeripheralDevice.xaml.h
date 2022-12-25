#pragma once

#include "TablePeripheralDevice.g.h"

namespace winrt::HV4DX::implementation
{
    struct TablePeripheralDevice : TablePeripheralDeviceT<TablePeripheralDevice>
    {
    public:
        TablePeripheralDevice();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePeripheralDevice : TablePeripheralDeviceT<TablePeripheralDevice, implementation::TablePeripheralDevice>
    {
    };
}
