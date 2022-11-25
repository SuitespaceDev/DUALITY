#pragma once

#include "IteratorUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct IteratorUserPage : IteratorUserPageT<IteratorUserPage>
    {
    public:
        IteratorUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct IteratorUserPage : IteratorUserPageT<IteratorUserPage, implementation::IteratorUserPage>
    {

    };

}
