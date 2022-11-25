#pragma once

#include "ContractUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ContractUserPage : ContractUserPageT<ContractUserPage>
    {
    public:
        ContractUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ContractUserPage : ContractUserPageT<ContractUserPage, implementation::ContractUserPage>
    {

    };

}
