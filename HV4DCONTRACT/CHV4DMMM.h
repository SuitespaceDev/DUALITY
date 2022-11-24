#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DSYSCALL/CHV4DKEYMAP.h"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DMMM
	{
	public:
		CHV4DMMM();

		CHV4DMMM(hstring const&);

		CHV4DMMM(winrt::HV4DABI::MMM const&);

		CHV4DMMM(winrt::HV4DABI::CHV4DMMM const&);

		void HV4DIsValidMMM();

	public:
		void operator = (hstring const&);

		void operator = (winrt::HV4DABI::MMM const&);

		void operator = (winrt::HV4DABI::CHV4DMMM const&);

		bool operator == (hstring const&);

		bool operator == (winrt::HV4DABI::MMM const&);

		bool operator == (winrt::HV4DABI::CHV4DMMM const&);

		bool operator != (hstring const&);

		bool operator != (winrt::HV4DABI::MMM const&);

		bool operator != (winrt::HV4DABI::CHV4DMMM const&);

		bool operator > (hstring const&);

		bool operator > (winrt::HV4DABI::MMM const&);

		bool operator > (winrt::HV4DABI::CHV4DMMM const&);

		bool operator < (hstring const&);

		bool operator < (winrt::HV4DABI::MMM const&);

		bool operator < (winrt::HV4DABI::CHV4DMMM const&);

	public:
		HV4D::HV4DRETURN HV4DGetHstringMMM(hstring&);

		HV4D::HV4DRETURN HV4DGetNumericMMM(long&, long&, long&);

		HV4D::HV4DRETURN HV4DGetArrayMMM(wchar_t[7]);

		HV4D::HV4DRETURN HV4DGetWinrtMMM(winrt::HV4DABI::MMM&);

	private:
		wchar_t tagMMM[7]{ '\0' };

	};

}