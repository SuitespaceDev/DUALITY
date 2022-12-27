#pragma once

#include "winrt/HV4DX.h"

#include "FunctionPage.g.h"

namespace winrt::Duality137::implementation
{
    struct FunctionPage : FunctionPageT<FunctionPage>
    {
    public:
        FunctionPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct FunctionPage : FunctionPageT<FunctionPage, implementation::FunctionPage>
    {

    };

}
