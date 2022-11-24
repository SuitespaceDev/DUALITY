#pragma once

#include "UserVMMouse.g.h"

namespace winrt::Duality23::implementation
{
    struct UserVMMouse : UserVMMouseT<UserVMMouse>
    {
    public:
        UserVMMouse();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserVMMouse : UserVMMouseT<UserVMMouse, implementation::UserVMMouse>
    {
    };
}
