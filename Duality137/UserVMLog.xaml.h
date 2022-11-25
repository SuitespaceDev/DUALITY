#pragma once

#include "UserVMLog.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMLog : UserVMLogT<UserVMLog>
    {
    public:
        UserVMLog();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMLog : UserVMLogT<UserVMLog, implementation::UserVMLog>
    {
    };
}
