#pragma once

#include "winrt/HV4DX.h"

#include "Level4AccountPage.g.h"

namespace winrt::Duality137::implementation
{
    struct Level4AccountPage : Level4AccountPageT<Level4AccountPage>
    {
    public:
        Level4AccountPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct Level4AccountPage : Level4AccountPageT<Level4AccountPage, implementation::Level4AccountPage>
    {

    };

}
