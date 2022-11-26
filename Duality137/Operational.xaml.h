#pragma once

#include "Operational.g.h"

namespace winrt::Duality137::implementation
{
    struct Operational : OperationalT<Operational>
    {
        Operational();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct Operational : OperationalT<Operational, implementation::Operational>
    {
    };
}
