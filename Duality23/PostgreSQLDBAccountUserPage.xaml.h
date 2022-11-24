#pragma once

#include "PostgreSQLDBAccountUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PostgreSQLDBAccountUserPage : PostgreSQLDBAccountUserPageT<PostgreSQLDBAccountUserPage>
    {
    public:
        PostgreSQLDBAccountUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PostgreSQLDBAccountUserPage : PostgreSQLDBAccountUserPageT<PostgreSQLDBAccountUserPage, implementation::PostgreSQLDBAccountUserPage>
    {

    };

}
