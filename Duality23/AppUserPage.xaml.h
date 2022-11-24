#pragma once

#include "AppUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct AppUserPage : AppUserPageT<AppUserPage>
    {
    public:
        AppUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct AppUserPage : AppUserPageT<AppUserPage, implementation::AppUserPage>
    {

    };

}
