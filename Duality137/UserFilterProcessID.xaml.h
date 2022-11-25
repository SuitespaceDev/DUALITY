#pragma once

#include "UserFilterProcessID.g.h"

namespace winrt::Duality137::implementation
{
    struct UserFilterProcessID : UserFilterProcessIDT<UserFilterProcessID>
    {
    public:
        UserFilterProcessID();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserFilterProcessID : UserFilterProcessIDT<UserFilterProcessID, implementation::UserFilterProcessID>
    {
    };
}
