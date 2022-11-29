#pragma once

#include <vector>
#include <unordered_map>

#include <string>

#include <cstddef>

namespace CHV4D::CHV4DSYSCALL
{
	const std::unordered_map<char, uint32_t>* HV4DKeyMapA();

	const std::unordered_map<wchar_t, uint32_t>* HV4DKeyMapW();

	const std::unordered_map<uint32_t, char>* HV4DKeyIndexA();

	const std::unordered_map<uint32_t, wchar_t>* HV4DKeyIndexW();

	const std::vector<char>* HV4DHexA();

	const std::vector<wchar_t>* HV4DHexW();

	const std::unordered_map<std::byte, std::wstring>* HV4DHexByteToHstring();

	const std::unordered_map<std::wstring, std::byte>* HV4DHexHstringToByte();

	const std::vector<char>* HV4DNumericA();

	const std::vector<wchar_t>* HV4DNumericW();

	const std::vector<char>* HV4DAlphaNumericA();

	const std::vector<wchar_t>* HV4DAlphaNumericW();

	const std::vector<char>* HV4DSymbolA();

	const std::vector<wchar_t>* HV4DSymbolW();

}
