#pragma once

#include "DebugUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DebugUserPage : DebugUserPageT<DebugUserPage>
    {
        DebugUserPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DebugUserPage : DebugUserPageT<DebugUserPage, implementation::DebugUserPage>
    {
    };
}
