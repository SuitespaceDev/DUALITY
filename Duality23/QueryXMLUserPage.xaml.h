#pragma once

#include "QueryXMLUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct QueryXMLUserPage : QueryXMLUserPageT<QueryXMLUserPage>
    {
    public:
        QueryXMLUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct QueryXMLUserPage : QueryXMLUserPageT<QueryXMLUserPage, implementation::QueryXMLUserPage>
    {

    };

}
