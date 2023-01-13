#pragma once


#include "TableProjectIndex.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableProjectIndex : TableProjectIndexT<TableProjectIndex>
    {
    public:
        TableProjectIndex();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProjectIndex : TableProjectIndexT<TableProjectIndex, implementation::TableProjectIndex>
    {
    };
}
