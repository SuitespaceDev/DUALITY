#pragma once

#include "UserFilterProcessID.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserFilterProcessID : UserFilterProcessIDT<UserFilterProcessID>
    {
    public:
        UserFilterProcessID();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserFilterProcessID : UserFilterProcessIDT<UserFilterProcessID, implementation::UserFilterProcessID>
    {
    };
}
