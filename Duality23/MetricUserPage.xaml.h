#pragma once

#include "MetricUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct MetricUserPage : MetricUserPageT<MetricUserPage>
    {
    public:
        MetricUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct MetricUserPage : MetricUserPageT<MetricUserPage, implementation::MetricUserPage>
    {

    };

}
