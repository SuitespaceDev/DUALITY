#pragma once

#include "FunctionalUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct FunctionalUserPage : FunctionalUserPageT<FunctionalUserPage>
    {
    public:
        FunctionalUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct FunctionalUserPage : FunctionalUserPageT<FunctionalUserPage, implementation::FunctionalUserPage>
    {

    };

}
