#pragma once

#include "winrt/HV4DX.h"

#include "DebugPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DebugPage : DebugPageT<DebugPage>
    {
    public:
        DebugPage();

    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DebugPage : DebugPageT<DebugPage, implementation::DebugPage>
    {
    };
}
