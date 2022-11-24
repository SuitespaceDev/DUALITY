#pragma once

#include "QueryBinaryUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct QueryBinaryUserPage : QueryBinaryUserPageT<QueryBinaryUserPage>
    {
    public:
        QueryBinaryUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct QueryBinaryUserPage : QueryBinaryUserPageT<QueryBinaryUserPage, implementation::QueryBinaryUserPage>
    {

    };

}
