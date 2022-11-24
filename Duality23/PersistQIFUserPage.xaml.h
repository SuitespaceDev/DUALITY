#pragma once

#include "PersistQIFUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PersistQIFUserPage : PersistQIFUserPageT<PersistQIFUserPage>
    {
    public:
        PersistQIFUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PersistQIFUserPage : PersistQIFUserPageT<PersistQIFUserPage, implementation::PersistQIFUserPage>
    {

    };

}
