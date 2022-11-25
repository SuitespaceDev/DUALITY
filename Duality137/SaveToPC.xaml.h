#pragma once

#include "SaveToPC.g.h"

namespace winrt::Duality137::implementation
{
    struct SaveToPC : SaveToPCT<SaveToPC>
    {
        SaveToPC();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct SaveToPC : SaveToPCT<SaveToPC, implementation::SaveToPC>
    {

    };

}
