﻿#pragma once

#include "TableEvent.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableEvent : TableEventT<TableEvent>
    {
    public:
        TableEvent();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableEvent : TableEventT<TableEvent, implementation::TableEvent>
    {
    };
}
