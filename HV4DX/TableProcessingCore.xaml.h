#pragma once

#include "TableProcessingCore.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableProcessingCore : TableProcessingCoreT<TableProcessingCore>
    {
    public:
        TableProcessingCore();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProcessingCore : TableProcessingCoreT<TableProcessingCore, implementation::TableProcessingCore>
    {
    };
}
