#pragma once

#include "winrt/HV4DX.h"

#include "SharedMemoryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct SharedMemoryPage : SharedMemoryPageT<SharedMemoryPage>
    {
    public:
        SharedMemoryPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct SharedMemoryPage : SharedMemoryPageT<SharedMemoryPage, implementation::SharedMemoryPage>
    {

    };

}
