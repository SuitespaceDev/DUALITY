#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DOFFSET
	{
	public:
		CHV4DOFFSET();

		CHV4DOFFSET(DWORD const&, DWORD const&, DWORD const&, DWORD const&);

		CHV4DOFFSET(winrt::HV4DABI::OFFSET const&);

		CHV4DOFFSET(winrt::HV4DABI::CHV4DOFFSET const&);

		void HV4DIsValidOffset();

	public:
		void operator = (winrt::HV4DABI::OFFSET const&);

		void operator = (winrt::HV4DABI::CHV4DOFFSET const&);

		bool operator == (winrt::HV4DABI::OFFSET const&);

		bool operator == (winrt::HV4DABI::CHV4DOFFSET const&);

		bool operator != (winrt::HV4DABI::OFFSET const&);

		bool operator != (winrt::HV4DABI::CHV4DOFFSET const&);

	public:
		HV4D::HV4DRETURN HV4DGetHstringOFFSET(winrt::hstring&, winrt::hstring&);

		HV4D::HV4DRETURN HV4DGetNumericOFFSET(long long&, long long&);

		HV4D::HV4DRETURN HV4DGetDWORDOFFSET(DWORD&, DWORD&, DWORD&, DWORD&);

		HV4D::HV4DRETURN HV4DGetArrayOFFSET(wchar_t[4], wchar_t[4]);

		HV4D::HV4DRETURN HV4DGetWinrtOFFSET(winrt::HV4DABI::OFFSET&);

	private:
		wchar_t tagOFFSET[4]{ '0', '0', '0', '0' };

		wchar_t tagSIZE[4]{ '0', '0', '0', '0' };

	};

}