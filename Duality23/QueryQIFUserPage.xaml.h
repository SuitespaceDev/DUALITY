#pragma once

#include "QueryQIFUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct QueryQIFUserPage : QueryQIFUserPageT<QueryQIFUserPage>
    {
    public:
        QueryQIFUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct QueryQIFUserPage : QueryQIFUserPageT<QueryQIFUserPage, implementation::QueryQIFUserPage>
    {

    };

}
