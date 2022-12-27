#pragma once

#include "TableSoftDrive.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableSoftDrive : TableSoftDriveT<TableSoftDrive>
    {
    public:
        TableSoftDrive();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableSoftDrive : TableSoftDriveT<TableSoftDrive, implementation::TableSoftDrive>
    {
    };
}
