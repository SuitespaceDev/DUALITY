#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DCLASST
	{
	public:
		CHV4DCLASST();

		CHV4DCLASST(winrt::hstring const&, winrt::hstring const&);

		CHV4DCLASST(winrt::HV4DABI::CLASST const&);

		CHV4DCLASST(winrt::HV4DABI::CHV4DCLASST const&);

		void HV4DIsValidCLASST();

	public:
		void operator = (winrt::HV4DABI::CLASST const&);

		void operator = (winrt::HV4DABI::CHV4DCLASST const&);

		bool operator == (winrt::HV4DABI::CLASST const&);

		bool operator == (winrt::HV4DABI::CHV4DCLASST const&);

		bool operator != (winrt::HV4DABI::CLASST const&);

		bool operator != (winrt::HV4DABI::CHV4DCLASST const&);

	public:
		HV4D::HV4DRETURN HV4DGetHstringCLASST(winrt::hstring&, winrt::hstring&);

		HV4D::HV4DRETURN HV4DGetArrayCLASST(wchar_t[256], wchar_t[256]);

		HV4D::HV4DRETURN HV4DGetWinrtCLASST(winrt::HV4DABI::CLASST&);

	private:
		wchar_t tagNAMESPACE[256]{ '\0' };

		wchar_t tagWINRTCLASS[256]{ '\0' };

	};

}