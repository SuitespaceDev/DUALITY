#pragma once

#include "ContractUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ContractUserPage : ContractUserPageT<ContractUserPage>
    {
    public:
        ContractUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ContractUserPage : ContractUserPageT<ContractUserPage, implementation::ContractUserPage>
    {

    };

}
