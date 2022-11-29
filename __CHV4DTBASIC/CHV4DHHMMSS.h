#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DHHMMSS
	{
	public:
		CHV4DHHMMSS();

		CHV4DHHMMSS(std::wstring_view const&);

		CHV4DHHMMSS(winrt::HV4DABI::HHMMSS const&);

		CHV4DHHMMSS(winrt::HV4DABI::CHV4DHHMMSS const&);

		void HV4DIsValidHHMMSS() const;

	public:
		void operator = (std::wstring_view const&);

		void operator = (winrt::HV4DABI::HHMMSS const&);

		void operator = (winrt::HV4DABI::CHV4DHHMMSS const&);

		bool operator == (std::wstring_view const&) const;

		bool operator == (winrt::HV4DABI::HHMMSS const&) const;

		bool operator == (winrt::HV4DABI::CHV4DHHMMSS const&) const;

		bool operator != (std::wstring_view const&) const;

		bool operator != (winrt::HV4DABI::HHMMSS const&) const;

		bool operator != (winrt::HV4DABI::CHV4DHHMMSS const&) const;

		bool operator > (std::wstring_view const&) const;

		bool operator > (winrt::HV4DABI::HHMMSS const&) const;

		bool operator > (winrt::HV4DABI::CHV4DHHMMSS const&) const;

		bool operator < (std::wstring_view const&) const;

		bool operator < (winrt::HV4DABI::HHMMSS const&) const;

		bool operator < (winrt::HV4DABI::CHV4DHHMMSS const&) const;

	public:
		void HV4DCurrentHHMMSS();

		void HV4DGetHstringHHMMSS(std::wstring_view&) const;

		void HV4DGetNumericHHMMSS(uint32_t&, uint32_t&, uint32_t&) const;

		void HV4DGetArrayHHMMSS(wchar_t[6]) const;

		void HV4DGetWinrtHHMMSS(winrt::HV4DABI::HHMMSS&) const;

	private:
		wchar_t tagHHMMSS[6]{ '\0' };

	};

}