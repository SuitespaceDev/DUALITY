﻿#pragma once

#include "UserDivider.g.h"

namespace winrt::HV4DX::implementation
{
    struct UserDivider : UserDividerT<UserDivider>
    {
    public:
        UserDivider();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct UserDivider : UserDividerT<UserDivider, implementation::UserDivider>
    {
    };
}
