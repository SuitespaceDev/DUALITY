#pragma once

#include "PersistBinaryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistBinaryPage : PersistBinaryPageT<PersistBinaryPage>
    {
    public:
        PersistBinaryPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistBinaryPage : PersistBinaryPageT<PersistBinaryPage, implementation::PersistBinaryPage>
    {

    };

}
