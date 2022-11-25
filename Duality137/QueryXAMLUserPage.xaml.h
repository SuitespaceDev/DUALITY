#pragma once

#include "QueryXAMLUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryXAMLUserPage : QueryXAMLUserPageT<QueryXAMLUserPage>
    {
    public:
        QueryXAMLUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryXAMLUserPage : QueryXAMLUserPageT<QueryXAMLUserPage, implementation::QueryXAMLUserPage>
    {

    };

}
