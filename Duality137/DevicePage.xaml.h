#pragma once

#include "winrt/HV4DX.h"

#include "DevicePage.g.h"

namespace winrt::Duality137::implementation
{
    struct DevicePage : DevicePageT<DevicePage>
    {
    public:
        DevicePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DevicePage : DevicePageT<DevicePage, implementation::DevicePage>
    {

    };

}
