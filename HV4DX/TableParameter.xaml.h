#pragma once

#include "TableParameter.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableParameter : TableParameterT<TableParameter>
    {
    public:
        TableParameter();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableParameter : TableParameterT<TableParameter, implementation::TableParameter>
    {
    };
}
