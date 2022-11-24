#pragma once

#include "QueryPostgreSQLUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct QueryPostgreSQLUserPage : QueryPostgreSQLUserPageT<QueryPostgreSQLUserPage>
    {
    public:
        QueryPostgreSQLUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct QueryPostgreSQLUserPage : QueryPostgreSQLUserPageT<QueryPostgreSQLUserPage, implementation::QueryPostgreSQLUserPage>
    {

    };

}
