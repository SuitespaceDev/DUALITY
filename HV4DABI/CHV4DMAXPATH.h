#pragma once

#ifdef ABI
#define __ABI __declspec(dllexport)
#else
#define __ABI __declspec(dllimport)
#endif

#pragma comment (lib, "c:\\users\\rebek\\source\\DUALITY\\x64\\debug\\HV4DSYSCALL\\HV4DSYSCALL.lib")

#include "..\HV4DSYSCALL\CHV4DKEYMAP.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class CHV4DMAXPATH
	{
	public:
		__ABI CHV4DMAXPATH();

		__ABI CHV4DMAXPATH(winrt::hstring const&);

		__ABI CHV4DMAXPATH(winrt::HV4DABI::MAXPATH const&);

		__ABI CHV4DMAXPATH(winrt::HV4DABI::CHV4DMAXPATH const&);

		__ABI void HV4DIsValidMAXPATH() const;

	public:
		__ABI void operator = (winrt::hstring const&);

		__ABI void operator = (winrt::HV4DABI::MAXPATH const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DMAXPATH const&);

		__ABI bool operator == (winrt::hstring const&) const;

		__ABI bool operator == (winrt::HV4DABI::MAXPATH const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DMAXPATH const&) const;

		__ABI bool operator != (winrt::hstring const&) const;

		__ABI bool operator != (winrt::HV4DABI::MAXPATH const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DMAXPATH const&) const;

		__ABI bool operator < (winrt::hstring const&) const;

		__ABI bool operator < (winrt::HV4DABI::MAXPATH const&) const;

		__ABI bool operator < (winrt::HV4DABI::CHV4DMAXPATH const&) const;

		__ABI bool operator > (winrt::hstring const&) const;

		__ABI bool operator > (winrt::HV4DABI::MAXPATH const&) const;

		__ABI bool operator > (winrt::HV4DABI::CHV4DMAXPATH const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DGetHstringMAXPATH(winrt::hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayMAXPATH(wchar_t[256]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtMAXPATH(winrt::HV4DABI::MAXPATH&) const;

	private:
		wchar_t tagMAXPATH[256]{ '\0' };

	};

}