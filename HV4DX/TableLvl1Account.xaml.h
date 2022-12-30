#pragma once

#include "TableLvl1Account.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableLvl1Account : TableLvl1AccountT<TableLvl1Account>
    {
	public:
        TableLvl1Account();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableLvl1Account : TableLvl1AccountT<TableLvl1Account, implementation::TableLvl1Account>
    {
    };
}
