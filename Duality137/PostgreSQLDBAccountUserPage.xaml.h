#pragma once

#include "PostgreSQLDBAccountUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PostgreSQLDBAccountUserPage : PostgreSQLDBAccountUserPageT<PostgreSQLDBAccountUserPage>
    {
    public:
        PostgreSQLDBAccountUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PostgreSQLDBAccountUserPage : PostgreSQLDBAccountUserPageT<PostgreSQLDBAccountUserPage, implementation::PostgreSQLDBAccountUserPage>
    {

    };

}
