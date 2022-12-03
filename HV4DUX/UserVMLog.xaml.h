#pragma once

#include "UserVMLog.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMLog : UserVMLogT<UserVMLog>
    {
    public:
        UserVMLog();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMLog : UserVMLogT<UserVMLog, implementation::UserVMLog>
    {
    };
}
