#pragma once

#include "ProjectAccountUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ProjectAccountUserPage : ProjectAccountUserPageT<ProjectAccountUserPage>
    {
    public:
        ProjectAccountUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ProjectAccountUserPage : ProjectAccountUserPageT<ProjectAccountUserPage, implementation::ProjectAccountUserPage>
    {

    };

}
