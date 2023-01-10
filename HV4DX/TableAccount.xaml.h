#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "TableAccount.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAccount : TableAccountT<TableAccount>
    {
        TableAccount();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccount : TableAccountT<TableAccount, implementation::TableAccount>
    {
    };
}
