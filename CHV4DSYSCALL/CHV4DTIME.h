#pragma once

#include <vector>
#include <unordered_map>

#include <string>

namespace CHV4D::CHV4DSYSCALL
{
	const std::vector<std::wstring>* HV4DHourW();

	const std::vector<std::wstring>* HV4DMinuteW();

	const std::vector<std::wstring>* HV4DSecondW();

	const std::unordered_map<std::wstring, std::wstring>* HV4DMMDDW();

	const std::vector<std::wstring>* HV4DLeapW();

}
