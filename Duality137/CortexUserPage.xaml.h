#pragma once

#include "CortexUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct CortexUserPage : CortexUserPageT<CortexUserPage>
    {
    public:
        CortexUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct CortexUserPage : CortexUserPageT<CortexUserPage, implementation::CortexUserPage>
    {

    };

}
