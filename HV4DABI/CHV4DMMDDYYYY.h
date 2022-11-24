#pragma once

#ifdef ABI
#define __ABI __declspec(dllexport)
#else
#define __ABI __declspec(dllimport)
#endif

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"
#include "../HV4DSYSCALL/CHV4DTIME.h"

namespace winrt::HV4DABI
{
	class CHV4DMMDDYYYY
	{
	public:
		__ABI CHV4DMMDDYYYY();

		__ABI CHV4DMMDDYYYY(hstring const&);

		__ABI CHV4DMMDDYYYY(winrt::HV4DABI::MMDDYYYY const&);

		__ABI CHV4DMMDDYYYY(winrt::HV4DABI::CHV4DMMDDYYYY const&);

		__ABI void HV4DIsValidMMDDYYYY() const;

	public:
		__ABI void operator = (hstring const&);

		__ABI void operator = (winrt::HV4DABI::MMDDYYYY const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DMMDDYYYY const&);

		__ABI bool operator == (hstring const&) const;

		__ABI bool operator == (winrt::HV4DABI::MMDDYYYY const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

		__ABI bool operator != (hstring const&) const;

		__ABI bool operator != (winrt::HV4DABI::MMDDYYYY const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

		__ABI bool operator > (hstring const&) const;

		__ABI bool operator > (winrt::HV4DABI::MMDDYYYY const&) const;

		__ABI bool operator > (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

		__ABI bool operator < (hstring const&) const;

		__ABI bool operator < (winrt::HV4DABI::MMDDYYYY const&) const;

		__ABI bool operator < (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DCurrentMMDDYYYY();

		__ABI HV4D::HV4DRETURN HV4DGetHstringMMDDYYYY(hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetNumericMMDDYYYY(uint32_t&, uint32_t&, uint32_t&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayMMDDYYYY(wchar_t[8]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtMMDDYYYY(winrt::HV4DABI::MMDDYYYY&) const;

	private:
		wchar_t tagMMDDYYYY[8]{ '\0' };

	};

}