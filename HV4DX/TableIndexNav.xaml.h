#pragma once

#include "TableIndexNav.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableIndexNav : TableIndexNavT<TableIndexNav>
    {
        TableIndexNav();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableIndexNav : TableIndexNavT<TableIndexNav, implementation::TableIndexNav>
    {
    };
}
