#pragma once

#include "PersistXAMLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistXAMLPage : PersistXAMLPageT<PersistXAMLPage>
    {
    public:
        PersistXAMLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistXAMLPage : PersistXAMLPageT<PersistXAMLPage, implementation::PersistXAMLPage>
    {

    };

}
