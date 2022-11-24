#pragma once

#include "BuildAccountUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct BuildAccountUserPage : BuildAccountUserPageT<BuildAccountUserPage>
    {
    public:
        BuildAccountUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct BuildAccountUserPage : BuildAccountUserPageT<BuildAccountUserPage, implementation::BuildAccountUserPage>
    {

    };

}
