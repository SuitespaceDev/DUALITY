#include "pch.h"
#include "UserVMContract.xaml.h"
#if __has_include("UserVMContract.g.cpp")
#include "UserVMContract.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Microsoft::UI::Xaml;

namespace winrt::Duality23::implementation
{
    UserVMContract::UserVMContract()
    {
        InitializeComponent();

        return;

    }

}
