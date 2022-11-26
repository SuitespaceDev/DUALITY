#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include "winrt/HV4D.h"

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
    __SYSCALL HV4D::IHV4DRETURN HV4DEncryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&);

    __SYSCALL HV4D::IHV4DRETURN HV4DDecryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&);

}
