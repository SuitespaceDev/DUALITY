#include "pch.h"
#include "UserGoTo.xaml.h"
#if __has_include("UserGoTo.g.cpp")
#include "UserGoTo.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserGoTo::UserGoTo()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserGoTo::Label()
    {

        return label;

    }

    void UserGoTo::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    winrt::hstring UserGoTo::Value()
    {

        return value;

    }

    void UserGoTo::Value(winrt::hstring const& e)
    {
        value = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        return;

    }

    winrt::hstring UserGoTo::Placeholder()
    {

        return value;

    }

    void UserGoTo::Placeholder(winrt::hstring const& e)
    {
        placeholder = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Placeholder" });

        return;

    }

    void UserGoTo::GoTo(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {


        return;

    }

    bool UserGoTo::IsEditable()
    {

        return is_editable;

    }

    void UserGoTo::IsEditable(bool const& e)
    {
        is_editable = e;

        return;

    }

    event_token UserGoTo::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserGoTo::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
