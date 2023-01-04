#pragma once

#include "winrt/HV4DX.h"

#include "ProcessorPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ProcessorPage : ProcessorPageT<ProcessorPage>
    {
    public:
        ProcessorPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct ProcessorPage : ProcessorPageT<ProcessorPage, implementation::ProcessorPage>
    {
    };
}
