#pragma once

#include "winrt/HV4DX.h"

#include "SoftPartitionPage.g.h"

namespace winrt::Duality137::implementation
{
    struct SoftPartitionPage : SoftPartitionPageT<SoftPartitionPage>
    {
    public:
        SoftPartitionPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct SoftPartitionPage : SoftPartitionPageT<SoftPartitionPage, implementation::SoftPartitionPage>
    {

    };

}
