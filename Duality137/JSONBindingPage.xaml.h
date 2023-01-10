#pragma once

#include "winrt/HV4DX.h"

#include "JSONBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct JSONBindingPage : JSONBindingPageT<JSONBindingPage>
    {
    public:
        JSONBindingPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct JSONBindingPage : JSONBindingPageT<JSONBindingPage, implementation::JSONBindingPage>
    {

    };

}
