#include "pch.h"
#include "UserVMLog.xaml.h"
#if __has_include("UserVMLog.g.cpp")
#include "UserVMLog.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Microsoft::UI::Xaml;

namespace winrt::Duality23::implementation
{
    UserVMLog::UserVMLog()
    {
        InitializeComponent();

        return;

    }

}
