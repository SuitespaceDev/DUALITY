#pragma once

#include "SharedMemUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct SharedMemUserPage : SharedMemUserPageT<SharedMemUserPage>
    {
    public:
        SharedMemUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct SharedMemUserPage : SharedMemUserPageT<SharedMemUserPage, implementation::SharedMemUserPage>
    {

    };

}
