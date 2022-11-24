#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include <winstring.h>

#include "winrt/HV4D.h"

namespace winrt::HV4DSYSCALL
{
    __SYSCALL HV4D::HV4DRETURN HV4DGetActivationFactory(hstring const&, hstring const&, winrt::Windows::Foundation::IActivationFactory);

}
