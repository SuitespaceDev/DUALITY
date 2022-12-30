#pragma once

#include "TableLvl4Account.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableLvl4Account : TableLvl4AccountT<TableLvl4Account>
    {
    public:
        TableLvl4Account();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableLvl4Account : TableLvl4AccountT<TableLvl4Account, implementation::TableLvl4Account>
    {
    };
}
