#pragma once

#include "PipePage.g.h"

namespace winrt::Duality137::implementation
{
    struct PipePage : PipePageT<PipePage>
    {
    public:
        PipePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PipePage : PipePageT<PipePage, implementation::PipePage>
    {

    };

}
