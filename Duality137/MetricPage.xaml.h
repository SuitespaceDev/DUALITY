#pragma once

#include "MetricPage.g.h"

namespace winrt::Duality137::implementation
{
    struct MetricPage : MetricPageT<MetricPage>
    {
    public:
        MetricPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct MetricPage : MetricPageT<MetricPage, implementation::MetricPage>
    {

    };

}
