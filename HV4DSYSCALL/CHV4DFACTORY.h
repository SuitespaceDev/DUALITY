#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include <winstring.h>

#include "winrt/HV4D.h"

namespace WF = winrt::Windows::Foundation;

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
    __SYSCALL HV4D::IHV4DRETURN HV4DGetActivationFactory(winrt::hstring const&, winrt::hstring const&, WF::IActivationFactory);

}
