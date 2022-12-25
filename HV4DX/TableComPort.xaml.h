#pragma once

#include "TableComPort.g.h"

namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace winrt::HV4DX::implementation
{
    struct TableComPort : TableComPortT<TableComPort>
    {
    public:
        TableComPort();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableComPort : TableComPortT<TableComPort, implementation::TableComPort>
    {
    };
}
