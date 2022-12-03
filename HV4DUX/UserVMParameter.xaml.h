#pragma once

#include "UserVMParameter.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMParameter : UserVMParameterT<UserVMParameter>
    {
    public:
        UserVMParameter();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMParameter : UserVMParameterT<UserVMParameter, implementation::UserVMParameter>
    {
    };
}
