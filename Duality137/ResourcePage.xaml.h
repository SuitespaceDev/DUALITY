#pragma once

#include "ResourcePage.g.h"

namespace winrt::Duality137::implementation
{
    struct ResourcePage : ResourcePageT<ResourcePage>
    {
    public:
        ResourcePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ResourcePage : ResourcePageT<ResourcePage, implementation::ResourcePage>
    {

    };

}
