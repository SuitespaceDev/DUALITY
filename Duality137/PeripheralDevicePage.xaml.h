#pragma once

#include "PeripheralDevicePage.g.h"

namespace winrt::Duality137::implementation
{
    struct PeripheralDevicePage : PeripheralDevicePageT<PeripheralDevicePage>
    {
    public:
        PeripheralDevicePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PeripheralDevicePage : PeripheralDevicePageT<PeripheralDevicePage, implementation::PeripheralDevicePage>
    {

    };

}
