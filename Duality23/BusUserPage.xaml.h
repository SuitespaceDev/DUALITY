﻿#pragma once

#include "BusUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct BusUserPage : BusUserPageT<BusUserPage>
    {
    public:
        BusUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct BusUserPage : BusUserPageT<BusUserPage, implementation::BusUserPage>
    {

    };

}
