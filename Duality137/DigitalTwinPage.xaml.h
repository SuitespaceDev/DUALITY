#pragma once

#include "DigitalTwinPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DigitalTwinPage : DigitalTwinPageT<DigitalTwinPage>
    {
    public:
        DigitalTwinPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DigitalTwinPage : DigitalTwinPageT<DigitalTwinPage, implementation::DigitalTwinPage>
    {

    };

}
