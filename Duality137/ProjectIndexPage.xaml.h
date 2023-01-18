#pragma once

#include "winrt/HV4DX.h"

#include "ProjectIndexPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ProjectIndexPage : ProjectIndexPageT<ProjectIndexPage>
    {
    public:
        ProjectIndexPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct ProjectIndexPage : ProjectIndexPageT<ProjectIndexPage, implementation::ProjectIndexPage>
    {
    };
}
