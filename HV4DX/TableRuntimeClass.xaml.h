#pragma once

#include "TableRuntimeClass.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass>
    {
    public:
        TableRuntimeClass();

    public:
        winrt::hstring ValueKey();

        void ValueKey(winrt::hstring const&);

    private:
        winrt::hstring value_key{};

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
