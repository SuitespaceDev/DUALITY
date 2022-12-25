#pragma once

#include "TableParamLibrary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableParamLibrary : TableParamLibraryT<TableParamLibrary>
    {
    public:
        TableParamLibrary();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableParamLibrary : TableParamLibraryT<TableParamLibrary, implementation::TableParamLibrary>
    {
    };
}
