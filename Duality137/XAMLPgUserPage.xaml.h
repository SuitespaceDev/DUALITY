#pragma once

#include "XAMLPgUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct XAMLPgUserPage : XAMLPgUserPageT<XAMLPgUserPage>
    {
    public:
        XAMLPgUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct XAMLPgUserPage : XAMLPgUserPageT<XAMLPgUserPage, implementation::XAMLPgUserPage>
    {

    };

}
