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
	class CHV4DABS
	{
	public:
		__ABI CHV4DABS();

		__ABI CHV4DABS(winrt::hstring const&, winrt::hstring const&);

		__ABI CHV4DABS(winrt::HV4DABI::ABS const&);

		__ABI CHV4DABS(winrt::HV4DABI::CHV4DABS const&);

		__ABI void HV4DIsValidABS() const;

	public:
		__ABI void operator = (winrt::HV4DABI::ABS const&);

		__ABI void operator = (CHV4DABS const&);

		__ABI bool operator == (winrt::HV4DABI::ABS const&) const;

		__ABI bool operator == (CHV4DABS const&) const;

		__ABI bool operator != (winrt::HV4DABI::ABS const&) const;

		__ABI bool operator != (CHV4DABS const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DGetHstringABS(hstring&, hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayABS(wchar_t[256], wchar_t[256]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtABS(winrt::HV4DABI::ABS&) const;

	private:
		wchar_t tagPATH[256]{ '\0' };

		wchar_t tagFILE[256]{ '\0' };

	};

}