#pragma once

#include "winrt/HV4DX.h"

#include "Level3AccountPage.g.h"

namespace winrt::Duality137::implementation
{
    struct Level3AccountPage : Level3AccountPageT<Level3AccountPage>
    {
    public:
        Level3AccountPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct Level3AccountPage : Level3AccountPageT<Level3AccountPage, implementation::Level3AccountPage>
    {

    };

}
