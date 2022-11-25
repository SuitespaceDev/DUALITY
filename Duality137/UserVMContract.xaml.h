#pragma once

#include "UserVMContract.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMContract : UserVMContractT<UserVMContract>
    {
    public:
        UserVMContract();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMContract : UserVMContractT<UserVMContract, implementation::UserVMContract>
    {
    };
}
