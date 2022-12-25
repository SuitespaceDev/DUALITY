#pragma once

#include "winrt/HV4DX.h"

#include "Level2AccountPage.g.h"

namespace winrt::Duality137::implementation
{
    struct Level2AccountPage : Level2AccountPageT<Level2AccountPage>
    {
    public:
        Level2AccountPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct Level2AccountPage : Level2AccountPageT<Level2AccountPage, implementation::Level2AccountPage>
    {

    };

}
