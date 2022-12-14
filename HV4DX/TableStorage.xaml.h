#pragma once

#include "TableStorage.g.h"

namespace WF = winrt::Windows::Foundation;

namespace MUX = winrt::Microsoft::UI::Xaml;

namespace winrt::HV4DX::implementation
{
    struct TableStorage : TableStorageT<TableStorage>
    {
    public:
        TableStorage();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableStorage : TableStorageT<TableStorage, implementation::TableStorage>
    {
    };
}
