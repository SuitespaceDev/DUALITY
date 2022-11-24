#pragma once

#include "UserDivider.g.h"

namespace winrt::Duality23::implementation
{
    struct UserDivider : UserDividerT<UserDivider>
    {
    public:
        UserDivider();

    };
}

namespace winrt::Duality23::factory_implementation
{
    struct UserDivider : UserDividerT<UserDivider, implementation::UserDivider>
    {
    };
}
