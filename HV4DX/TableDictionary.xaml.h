#pragma once

#include "TableDictionary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDictionary : TableDictionaryT<TableDictionary>
    {
    public:
        TableDictionary();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDictionary : TableDictionaryT<TableDictionary, implementation::TableDictionary>
    {
    };
}
