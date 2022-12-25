#pragma once


#include "TableNetworkAdapter.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableNetworkAdapter : TableNetworkAdapterT<TableNetworkAdapter>
    {
    public:
        TableNetworkAdapter();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableNetworkAdapter : TableNetworkAdapterT<TableNetworkAdapter, implementation::TableNetworkAdapter>
    {
    };
}
