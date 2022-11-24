#pragma once

#include "SaveToPC.g.h"

namespace winrt::Duality23::implementation
{
    struct SaveToPC : SaveToPCT<SaveToPC>
    {
        SaveToPC();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct SaveToPC : SaveToPCT<SaveToPC, implementation::SaveToPC>
    {

    };

}
