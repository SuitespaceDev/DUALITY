#pragma once

#include "OpenProject.g.h"

namespace winrt::Duality137::implementation
{
    struct OpenProject : OpenProjectT<OpenProject>
    {
        OpenProject();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct OpenProject : OpenProjectT<OpenProject, implementation::OpenProject>
    {

    };

}
