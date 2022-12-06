#pragma once

#include "RPCPage.g.h"

namespace winrt::Duality137::implementation
{
    struct RPCPage : RPCPageT<RPCPage>
    {
    public:
        RPCPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct RPCPage : RPCPageT<RPCPage, implementation::RPCPage>
    {

    };

}
