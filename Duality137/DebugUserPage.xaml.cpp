#include "pch.h"
#include "DebugUserPage.xaml.h"
#if __has_include("DebugUserPage.g.cpp")
#include "DebugUserPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Duality137::implementation
{
    DebugUserPage::DebugUserPage()
    {
        InitializeComponent();
    }

    int32_t DebugUserPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DebugUserPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void DebugUserPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
