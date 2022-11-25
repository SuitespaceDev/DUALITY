#pragma once

#include "Duality137UserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct Duality137UserPage : Duality137UserPageT<Duality137UserPage>
    {
    public:
        Duality137UserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct Duality137UserPage : Duality137UserPageT<Duality137UserPage, implementation::Duality137UserPage>
    {

    };

}
