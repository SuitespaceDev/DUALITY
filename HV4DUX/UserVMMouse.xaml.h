#pragma once

#include "UserVMMouse.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMMouse : UserVMMouseT<UserVMMouse>
    {
    public:
        UserVMMouse();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMMouse : UserVMMouseT<UserVMMouse, implementation::UserVMMouse>
    {
    };
}
