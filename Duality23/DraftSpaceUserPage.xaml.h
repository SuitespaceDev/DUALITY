#pragma once

#include "DraftSpaceUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct DraftSpaceUserPage : DraftSpaceUserPageT<DraftSpaceUserPage>
    {
    public:
        DraftSpaceUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct DraftSpaceUserPage : DraftSpaceUserPageT<DraftSpaceUserPage, implementation::DraftSpaceUserPage>
    {

    };

}
