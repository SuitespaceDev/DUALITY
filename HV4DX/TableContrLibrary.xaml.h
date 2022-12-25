#pragma once

#include "TableContrLibrary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableContrLibrary : TableContrLibraryT<TableContrLibrary>
    {
    public:
        TableContrLibrary();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableContrLibrary : TableContrLibraryT<TableContrLibrary, implementation::TableContrLibrary>
    {
    };
}
