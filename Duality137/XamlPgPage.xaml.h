#pragma once

#include "XamlPgPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XamlPgPage : XamlPgPageT<XamlPgPage>
    {
    public:
        XamlPgPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XamlPgPage : XamlPgPageT<XamlPgPage, implementation::XamlPgPage>
    {

    };

}
