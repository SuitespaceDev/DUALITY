#pragma once

#include "MetricUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct MetricUserPage : MetricUserPageT<MetricUserPage>
    {
    public:
        MetricUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct MetricUserPage : MetricUserPageT<MetricUserPage, implementation::MetricUserPage>
    {

    };

}
