#pragma once

#include "TableService.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableService : TableServiceT<TableService>
    {
    public:
        TableService();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableService : TableServiceT<TableService, implementation::TableService>
    {
    };
}
