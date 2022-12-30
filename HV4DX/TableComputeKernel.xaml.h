#pragma once

#include "TableComputeKernel.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableComputeKernel : TableComputeKernelT<TableComputeKernel>
    {
    public:
        TableComputeKernel();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableComputeKernel : TableComputeKernelT<TableComputeKernel, implementation::TableComputeKernel>
    {
    };
}
