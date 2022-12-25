#pragma once

#include "winrt/HV4DX.h"

#include "Level1AccountPage.g.h"

namespace winrt::Duality137::implementation
{
    struct Level1AccountPage : Level1AccountPageT<Level1AccountPage>
    {
    public:
        Level1AccountPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct Level1AccountPage : Level1AccountPageT<Level1AccountPage, implementation::Level1AccountPage>
    {

    };

}
