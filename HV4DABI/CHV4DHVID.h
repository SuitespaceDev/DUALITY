#pragma once

#ifdef ABI
#define __ABI __declspec(dllexport)
#else
#define __ABI __declspec(dllimport)
#endif

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DSYSCALL\\HV4DSYSCALL.lib")

#include "..\HV4DSYSCALL\CHV4DKEYMAP.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class CHV4DHVID
	{
	public:
		__ABI CHV4DHVID();

		__ABI CHV4DHVID(hstring const&);

		__ABI CHV4DHVID(winrt::HV4DABI::HVID const&);

		__ABI CHV4DHVID(winrt::guid const&);

		__ABI CHV4DHVID(winrt::HV4DABI::CHV4DHVID const&);

		__ABI void HV4DIsValidHVID() const;

	public:
		__ABI void operator = (hstring const&);

		__ABI void operator = (winrt::HV4DABI::HVID const&);

		__ABI void operator = (winrt::guid const&);

		__ABI void operator = (winrt::HV4DABI::CHV4DHVID const&);

		__ABI bool operator == (hstring const&) const;

		__ABI bool operator == (winrt::HV4DABI::HVID const&) const;

		__ABI bool operator == (winrt::guid const&) const;

		__ABI bool operator == (winrt::HV4DABI::CHV4DHVID const&) const;

		__ABI bool operator != (hstring const&) const;

		__ABI bool operator != (winrt::HV4DABI::HVID const&) const;

		__ABI bool operator != (winrt::guid const&) const;

		__ABI bool operator != (winrt::HV4DABI::CHV4DHVID const&) const;

		__ABI bool operator < (hstring const&) const;

		__ABI bool operator < (winrt::HV4DABI::HVID const&) const;

		__ABI bool operator < (winrt::guid const&) const;

		__ABI bool operator < (winrt::HV4DABI::CHV4DHVID const&) const;

		__ABI bool operator > (hstring const&) const;

		__ABI bool operator > (winrt::HV4DABI::HVID const&) const;

		__ABI bool operator > (winrt::guid const&) const;

		__ABI bool operator > (winrt::HV4DABI::CHV4DHVID const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DRandomHVID();

		__ABI HV4D::HV4DRETURN HV4DGetHstringHVID(hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetNativeHVID(winrt::guid&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayHVID(wchar_t[32]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtHVID(winrt::HV4DABI::HVID&) const;

	private:
		wchar_t tagHVID[32]{ '0' };

	};

}