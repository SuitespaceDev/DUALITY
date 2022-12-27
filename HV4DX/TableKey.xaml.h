﻿#pragma once

#include "TableKey.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableKey : TableKeyT<TableKey>
    {
    public:
        TableKey();

    public:
        winrt::hstring ValueKey();

        void ValueKey(winrt::hstring const&);

    private:
        winrt::hstring value_key{};

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableKey : TableKeyT<TableKey, implementation::TableKey>
    {
    };
}
