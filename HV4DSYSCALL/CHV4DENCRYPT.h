#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include "winrt/HV4D.h"

namespace winrt::HV4DSYSCALL
{
    __SYSCALL HV4D::HV4DRETURN HV4DEncryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&);

    __SYSCALL HV4D::HV4DRETURN HV4DDecryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&);

}
