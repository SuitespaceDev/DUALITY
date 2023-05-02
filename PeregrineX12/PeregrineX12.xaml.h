#pragma once

#include "winrt/HV4D.h"

#include "PeregrineX12.g.h"

namespace winrt::PeregrineX12::implementation
{
    struct PeregrineX12 : PeregrineX12T<PeregrineX12>
    {
        PeregrineX12();

    };

}

namespace winrt::PeregrineX12::factory_implementation
{
    struct PeregrineX12 : PeregrineX12T<PeregrineX12, implementation::PeregrineX12>
    {
    };
}
