#pragma once

#include "PersistPostgreSQLUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PersistPostgreSQLUserPage : PersistPostgreSQLUserPageT<PersistPostgreSQLUserPage>
    {
    public:
        PersistPostgreSQLUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PersistPostgreSQLUserPage : PersistPostgreSQLUserPageT<PersistPostgreSQLUserPage, implementation::PersistPostgreSQLUserPage>
    {

    };

}
