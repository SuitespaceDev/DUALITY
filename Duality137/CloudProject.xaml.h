#pragma once

#include "CloudProject.g.h"

namespace winrt::Duality137::implementation
{
    struct CloudProject : CloudProjectT<CloudProject>
    {
        CloudProject();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct CloudProject : CloudProjectT<CloudProject, implementation::CloudProject>
    {

    };

}
