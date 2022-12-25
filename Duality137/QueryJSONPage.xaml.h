#pragma once

#include "winrt/HV4DX.h"

#include "QueryJSONPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryJSONPage : QueryJSONPageT<QueryJSONPage>
    {
    public:
        QueryJSONPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryJSONPage : QueryJSONPageT<QueryJSONPage, implementation::QueryJSONPage>
    {

    };

}
