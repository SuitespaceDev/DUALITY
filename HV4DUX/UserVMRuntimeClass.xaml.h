#pragma once

#include "UserVMRuntimeClass.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMRuntimeClass : UserVMRuntimeClassT<UserVMRuntimeClass>
    {
    public:
        UserVMRuntimeClass();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMRuntimeClass : UserVMRuntimeClassT<UserVMRuntimeClass, implementation::UserVMRuntimeClass>
    {
    };
}
