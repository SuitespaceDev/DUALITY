#pragma once

#include "DriveUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DriveUserPage : DriveUserPageT<DriveUserPage>
    {
    public:
        DriveUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DriveUserPage : DriveUserPageT<DriveUserPage, implementation::DriveUserPage>
    {

    };

}
