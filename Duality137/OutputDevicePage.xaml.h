#pragma once

#include "OutputDevicePage.g.h"

namespace winrt::Duality137::implementation
{
    struct OutputDevicePage : OutputDevicePageT<OutputDevicePage>
    {
    public:
        OutputDevicePage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct OutputDevicePage : OutputDevicePageT<OutputDevicePage, implementation::OutputDevicePage>
    {
    };
}
