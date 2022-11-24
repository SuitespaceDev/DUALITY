#pragma once

#include "UserVMRuntimeClass.g.h"

namespace winrt::Duality23::implementation
{
    struct UserVMRuntimeClass : UserVMRuntimeClassT<UserVMRuntimeClass>
    {
    public:
        UserVMRuntimeClass();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserVMRuntimeClass : UserVMRuntimeClassT<UserVMRuntimeClass, implementation::UserVMRuntimeClass>
    {
    };
}
