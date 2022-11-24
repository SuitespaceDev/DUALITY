#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"
#include "../HV4DSYSCALL/CHV4DTIME.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DMMDDYYYY
	{
	public:
		CHV4DMMDDYYYY();

		CHV4DMMDDYYYY(hstring const&);

		CHV4DMMDDYYYY(winrt::HV4DABI::MMDDYYYY const&);

		CHV4DMMDDYYYY(winrt::HV4DABI::CHV4DMMDDYYYY const&);

		void HV4DIsValidMMDDYYYY();

	public:
		void operator = (hstring const&);

		void operator = (winrt::HV4DABI::MMDDYYYY const&);

		void operator = (winrt::HV4DABI::CHV4DMMDDYYYY const&);

		bool operator == (hstring const&);

		bool operator == (winrt::HV4DABI::MMDDYYYY const&);

		bool operator == (winrt::HV4DABI::CHV4DMMDDYYYY const&);

		bool operator != (hstring const&);

		bool operator != (winrt::HV4DABI::MMDDYYYY const&);

		bool operator != (winrt::HV4DABI::CHV4DMMDDYYYY const&);

		bool operator > (hstring const&);

		bool operator > (winrt::HV4DABI::MMDDYYYY const&);

		bool operator > (winrt::HV4DABI::CHV4DMMDDYYYY const&);

		bool operator < (hstring const&);

		bool operator < (winrt::HV4DABI::MMDDYYYY const&);

		bool operator < (winrt::HV4DABI::CHV4DMMDDYYYY const&);

	public:
		HV4D::HV4DRETURN HV4DCurrentMMDDYYYY();

		HV4D::HV4DRETURN HV4DGetHstringMMDDYYYY(hstring&);

		HV4D::HV4DRETURN HV4DGetNumericMMDDYYYY(uint32_t&, uint32_t&, uint32_t&);

		HV4D::HV4DRETURN HV4DGetArrayMMDDYYYY(wchar_t[8]);

		HV4D::HV4DRETURN HV4DGetWinrtMMDDYYYY(winrt::HV4DABI::MMDDYYYY&);

	private:
		wchar_t tagMMDDYYYY[8]{ '\0' };

	};

}