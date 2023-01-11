#pragma once

#include "TableContractMember.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableContractMember : TableContractMemberT<TableContractMember>
    {
    public:
        TableContractMember();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableContractMember : TableContractMemberT<TableContractMember, implementation::TableContractMember>
    {
    };
}
