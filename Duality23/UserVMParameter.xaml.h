#pragma once

#include "UserVMParameter.g.h"

namespace winrt::Duality23::implementation
{
    struct UserVMParameter : UserVMParameterT<UserVMParameter>
    {
    public:
        UserVMParameter();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserVMParameter : UserVMParameterT<UserVMParameter, implementation::UserVMParameter>
    {
    };
}
