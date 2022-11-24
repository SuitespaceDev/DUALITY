#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DMAXPATH
	{
	public:
		CHV4DMAXPATH();

		CHV4DMAXPATH(winrt::hstring const&);

		CHV4DMAXPATH(winrt::HV4DABI::MAXPATH const&);

		CHV4DMAXPATH(winrt::HV4DABI::CHV4DMAXPATH const&);

		void HV4DIsValidMAXPATH();

	public:
		void operator = (winrt::hstring const&);

		void operator = (winrt::HV4DABI::MAXPATH const&);

		void operator = (winrt::HV4DABI::CHV4DMAXPATH const&);

		bool operator == (winrt::hstring const&);

		bool operator == (winrt::HV4DABI::MAXPATH const&);

		bool operator == (winrt::HV4DABI::CHV4DMAXPATH const&);

		bool operator != (winrt::hstring const&);

		bool operator != (winrt::HV4DABI::MAXPATH const&);

		bool operator != (winrt::HV4DABI::CHV4DMAXPATH const&);

	public:
		HV4D::HV4DRETURN HV4DGetHstringMAXPATH(winrt::hstring&);

		HV4D::HV4DRETURN HV4DGetArrayMAXPATH(wchar_t[256]);

		HV4D::HV4DRETURN HV4DGetWinrtMAXPATH(winrt::HV4DABI::MAXPATH&);

	private:
		wchar_t tagMAXPATH[256]{ '\0' };

	};

}