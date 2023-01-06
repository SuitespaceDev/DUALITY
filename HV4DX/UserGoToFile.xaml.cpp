#include "pch.h"
#include "UserGoToFile.xaml.h"
#if __has_include("UserGoToFile.g.cpp")
#include "UserGoToFile.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserGoToFile::UserGoToFile()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserGoToFile::Label()
    {

        return label;

    }

    void UserGoToFile::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    winrt::hstring UserGoToFile::Value()
    {

        return value;

    }

    void UserGoToFile::Value(winrt::hstring const& e)
    {
        value = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        return;

    }

    winrt::hstring UserGoToFile::Placeholder()
    {

        return value;

    }

    void UserGoToFile::Placeholder(winrt::hstring const& e)
    {
        placeholder = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Placeholder" });

        return;

    }

    void UserGoToFile::GoTo(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {


        return;

    }

    bool UserGoToFile::IsEditable()
    {

        return is_editable;

    }

    void UserGoToFile::IsEditable(bool const& e)
    {
        is_editable = e;

        return;

    }

    event_token UserGoToFile::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserGoToFile::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
