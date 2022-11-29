#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DABS
	{
	public:
		CHV4DABS();

		CHV4DABS(std::wstring_view const&, std::wstring_view const&);

		CHV4DABS(winrt::HV4DABI::ABS const&);

		CHV4DABS(winrt::HV4DABI::CHV4DABS const&);

		void HV4DIsValidABS() const;

	public:
		void operator = (winrt::HV4DABI::ABS const&);

		void operator = (CHV4DABS const&);

		bool operator == (winrt::HV4DABI::ABS const&) const;

		bool operator == (CHV4DABS const&) const;

		bool operator != (winrt::HV4DABI::ABS const&) const;

		bool operator != (CHV4DABS const&) const;

	public:
		void HV4DGetHstringABS(std::wstring_view&, std::wstring_view&) const;

		void HV4DGetArrayABS(wchar_t[256], wchar_t[256]) const;

		void HV4DGetWinrtABS(winrt::HV4DABI::ABS&) const;

	private:
		wchar_t tagPATH[256]{ '\0' };

		wchar_t tagFILE[256]{ '\0' };

	};

}