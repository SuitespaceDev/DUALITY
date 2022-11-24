#pragma once

#include "MassUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct MassUserPage : MassUserPageT<MassUserPage>
    {
    public:
        MassUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct MassUserPage : MassUserPageT<MassUserPage, implementation::MassUserPage>
    {

    };

}
