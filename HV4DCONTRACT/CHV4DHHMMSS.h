#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DHHMMSS
	{
	public:
		CHV4DHHMMSS();

		CHV4DHHMMSS(hstring const&);

		CHV4DHHMMSS(winrt::HV4DABI::HHMMSS const&);

		CHV4DHHMMSS(winrt::HV4DABI::CHV4DHHMMSS const&);

		void HV4DIsValidHHMMSS();

	public:
		void operator = (hstring const&);

		void operator = (winrt::HV4DABI::HHMMSS const&);

		void operator = (winrt::HV4DABI::CHV4DHHMMSS const&);

		bool operator == (hstring const&);

		bool operator == (winrt::HV4DABI::HHMMSS const&);

		bool operator == (winrt::HV4DABI::CHV4DHHMMSS const&);

		bool operator != (hstring const&);

		bool operator != (winrt::HV4DABI::HHMMSS const&);

		bool operator != (winrt::HV4DABI::CHV4DHHMMSS const&);

		bool operator > (hstring const&);

		bool operator > (winrt::HV4DABI::HHMMSS const&);

		bool operator > (winrt::HV4DABI::CHV4DHHMMSS const&);

		bool operator < (hstring const&);

		bool operator < (winrt::HV4DABI::HHMMSS const&);

		bool operator < (winrt::HV4DABI::CHV4DHHMMSS const&);

	public:
		HV4D::HV4DRETURN HV4DCurrentHHMMSS();

		HV4D::HV4DRETURN HV4DGetHstringHHMMSS(hstring&);

		HV4D::HV4DRETURN HV4DGetNumericHHMMSS(uint32_t&, uint32_t&, uint32_t&);

		HV4D::HV4DRETURN HV4DGetArrayHHMMSS(wchar_t[6]);

		HV4D::HV4DRETURN HV4DGetWinrtHHMMSS(winrt::HV4DABI::HHMMSS&);

	private:
		wchar_t tagHHMMSS[6]{ '\0' };

	};

}