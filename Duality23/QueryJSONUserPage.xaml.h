#pragma once

#include "QueryJSONUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct QueryJSONUserPage : QueryJSONUserPageT<QueryJSONUserPage>
    {
    public:
        QueryJSONUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct QueryJSONUserPage : QueryJSONUserPageT<QueryJSONUserPage, implementation::QueryJSONUserPage>
    {

    };

}
