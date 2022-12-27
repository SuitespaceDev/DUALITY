#pragma once

#include "winrt/HV4DX.h"

#include "BindXMLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindXMLPage : BindXMLPageT<BindXMLPage>
    {
    public:
        BindXMLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindXMLPage : BindXMLPageT<BindXMLPage, implementation::BindXMLPage>
    {

    };

}
