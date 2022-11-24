#pragma once

#include "PersistXAMLUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PersistXAMLUserPage : PersistXAMLUserPageT<PersistXAMLUserPage>
    {
    public:
        PersistXAMLUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PersistXAMLUserPage : PersistXAMLUserPageT<PersistXAMLUserPage, implementation::PersistXAMLUserPage>
    {

    };

}
