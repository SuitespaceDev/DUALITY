#pragma once

#include "winrt/HV4DX.h"

#include "QueryXAMLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryXAMLPage : QueryXAMLPageT<QueryXAMLPage>
    {
    public:
        QueryXAMLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryXAMLPage : QueryXAMLPageT<QueryXAMLPage, implementation::QueryXAMLPage>
    {

    };

}
