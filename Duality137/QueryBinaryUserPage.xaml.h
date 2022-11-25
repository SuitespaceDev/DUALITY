#pragma once

#include "QueryBinaryUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryBinaryUserPage : QueryBinaryUserPageT<QueryBinaryUserPage>
    {
    public:
        QueryBinaryUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryBinaryUserPage : QueryBinaryUserPageT<QueryBinaryUserPage, implementation::QueryBinaryUserPage>
    {

    };

}
