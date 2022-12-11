#include "pch.h"
#include "UserMMM.xaml.h"
#if __has_include("UserMMM.g.cpp")
#include "UserMMM.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserMMM::UserMMM()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserMMM::Label()
    {

        return label;

    }

    void UserMMM::Label(winrt::hstring const& e)
    {
        label = e;

        return;

    }

    winrt::hstring UserMMM::Value()
    {

        return value;

    }

    void UserMMM::Value(winrt::hstring const& e)
    {

        value = e;

        return;

    }

}
