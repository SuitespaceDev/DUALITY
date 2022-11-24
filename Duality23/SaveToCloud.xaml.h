#pragma once

#include "SaveToCloud.g.h"

namespace winrt::Duality23::implementation
{
    struct SaveToCloud : SaveToCloudT<SaveToCloud>
    {
        SaveToCloud();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct SaveToCloud : SaveToCloudT<SaveToCloud, implementation::SaveToCloud>
    {

    };

}
