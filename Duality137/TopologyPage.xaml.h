#pragma once

#include "winrt/HV4DX.h"

#include "TopologyPage.g.h"

namespace winrt::Duality137::implementation
{
    struct TopologyPage : TopologyPageT<TopologyPage>
    {
    public:
        TopologyPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct TopologyPage : TopologyPageT<TopologyPage, implementation::TopologyPage>
    {

    };

}
