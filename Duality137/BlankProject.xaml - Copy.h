#pragma once

#include "BlankProject.g.h"

namespace winrt::Duality137::implementation
{
    struct BlankProject : BlankProjectT<BlankProject>
    {
        BlankProject();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct BlankProject : BlankProjectT<BlankProject, implementation::BlankProject>
    {

    };

}
