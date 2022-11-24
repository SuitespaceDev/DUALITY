#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DABS
	{
	public:
		CHV4DABS();

		CHV4DABS(winrt::hstring const&, winrt::hstring const&);

		CHV4DABS(winrt::HV4DABI::ABS const&);

		CHV4DABS(winrt::HV4DABI::CHV4DABS const&);

		void HV4DIsValidABS();

	public:
		void operator = (winrt::HV4DABI::ABS const&);

		void operator = (CHV4DABS const&);

		bool operator == (winrt::HV4DABI::ABS const&);

		bool operator == (CHV4DABS const&);

		bool operator != (winrt::HV4DABI::ABS const&);

		bool operator != (CHV4DABS const&);

	public:
		HV4D::HV4DRETURN HV4DGetHstringABS(hstring&, hstring&);

		HV4D::HV4DRETURN HV4DGetArrayABS(wchar_t[256], wchar_t[256]);

		HV4D::HV4DRETURN HV4DGetWinrtABS(winrt::HV4DABI::ABS&);

	private:
		wchar_t tagPATH[256]{ '\0' };

		wchar_t tagFILE[256]{ '\0' };

	};

}