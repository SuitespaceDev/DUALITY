#pragma once

#include "winrt/HV4DX.h"

#include "BindBinaryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindBinaryPage : BindBinaryPageT<BindBinaryPage>
    {
    public:
        BindBinaryPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindBinaryPage : BindBinaryPageT<BindBinaryPage, implementation::BindBinaryPage>
    {

    };

}
