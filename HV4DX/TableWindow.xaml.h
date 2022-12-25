#pragma once

#include "TableWindow.g.h"

namespace WF = winrt::Windows::Foundation;

namespace MUX = winrt::Microsoft::UI::Xaml;

namespace winrt::HV4DX::implementation
{
    struct TableWindow : TableWindowT<TableWindow>
    {
    public:
        TableWindow();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableWindow : TableWindowT<TableWindow, implementation::TableWindow>
    {
    };
}
