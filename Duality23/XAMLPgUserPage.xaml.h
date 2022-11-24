#pragma once

#include "XAMLPgUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct XAMLPgUserPage : XAMLPgUserPageT<XAMLPgUserPage>
    {
    public:
        XAMLPgUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct XAMLPgUserPage : XAMLPgUserPageT<XAMLPgUserPage, implementation::XAMLPgUserPage>
    {

    };

}
