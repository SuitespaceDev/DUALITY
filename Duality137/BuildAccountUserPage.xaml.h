#pragma once

#include "BuildAccountUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BuildAccountUserPage : BuildAccountUserPageT<BuildAccountUserPage>
    {
    public:
        BuildAccountUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BuildAccountUserPage : BuildAccountUserPageT<BuildAccountUserPage, implementation::BuildAccountUserPage>
    {

    };

}
