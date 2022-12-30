#pragma once

#include "TableApplication.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableApplication : TableApplicationT<TableApplication>
    {
    public:
        TableApplication();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableApplication : TableApplicationT<TableApplication, implementation::TableApplication>
    {
    };
}
