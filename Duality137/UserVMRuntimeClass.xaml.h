#pragma once

#include "UserVMRuntimeClass.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMRuntimeClass : UserVMRuntimeClassT<UserVMRuntimeClass>
    {
    public:
        UserVMRuntimeClass();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMRuntimeClass : UserVMRuntimeClassT<UserVMRuntimeClass, implementation::UserVMRuntimeClass>
    {
    };
}
