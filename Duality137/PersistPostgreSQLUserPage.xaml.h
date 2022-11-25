#pragma once

#include "PersistPostgreSQLUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistPostgreSQLUserPage : PersistPostgreSQLUserPageT<PersistPostgreSQLUserPage>
    {
    public:
        PersistPostgreSQLUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistPostgreSQLUserPage : PersistPostgreSQLUserPageT<PersistPostgreSQLUserPage, implementation::PersistPostgreSQLUserPage>
    {

    };

}
