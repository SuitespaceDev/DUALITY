#pragma once

#include "UserVMContract.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMContract : UserVMContractT<UserVMContract>
    {
    public:
        UserVMContract();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMContract : UserVMContractT<UserVMContract, implementation::UserVMContract>
    {
    };
}
