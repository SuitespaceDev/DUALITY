#pragma once

#include "UserFilterProcessID.g.h"

namespace winrt::Duality23::implementation
{
    struct UserFilterProcessID : UserFilterProcessIDT<UserFilterProcessID>
    {
    public:
        UserFilterProcessID();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserFilterProcessID : UserFilterProcessIDT<UserFilterProcessID, implementation::UserFilterProcessID>
    {
    };
}
