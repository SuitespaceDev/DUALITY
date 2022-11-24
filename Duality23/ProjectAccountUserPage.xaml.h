#pragma once

#include "ProjectAccountUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ProjectAccountUserPage : ProjectAccountUserPageT<ProjectAccountUserPage>
    {
    public:
        ProjectAccountUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ProjectAccountUserPage : ProjectAccountUserPageT<ProjectAccountUserPage, implementation::ProjectAccountUserPage>
    {

    };

}
