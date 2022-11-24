#include "pch.h"
#include "UserVMMouse.xaml.h"
#if __has_include("UserVMMouse.g.cpp")
#include "UserVMMouse.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Microsoft::UI::Xaml;

namespace winrt::Duality23::implementation
{
    UserVMMouse::UserVMMouse()
    {
        InitializeComponent();

        return;

    }

}
