#pragma once

#include "winrt/HV4DX.h"

#include "XMLBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XMLBindingPage : XMLBindingPageT<XMLBindingPage>
    {
    public:
        XMLBindingPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XMLBindingPage : XMLBindingPageT<XMLBindingPage, implementation::XMLBindingPage>
    {

    };

}
