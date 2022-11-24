#pragma once

#include "IteratorUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct IteratorUserPage : IteratorUserPageT<IteratorUserPage>
    {
    public:
        IteratorUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct IteratorUserPage : IteratorUserPageT<IteratorUserPage, implementation::IteratorUserPage>
    {

    };

}
