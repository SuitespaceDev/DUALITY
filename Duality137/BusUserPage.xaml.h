#pragma once

#include "BusUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BusUserPage : BusUserPageT<BusUserPage>
    {
    public:
        BusUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BusUserPage : BusUserPageT<BusUserPage, implementation::BusUserPage>
    {

    };

}
