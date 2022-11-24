#pragma once

#include "UserVMLog.g.h"

namespace winrt::Duality23::implementation
{
    struct UserVMLog : UserVMLogT<UserVMLog>
    {
    public:
        UserVMLog();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserVMLog : UserVMLogT<UserVMLog, implementation::UserVMLog>
    {
    };
}
