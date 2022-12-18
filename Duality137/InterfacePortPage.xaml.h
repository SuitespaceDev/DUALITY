#pragma once

#include "InterfacePortPage.g.h"

namespace winrt::Duality137::implementation
{
    struct InterfacePortPage : InterfacePortPageT<InterfacePortPage>
    {
    public:
        InterfacePortPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct InterfacePortPage : InterfacePortPageT<InterfacePortPage, implementation::InterfacePortPage>
    {

    };

}
