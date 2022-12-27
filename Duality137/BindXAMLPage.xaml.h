#pragma once

#include "winrt/HV4DX.h"

#include "BindXAMLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindXAMLPage : BindXAMLPageT<BindXAMLPage>
    {
    public:
        BindXAMLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindXAMLPage : BindXAMLPageT<BindXAMLPage, implementation::BindXAMLPage>
    {

    };

}
