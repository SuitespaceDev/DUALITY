#pragma once

#include "TableAccountIPv4DHCP.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAccountIPv4DHCP : TableAccountIPv4DHCPT<TableAccountIPv4DHCP>
    {
    public:
        TableAccountIPv4DHCP();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccountIPv4DHCP : TableAccountIPv4DHCPT<TableAccountIPv4DHCP, implementation::TableAccountIPv4DHCP>
    {
    };
}
