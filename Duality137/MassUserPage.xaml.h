#pragma once

#include "MassUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct MassUserPage : MassUserPageT<MassUserPage>
    {
    public:
        MassUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct MassUserPage : MassUserPageT<MassUserPage, implementation::MassUserPage>
    {

    };

}
