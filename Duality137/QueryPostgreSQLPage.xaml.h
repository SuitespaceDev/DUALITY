#pragma once

#include "QueryPostgreSQLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryPostgreSQLPage : QueryPostgreSQLPageT<QueryPostgreSQLPage>
    {
    public:
        QueryPostgreSQLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryPostgreSQLPage : QueryPostgreSQLPageT<QueryPostgreSQLPage, implementation::QueryPostgreSQLPage>
    {

    };

}
