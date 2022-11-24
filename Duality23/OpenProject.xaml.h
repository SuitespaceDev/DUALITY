#pragma once

#include "OpenProject.g.h"

namespace winrt::Duality23::implementation
{
    struct OpenProject : OpenProjectT<OpenProject>
    {
        OpenProject();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct OpenProject : OpenProjectT<OpenProject, implementation::OpenProject>
    {

    };

}
