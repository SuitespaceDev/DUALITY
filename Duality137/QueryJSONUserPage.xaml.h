#pragma once

#include "QueryJSONUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryJSONUserPage : QueryJSONUserPageT<QueryJSONUserPage>
    {
    public:
        QueryJSONUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryJSONUserPage : QueryJSONUserPageT<QueryJSONUserPage, implementation::QueryJSONUserPage>
    {

    };

}
