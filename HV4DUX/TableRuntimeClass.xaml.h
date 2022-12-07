#pragma once

#include "TableRuntimeClass.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass>
    {
    public:
        TableRuntimeClass();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass, implementation::TableRuntimeClass>
    {
    };
}
