#pragma once

#include "GitProject.g.h"

namespace winrt::Duality137::implementation
{
    struct GitProject : GitProjectT<GitProject>
    {
        GitProject();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct GitProject : GitProjectT<GitProject, implementation::GitProject>
    {

    };

}
