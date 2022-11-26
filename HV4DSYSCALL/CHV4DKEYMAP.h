#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include <cstddef>

#include "winrt/HV4D.h"

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
	__SYSCALL const std::unordered_map<char, uint32_t>* HV4DKeyMapA();

	__SYSCALL const std::unordered_map<wchar_t, uint32_t>* HV4DKeyMapW();

	__SYSCALL const std::unordered_map<uint32_t, char>* HV4DKeyIndexA();

	__SYSCALL const std::unordered_map<uint32_t, wchar_t>* HV4DKeyIndexW();

	__SYSCALL const std::vector<char>* HV4DHexA();

	__SYSCALL const std::vector<wchar_t>* HV4DHexW();

	__SYSCALL const std::unordered_map<std::byte, hstring>* HV4DHexByteToHstring();

	__SYSCALL const std::unordered_map<hstring, std::byte>* HV4DHexHstringToByte();

	__SYSCALL const std::vector<char>* HV4DNumericA();

	__SYSCALL const std::vector<wchar_t>* HV4DNumericW();

	__SYSCALL const std::vector<char>* HV4DAlphaNumericA();

	__SYSCALL const std::vector<wchar_t>* HV4DAlphaNumericW();

	__SYSCALL const std::vector<char>* HV4DSymbolA();

	__SYSCALL const std::vector<wchar_t>* HV4DSymbolW();

}
