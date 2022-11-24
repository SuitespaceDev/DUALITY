#pragma once

#include "RPCUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct RPCUserPage : RPCUserPageT<RPCUserPage>
    {
    public:
        RPCUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct RPCUserPage : RPCUserPageT<RPCUserPage, implementation::RPCUserPage>
    {

    };

}
