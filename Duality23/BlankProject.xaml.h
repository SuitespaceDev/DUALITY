#pragma once

#include "BlankProject.g.h"

namespace winrt::Duality23::implementation
{
    struct BlankProject : BlankProjectT<BlankProject>
    {
        BlankProject();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct BlankProject : BlankProjectT<BlankProject, implementation::BlankProject>
    {

    };

}
