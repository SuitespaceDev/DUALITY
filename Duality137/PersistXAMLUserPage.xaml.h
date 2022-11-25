#pragma once

#include "PersistXAMLUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistXAMLUserPage : PersistXAMLUserPageT<PersistXAMLUserPage>
    {
    public:
        PersistXAMLUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistXAMLUserPage : PersistXAMLUserPageT<PersistXAMLUserPage, implementation::PersistXAMLUserPage>
    {

    };

}
