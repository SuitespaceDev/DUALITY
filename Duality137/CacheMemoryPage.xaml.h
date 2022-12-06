#pragma once

#include "CacheMemoryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct CacheMemoryPage : CacheMemoryPageT<CacheMemoryPage>
    {
        CacheMemoryPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct CacheMemoryPage : CacheMemoryPageT<CacheMemoryPage, implementation::CacheMemoryPage>
    {
    };
}
