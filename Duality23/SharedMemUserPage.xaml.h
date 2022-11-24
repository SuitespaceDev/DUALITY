#pragma once

#include "SharedMemUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct SharedMemUserPage : SharedMemUserPageT<SharedMemUserPage>
    {
    public:
        SharedMemUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct SharedMemUserPage : SharedMemUserPageT<SharedMemUserPage, implementation::SharedMemUserPage>
    {

    };

}
