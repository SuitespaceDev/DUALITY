#pragma once

#include "winrt/HV4DX.h"

#include "BindJSONPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindJSONPage : BindJSONPageT<BindJSONPage>
    {
    public:
        BindJSONPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindJSONPage : BindJSONPageT<BindJSONPage, implementation::BindJSONPage>
    {

    };

}
