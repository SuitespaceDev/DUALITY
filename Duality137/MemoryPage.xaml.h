#pragma once

#include "winrt/HV4DX.h"

#include "MemoryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct MemoryPage : MemoryPageT<MemoryPage>
    {
        MemoryPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct MemoryPage : MemoryPageT<MemoryPage, implementation::MemoryPage>
    {
    };
}
