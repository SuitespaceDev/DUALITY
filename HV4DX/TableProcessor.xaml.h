#pragma once

#include "TableProcessor.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableProcessor : TableProcessorT<TableProcessor>
    {
    public:
        TableProcessor();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProcessor : TableProcessorT<TableProcessor, implementation::TableProcessor>
    {
    };
}
