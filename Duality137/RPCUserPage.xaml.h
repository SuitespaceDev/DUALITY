#pragma once

#include "RPCUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct RPCUserPage : RPCUserPageT<RPCUserPage>
    {
    public:
        RPCUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct RPCUserPage : RPCUserPageT<RPCUserPage, implementation::RPCUserPage>
    {

    };

}
