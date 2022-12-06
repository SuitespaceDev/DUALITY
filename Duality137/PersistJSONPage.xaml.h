#pragma once

#include "PersistJSONPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistJSONPage : PersistJSONPageT<PersistJSONPage>
    {
    public:
        PersistJSONPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistJSONPage : PersistJSONPageT<PersistJSONPage, implementation::PersistJSONPage>
    {

    };

}
