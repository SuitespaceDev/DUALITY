#pragma once

#include "PersistXMLUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PersistXMLUserPage : PersistXMLUserPageT<PersistXMLUserPage>
    {
    public:
        PersistXMLUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PersistXMLUserPage : PersistXMLUserPageT<PersistXMLUserPage, implementation::PersistXMLUserPage>
    {

    };

}
