#pragma once

#include <Objbase.h>

#include <stdexcept>

#include "CHV4DKEYMAP.h"

namespace CHV4D::CHV4DSYSCALL
{
	void HV4DSubStr(std::wstring const&, uint64_t const&, uint64_t const&, std::wstring&);

	void HV4DNoSymbols(std::wstring const&, std::wstring&);

	bool HV4DHasSymbols(std::wstring const&);

	void HV4DNoEscape(std::wstring const&, std::wstring&);

}
