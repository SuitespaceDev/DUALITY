#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DHVID
	{
	public:
		CHV4DHVID();

		CHV4DHVID(hstring const&);

		CHV4DHVID(winrt::HV4DABI::HVID const&);

		CHV4DHVID(winrt::HV4DABI::CHV4DHVID const&);

		void HV4DIsValidHVID();

	public:
		void operator = (hstring const&);

		void operator = (winrt::HV4DABI::HVID const&);

		void operator = (winrt::HV4DABI::CHV4DHVID const&);

		bool operator == (hstring const&);

		bool operator == (winrt::HV4DABI::HVID const&);

		bool operator == (winrt::HV4DABI::CHV4DHVID const&);

		bool operator != (hstring const&);

		bool operator != (winrt::HV4DABI::HVID const&);

		bool operator != (winrt::HV4DABI::CHV4DHVID const&);

	public:
		HV4D::HV4DRETURN HV4DRandomHVID();

		HV4D::HV4DRETURN HV4DGetHstringHVID(hstring&);

		HV4D::HV4DRETURN HV4DGetArrayHVID(wchar_t[32]);

		HV4D::HV4DRETURN HV4DGetWinrtHVID(winrt::HV4DABI::HVID&);

	private:
		wchar_t tagHVID[32]{ '0' };

	};

}