#pragma once

#include "PersistXMLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistXMLPage : PersistXMLPageT<PersistXMLPage>
    {
    public:
        PersistXMLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistXMLPage : PersistXMLPageT<PersistXMLPage, implementation::PersistXMLPage>
    {

    };

}
