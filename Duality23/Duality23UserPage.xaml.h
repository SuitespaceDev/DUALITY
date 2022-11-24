#pragma once

#include "Duality23UserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct Duality23UserPage : Duality23UserPageT<Duality23UserPage>
    {
    public:
        Duality23UserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct Duality23UserPage : Duality23UserPageT<Duality23UserPage, implementation::Duality23UserPage>
    {

    };

}
