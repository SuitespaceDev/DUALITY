#pragma once

#include "winrt/HV4DX.h"

#include "XamlContextMenuPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XamlContextMenuPage : XamlContextMenuPageT<XamlContextMenuPage>
    {
    public:
        XamlContextMenuPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XamlContextMenuPage : XamlContextMenuPageT<XamlContextMenuPage, implementation::XamlContextMenuPage>
    {

    };

}
