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
	class CHV4DCLASST
	{
	public:
		__ABI CHV4DCLASST();

		__ABI CHV4DCLASST(winrt::hstring const&, winrt::hstring const&);

		__ABI CHV4DCLASST(winrt::HV4DABI::CLASST const&);

		__ABI CHV4DCLASST(winrt::HV4DABI::CHV4DCLASST const&);

		__ABI void HV4DIsValidCLASST() const;

	public:
		__ABI void operator = (winrt::HV4DABI::CLASST const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DCLASST const&);

		__ABI bool operator == (winrt::HV4DABI::CLASST const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DCLASST const&) const;

		__ABI bool operator != (winrt::HV4DABI::CLASST const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DCLASST const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DGetHstringCLASST(winrt::hstring&, winrt::hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayCLASST(wchar_t[256], wchar_t[256]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtCLASST(winrt::HV4DABI::CLASST&) const;

	private:
		wchar_t tagNAMESPACE[256]{ '\0' };

		wchar_t tagWINRTCLASS[256]{ '\0' };

	};

}