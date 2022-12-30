#pragma once

#include "TablePostProcessing.g.h"

namespace winrt::HV4DX::implementation
{
    struct TablePostProcessing : TablePostProcessingT<TablePostProcessing>
    {
    public:
        TablePostProcessing();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePostProcessing : TablePostProcessingT<TablePostProcessing, implementation::TablePostProcessing>
    {
    };
}
