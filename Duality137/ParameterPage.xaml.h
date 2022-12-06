#pragma once

#include "ParameterPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ParameterPage : ParameterPageT<ParameterPage>
    {
    public:
        ParameterPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ParameterPage : ParameterPageT<ParameterPage, implementation::ParameterPage>
    {

    };

}
