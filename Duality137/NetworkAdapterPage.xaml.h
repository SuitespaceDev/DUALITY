#pragma once

#include "NetworkAdapterPage.g.h"

namespace winrt::Duality137::implementation
{
    struct NetworkAdapterPage : NetworkAdapterPageT<NetworkAdapterPage>
    {
    public:
        NetworkAdapterPage();

    };
}

namespace winrt::Duality137::factory_implementation
{
    struct NetworkAdapterPage : NetworkAdapterPageT<NetworkAdapterPage, implementation::NetworkAdapterPage>
    {
    };
}
