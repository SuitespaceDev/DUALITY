#pragma once

#include "winrt/HV4DX.h"

#include "XamlToolBarPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XamlToolBarPage : XamlToolBarPageT<XamlToolBarPage>
    {
    public:
        XamlToolBarPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XamlToolBarPage : XamlToolBarPageT<XamlToolBarPage, implementation::XamlToolBarPage>
    {

    };

}
