#pragma once

#include "InputOutputBusPage.g.h"

namespace winrt::Duality137::implementation
{
    struct InputOutputBusPage : InputOutputBusPageT<InputOutputBusPage>
    {
    public:
        InputOutputBusPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct InputOutputBusPage : InputOutputBusPageT<InputOutputBusPage, implementation::InputOutputBusPage>
    {

    };

}
