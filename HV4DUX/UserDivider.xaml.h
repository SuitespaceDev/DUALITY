#pragma once

#include "UserDivider.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserDivider : UserDividerT<UserDivider>
    {
    public:
        UserDivider();

    };
}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserDivider : UserDividerT<UserDivider, implementation::UserDivider>
    {
    };
}
