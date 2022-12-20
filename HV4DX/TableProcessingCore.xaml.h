#pragma once

#include "TableProcessingCore.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableProcessingCore : TableProcessingCoreT<TableProcessingCore>
    {
    public:
        TableProcessingCore();


    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProcessingCore : TableProcessingCoreT<TableProcessingCore, implementation::TableProcessingCore>
    {
    };
}
