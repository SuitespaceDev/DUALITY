#pragma once

#include "UserDivider.g.h"

namespace winrt::Duality137::implementation
{
    struct UserDivider : UserDividerT<UserDivider>
    {
    public:
        UserDivider();

    };
}

namespace winrt::Duality137::factory_implementation
{
    struct UserDivider : UserDividerT<UserDivider, implementation::UserDivider>
    {
    };
}
