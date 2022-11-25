#pragma once

#include "PersistXMLUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistXMLUserPage : PersistXMLUserPageT<PersistXMLUserPage>
    {
    public:
        PersistXMLUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistXMLUserPage : PersistXMLUserPageT<PersistXMLUserPage, implementation::PersistXMLUserPage>
    {

    };

}
