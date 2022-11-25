#pragma once

#include "QueryPostgreSQLUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryPostgreSQLUserPage : QueryPostgreSQLUserPageT<QueryPostgreSQLUserPage>
    {
    public:
        QueryPostgreSQLUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryPostgreSQLUserPage : QueryPostgreSQLUserPageT<QueryPostgreSQLUserPage, implementation::QueryPostgreSQLUserPage>
    {

    };

}
