#pragma once

#include "LanguageUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct LanguageUserPage : LanguageUserPageT<LanguageUserPage>
    {
    public:
        LanguageUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct LanguageUserPage : LanguageUserPageT<LanguageUserPage, implementation::LanguageUserPage>
    {

    };

}
