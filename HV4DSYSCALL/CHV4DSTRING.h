#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include "winrt/HV4D.h"

#include "CHV4DKEYMAP.h"

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
	__SYSCALL HV4D::IHV4DRETURN HV4DSubStr(hstring const&, uint32_t const&, uint32_t const&, hstring&);

	__SYSCALL HV4D::IHV4DRETURN HV4DNoSymbols(hstring const&, hstring&);

	__SYSCALL HV4D::IHV4DRETURN HV4DHasSymbols(hstring const&);

	__SYSCALL HV4D::IHV4DRETURN HV4DNoEscape(hstring const&, hstring&);

	__SYSCALL HV4D::IHV4DRETURN HV4DWinRTGuidFromHVID(hstring const&, winrt::guid&);

}
