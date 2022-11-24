#pragma once

#include "QueryXAMLUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct QueryXAMLUserPage : QueryXAMLUserPageT<QueryXAMLUserPage>
    {
    public:
        QueryXAMLUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct QueryXAMLUserPage : QueryXAMLUserPageT<QueryXAMLUserPage, implementation::QueryXAMLUserPage>
    {

    };

}
