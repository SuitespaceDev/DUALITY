#pragma once

#include "CloudProject.g.h"

namespace winrt::Duality23::implementation
{
    struct CloudProject : CloudProjectT<CloudProject>
    {
        CloudProject();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct CloudProject : CloudProjectT<CloudProject, implementation::CloudProject>
    {

    };

}
