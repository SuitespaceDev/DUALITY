#pragma once

#include "TableMetric.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableMetric : TableMetricT<TableMetric>
    {
    public:
        TableMetric();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableMetric : TableMetricT<TableMetric, implementation::TableMetric>
    {
    };
}
