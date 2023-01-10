#pragma once

#include "TableDescription.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDescription : TableDescriptionT<TableDescription>
    {
    public:
        TableDescription();

    public:
        winrt::hstring TableDescriptionHVID();

        void TableDescriptionHVID(winrt::hstring const&);

    private:
        winrt::hstring table_description_hvid{};

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
