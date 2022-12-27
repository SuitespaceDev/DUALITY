#pragma once

#include "TableDescription.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDescription : TableDescriptionT<TableDescription>
    {
    public:
        TableDescription();

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
    struct TableDescription : TableDescriptionT<TableDescription, implementation::TableDescription>
    {
    };
}
