#pragma once

#include "ProcessingCorePage.g.h"

namespace winrt::Duality137::implementation
{
    struct ProcessingCorePage : ProcessingCorePageT<ProcessingCorePage>
    {
    public:
        ProcessingCorePage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct ProcessingCorePage : ProcessingCorePageT<ProcessingCorePage, implementation::ProcessingCorePage>
    {
    };
}
