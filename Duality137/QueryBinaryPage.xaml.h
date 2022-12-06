#pragma once

#include "QueryBinaryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryBinaryPage : QueryBinaryPageT<QueryBinaryPage>
    {
    public:
        QueryBinaryPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryBinaryPage : QueryBinaryPageT<QueryBinaryPage, implementation::QueryBinaryPage>
    {

    };

}
