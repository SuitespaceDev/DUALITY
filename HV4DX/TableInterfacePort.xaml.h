#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "TableInterfacePort.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableInterfacePort : TableInterfacePortT<TableInterfacePort>
    {
        TableInterfacePort();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableInterfacePort : TableInterfacePortT<TableInterfacePort, implementation::TableInterfacePort>
    {
    };
}
