#pragma once

#include "TablePreProcessing.g.h"

namespace winrt::HV4DX::implementation
{
    struct TablePreProcessing : TablePreProcessingT<TablePreProcessing>
    {
    public:
        TablePreProcessing();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePreProcessing : TablePreProcessingT<TablePreProcessing, implementation::TablePreProcessing>
    {
    };
}
