#pragma once

#include "PersistJSONUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistJSONUserPage : PersistJSONUserPageT<PersistJSONUserPage>
    {
    public:
        PersistJSONUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistJSONUserPage : PersistJSONUserPageT<PersistJSONUserPage, implementation::PersistJSONUserPage>
    {

    };

}
