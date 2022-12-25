#pragma once

#include "winrt/HV4DX.h"

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
