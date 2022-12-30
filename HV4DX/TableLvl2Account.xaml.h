#pragma once

#include "TableLvl2Account.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableLvl2Account : TableLvl2AccountT<TableLvl2Account>
    {
    public:
        TableLvl2Account();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableLvl2Account : TableLvl2AccountT<TableLvl2Account, implementation::TableLvl2Account>
    {
    };
}
