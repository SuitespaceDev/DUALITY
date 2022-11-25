#pragma once

#include "UserVMMouse.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMMouse : UserVMMouseT<UserVMMouse>
    {
    public:
        UserVMMouse();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMMouse : UserVMMouseT<UserVMMouse, implementation::UserVMMouse>
    {
    };
}
