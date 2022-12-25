#pragma once

#include "winrt/HV4DX.h"

#include "QueryQIFPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryQIFPage : QueryQIFPageT<QueryQIFPage>
    {
    public:
        QueryQIFPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryQIFPage : QueryQIFPageT<QueryQIFPage, implementation::QueryQIFPage>
    {

    };

}
