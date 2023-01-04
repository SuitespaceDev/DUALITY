#include "pch.h"
#include "UserGoToHVID.xaml.h"
#if __has_include("UserGoToHVID.g.cpp")
#include "UserGoToHVID.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserGoToHVID::UserGoToHVID()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserGoToHVID::Label()
    {

        return label;

    }

    void UserGoToHVID::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    winrt::hstring UserGoToHVID::Value()
    {

        return value;

    }

    void UserGoToHVID::Value(winrt::hstring const& e)
    {
        value = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        return;

    }

    winrt::hstring UserGoToHVID::Placeholder()
    {

        return value;

    }

    void UserGoToHVID::Placeholder(winrt::hstring const& e)
    {
        placeholder = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Placeholder" });

        return;

    }

    void UserGoToHVID::GoTo(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {


        return;

    }

    bool UserGoToHVID::IsEditable()
    {

        return is_editable;

    }

    void UserGoToHVID::IsEditable(bool const& e)
    {
        is_editable = e;

        return;

    }

    event_token UserGoToHVID::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserGoToHVID::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
