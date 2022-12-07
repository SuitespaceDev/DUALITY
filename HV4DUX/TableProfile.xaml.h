#pragma once

#include "TableProfile.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableProfile : TableProfileT<TableProfile>
    {
    public:
        TableProfile();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableProfile : TableProfileT<TableProfile, implementation::TableProfile>
    {
    };
}
