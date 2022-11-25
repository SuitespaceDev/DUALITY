#pragma once

#include "QueryQIFUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryQIFUserPage : QueryQIFUserPageT<QueryQIFUserPage>
    {
    public:
        QueryQIFUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryQIFUserPage : QueryQIFUserPageT<QueryQIFUserPage, implementation::QueryQIFUserPage>
    {

    };

}
