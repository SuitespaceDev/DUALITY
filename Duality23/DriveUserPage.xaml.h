#pragma once

#include "DriveUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct DriveUserPage : DriveUserPageT<DriveUserPage>
    {
    public:
        DriveUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct DriveUserPage : DriveUserPageT<DriveUserPage, implementation::DriveUserPage>
    {

    };

}
