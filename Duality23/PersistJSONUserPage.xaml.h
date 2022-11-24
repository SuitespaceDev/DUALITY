#pragma once

#include "PersistJSONUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PersistJSONUserPage : PersistJSONUserPageT<PersistJSONUserPage>
    {
    public:
        PersistJSONUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PersistJSONUserPage : PersistJSONUserPageT<PersistJSONUserPage, implementation::PersistJSONUserPage>
    {

    };

}
