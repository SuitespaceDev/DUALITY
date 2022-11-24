#pragma once

#ifdef ABI
#define __ABI __declspec(dllexport)
#else
#define __ABI __declspec(dllimport)
#endif

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class CHV4DHHMMSS
	{
	public:
		__ABI CHV4DHHMMSS();

		__ABI CHV4DHHMMSS(hstring const&);

		__ABI CHV4DHHMMSS(winrt::HV4DABI::HHMMSS const&);

		__ABI CHV4DHHMMSS(winrt::HV4DABI::CHV4DHHMMSS const&);

		__ABI void HV4DIsValidHHMMSS() const;

	public:
		__ABI void operator = (hstring const&);

		__ABI void operator = (winrt::HV4DABI::HHMMSS const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DHHMMSS const&);

		__ABI bool operator == (hstring const&) const;

		__ABI bool operator == (winrt::HV4DABI::HHMMSS const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DHHMMSS const&) const;

		__ABI bool operator != (hstring const&) const;

		__ABI bool operator != (winrt::HV4DABI::HHMMSS const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DHHMMSS const&) const;

		__ABI bool operator > (hstring const&) const;

		__ABI bool operator > (winrt::HV4DABI::HHMMSS const&) const;

		__ABI bool operator > (winrt::HV4DABI::CHV4DHHMMSS const&) const;

		__ABI bool operator < (hstring const&) const;

		__ABI bool operator < (winrt::HV4DABI::HHMMSS const&) const;

		__ABI bool operator < (winrt::HV4DABI::CHV4DHHMMSS const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DCurrentHHMMSS();

		__ABI HV4D::HV4DRETURN HV4DGetHstringHHMMSS(hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetNumericHHMMSS(uint32_t&, uint32_t&, uint32_t&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayHHMMSS(wchar_t[6]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtHHMMSS(winrt::HV4DABI::HHMMSS&) const;

	private:
		wchar_t tagHHMMSS[6]{ '\0' };

	};

}