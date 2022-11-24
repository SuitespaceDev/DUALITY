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
	class CHV4DMMM
	{
	public:
		__ABI CHV4DMMM();

		__ABI CHV4DMMM(hstring const&);

		__ABI CHV4DMMM(winrt::HV4DABI::MMM const&);

		__ABI CHV4DMMM(winrt::HV4DABI::CHV4DMMM const&);

		__ABI void HV4DIsValidMMM() const;

	public:
		__ABI void operator = (hstring const&);

		__ABI void operator = (winrt::HV4DABI::MMM const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DMMM const&);

		__ABI bool operator == (hstring const&) const;

		__ABI bool operator == (winrt::HV4DABI::MMM const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DMMM const&) const;

		__ABI bool operator != (hstring const&) const;

		__ABI bool operator != (winrt::HV4DABI::MMM const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DMMM const&) const;

		__ABI bool operator > (hstring const&) const;

		__ABI bool operator > (winrt::HV4DABI::MMM const&) const;

		__ABI bool operator > (winrt::HV4DABI::CHV4DMMM const&) const;

		__ABI bool operator < (hstring const&) const;

		__ABI bool operator < (winrt::HV4DABI::MMM const&) const;

		__ABI bool operator < (winrt::HV4DABI::CHV4DMMM const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DGetHstringMMM(hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetNumericMMM(long&, long&, long&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayMMM(wchar_t[7]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtMMM(winrt::HV4DABI::MMM&) const;

	private:
		wchar_t tagMMM[7]{ '\0' };

	};

}