#pragma once

#include "TemplateProject.g.h"

namespace winrt::Duality23::implementation
{
    struct TemplateProject : TemplateProjectT<TemplateProject>
    {
        TemplateProject();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct TemplateProject : TemplateProjectT<TemplateProject, implementation::TemplateProject>
    {

    };

}
