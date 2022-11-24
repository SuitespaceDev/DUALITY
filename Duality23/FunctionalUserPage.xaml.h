#pragma once

#include "FunctionalUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct FunctionalUserPage : FunctionalUserPageT<FunctionalUserPage>
    {
    public:
        FunctionalUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct FunctionalUserPage : FunctionalUserPageT<FunctionalUserPage, implementation::FunctionalUserPage>
    {

    };

}
