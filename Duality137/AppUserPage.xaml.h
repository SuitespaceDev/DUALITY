#pragma once

#include "AppUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct AppUserPage : AppUserPageT<AppUserPage>
    {
    public:
        AppUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct AppUserPage : AppUserPageT<AppUserPage, implementation::AppUserPage>
    {

    };

}
