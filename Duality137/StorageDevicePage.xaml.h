#pragma once

#include "winrt/HV4DX.h"

#include "StorageDevicePage.g.h"

namespace winrt::Duality137::implementation
{
    struct StorageDevicePage : StorageDevicePageT<StorageDevicePage>
    {
    public:
        StorageDevicePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct StorageDevicePage : StorageDevicePageT<StorageDevicePage, implementation::StorageDevicePage>
    {

    };

}
