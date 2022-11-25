#pragma once

#include "SaveToCloud.g.h"

namespace winrt::Duality137::implementation
{
    struct SaveToCloud : SaveToCloudT<SaveToCloud>
    {
        SaveToCloud();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct SaveToCloud : SaveToCloudT<SaveToCloud, implementation::SaveToCloud>
    {

    };

}
