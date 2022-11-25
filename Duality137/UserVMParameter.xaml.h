#pragma once

#include "UserVMParameter.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMParameter : UserVMParameterT<UserVMParameter>
    {
    public:
        UserVMParameter();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMParameter : UserVMParameterT<UserVMParameter, implementation::UserVMParameter>
    {
    };
}
