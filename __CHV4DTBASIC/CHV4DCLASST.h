#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DCLASST
	{
	public:
		CHV4DCLASST();

		CHV4DCLASST(std::wstring_view const&, std::wstring_view const&);

		CHV4DCLASST(winrt::HV4DABI::CLASST const&);

		CHV4DCLASST(winrt::HV4DABI::CHV4DCLASST const&);

		void HV4DIsValidCLASST() const;

	public:
		void operator = (winrt::HV4DABI::CLASST const&);

		void operator = (winrt::HV4DABI::CHV4DCLASST const&);

		bool operator == (winrt::HV4DABI::CLASST const&) const;

		bool operator == (winrt::HV4DABI::CHV4DCLASST const&) const;

		bool operator != (winrt::HV4DABI::CLASST const&) const;

		bool operator != (winrt::HV4DABI::CHV4DCLASST const&) const;

	public:
		void HV4DGetHstringCLASST(std::wstring_view&, std::wstring_view&) const;

		void HV4DGetArrayCLASST(wchar_t[256], wchar_t[256]) const;

		void HV4DGetWinrtCLASST(winrt::HV4DABI::CLASST&) const;

	private:
		wchar_t tagNAMESPACE[256]{ '\0' };

		wchar_t tagWINRTCLASS[256]{ '\0' };

	};

}