#pragma once

#include "TableProfile.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableProfile : TableProfileT<TableProfile>
    {
    public:
        TableProfile();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProfile : TableProfileT<TableProfile, implementation::TableProfile>
    {
    };
}
