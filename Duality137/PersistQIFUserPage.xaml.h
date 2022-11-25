#pragma once

#include "PersistQIFUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistQIFUserPage : PersistQIFUserPageT<PersistQIFUserPage>
    {
    public:
        PersistQIFUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistQIFUserPage : PersistQIFUserPageT<PersistQIFUserPage, implementation::PersistQIFUserPage>
    {

    };

}
