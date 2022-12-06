#pragma once

#include "InputDevicePage.g.h"

namespace winrt::Duality137::implementation
{
    struct InputDevicePage : InputDevicePageT<InputDevicePage>
    {
    public:
        InputDevicePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct InputDevicePage : InputDevicePageT<InputDevicePage, implementation::InputDevicePage>
    {

    };

}
