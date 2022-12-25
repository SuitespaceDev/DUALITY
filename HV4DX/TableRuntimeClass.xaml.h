﻿#pragma once

#include "TableRuntimeClass.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass>
    {
    public:
        TableRuntimeClass();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass, implementation::TableRuntimeClass>
    {
    };
}
