#pragma once

#include "LanguageUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct LanguageUserPage : LanguageUserPageT<LanguageUserPage>
    {
    public:
        LanguageUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct LanguageUserPage : LanguageUserPageT<LanguageUserPage, implementation::LanguageUserPage>
    {

    };

}
