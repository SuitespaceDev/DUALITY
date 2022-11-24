#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include "winrt/HV4D.h"

namespace winrt::HV4DSYSCALL
{
	__SYSCALL const std::vector<hstring>* HV4DHourW();

	__SYSCALL const std::vector<hstring>* HV4DMinuteW();

	__SYSCALL const std::vector<hstring>* HV4DSecondW();

	__SYSCALL const std::unordered_map<hstring, hstring>* HV4DMMDDW();

	__SYSCALL const std::vector<hstring>* HV4DLeapW();

}
