#pragma once

#include "TemplateProject.g.h"

namespace winrt::Duality137::implementation
{
    struct TemplateProject : TemplateProjectT<TemplateProject>
    {
        TemplateProject();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct TemplateProject : TemplateProjectT<TemplateProject, implementation::TemplateProject>
    {

    };

}
