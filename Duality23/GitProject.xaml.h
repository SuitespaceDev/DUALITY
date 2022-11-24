#pragma once

#include "GitProject.g.h"

namespace winrt::Duality23::implementation
{
    struct GitProject : GitProjectT<GitProject>
    {
        GitProject();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct GitProject : GitProjectT<GitProject, implementation::GitProject>
    {

    };

}
