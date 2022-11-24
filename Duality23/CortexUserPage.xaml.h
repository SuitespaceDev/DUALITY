#pragma once

#include "CortexUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct CortexUserPage : CortexUserPageT<CortexUserPage>
    {
    public:
        CortexUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct CortexUserPage : CortexUserPageT<CortexUserPage, implementation::CortexUserPage>
    {

    };

}
