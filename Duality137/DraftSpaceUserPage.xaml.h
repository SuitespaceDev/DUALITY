#pragma once

#include "DraftSpaceUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DraftSpaceUserPage : DraftSpaceUserPageT<DraftSpaceUserPage>
    {
    public:
        DraftSpaceUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DraftSpaceUserPage : DraftSpaceUserPageT<DraftSpaceUserPage, implementation::DraftSpaceUserPage>
    {

    };

}
