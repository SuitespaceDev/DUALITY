#pragma once

#include "QueryXMLUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryXMLUserPage : QueryXMLUserPageT<QueryXMLUserPage>
    {
    public:
        QueryXMLUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryXMLUserPage : QueryXMLUserPageT<QueryXMLUserPage, implementation::QueryXMLUserPage>
    {

    };

}
