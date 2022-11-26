#pragma once

#include "Diagnostics.g.h"

namespace winrt::Duality137::implementation
{
    struct Diagnostics : DiagnosticsT<Diagnostics>
    {
        Diagnostics();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct Diagnostics : DiagnosticsT<Diagnostics, implementation::Diagnostics>
    {
    };
}
