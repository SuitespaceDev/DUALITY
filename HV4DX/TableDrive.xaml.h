#pragma once

#include "TableDrive.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDrive : TableDriveT<TableDrive>
    {
    public:
        TableDrive();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDrive : TableDriveT<TableDrive, implementation::TableDrive>
    {
    };
}
