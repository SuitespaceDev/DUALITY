#pragma once

#include "winrt/HV4DX.h"

#include "QueryXMLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QueryXMLPage : QueryXMLPageT<QueryXMLPage>
    {
    public:
        QueryXMLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QueryXMLPage : QueryXMLPageT<QueryXMLPage, implementation::QueryXMLPage>
    {

    };

}
