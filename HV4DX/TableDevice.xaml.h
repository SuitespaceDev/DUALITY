#pragma once

#include "TableDevice.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDevice : TableDeviceT<TableDevice>
    {
    public:
        TableDevice();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDevice : TableDeviceT<TableDevice, implementation::TableDevice>
    {
    };
}
