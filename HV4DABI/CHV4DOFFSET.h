#pragma once

#ifdef ABI
#define __ABI __declspec(dllexport)
#else
#define __ABI __declspec(dllimport)
#endif

#include <WinDef.h>

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class CHV4DOFFSET
	{
	public:
		__ABI CHV4DOFFSET();

		__ABI CHV4DOFFSET(DWORD const&, DWORD const&, DWORD const&, DWORD const&);

		__ABI CHV4DOFFSET(winrt::HV4DABI::OFFSET const&);

		__ABI CHV4DOFFSET(winrt::HV4DABI::CHV4DOFFSET const&);

		__ABI void HV4DIsValidOffset() const;

	public:
		__ABI void operator = (winrt::HV4DABI::OFFSET const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DOFFSET const&);

		__ABI bool operator == (winrt::HV4DABI::OFFSET const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DOFFSET const&) const;

		__ABI bool operator != (winrt::HV4DABI::OFFSET const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DOFFSET const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DGetHstringOFFSET(winrt::hstring&, winrt::hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetNumericOFFSET(long long&, long long&) const;

		__ABI HV4D::HV4DRETURN HV4DGetDWORDOFFSET(DWORD&, DWORD&, DWORD&, DWORD&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayOFFSET(wchar_t[4], wchar_t[4]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtOFFSET(winrt::HV4DABI::OFFSET&) const;

	private:
		wchar_t tagOFFSET[4]{ '0', '0', '0', '0' };

		wchar_t tagSIZE[4]{ '0', '0', '0', '0' };

	};

}