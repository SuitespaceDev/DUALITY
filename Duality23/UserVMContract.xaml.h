#pragma once

#include "UserVMContract.g.h"

namespace winrt::Duality23::implementation
{
    struct UserVMContract : UserVMContractT<UserVMContract>
    {
    public:
        UserVMContract();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserVMContract : UserVMContractT<UserVMContract, implementation::UserVMContract>
    {
    };
}
