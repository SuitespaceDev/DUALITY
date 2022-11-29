#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DMMDDYYYY
	{
	public:
		CHV4DMMDDYYYY();

		CHV4DMMDDYYYY(std::wstring_view const&);

		CHV4DMMDDYYYY(winrt::HV4DABI::MMDDYYYY const&);

		CHV4DMMDDYYYY(winrt::HV4DABI::CHV4DMMDDYYYY const&);

		void HV4DIsValidMMDDYYYY() const;

	public:
		void operator = (std::wstring_view const&);

		void operator = (winrt::HV4DABI::MMDDYYYY const&);

		void operator = (winrt::HV4DABI::CHV4DMMDDYYYY const&);

		bool operator == (std::wstring_view const&) const;

		bool operator == (winrt::HV4DABI::MMDDYYYY const&) const;

		bool operator == (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

		bool operator != (std::wstring_view const&) const;

		bool operator != (winrt::HV4DABI::MMDDYYYY const&) const;

		bool operator != (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

		bool operator > (std::wstring_view const&) const;

		bool operator > (winrt::HV4DABI::MMDDYYYY const&) const;

		bool operator > (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

		bool operator < (std::wstring_view const&) const;

		bool operator < (winrt::HV4DABI::MMDDYYYY const&) const;

		bool operator < (winrt::HV4DABI::CHV4DMMDDYYYY const&) const;

	public:
		void HV4DCurrentMMDDYYYY();

		void HV4DGetHstringMMDDYYYY(std::wstring_view&) const;

		void HV4DGetNumericMMDDYYYY(uint32_t&, uint32_t&, uint32_t&) const;

		void HV4DGetArrayMMDDYYYY(wchar_t[8]) const;

		void HV4DGetWinrtMMDDYYYY(winrt::HV4DABI::MMDDYYYY&) const;

	private:
		wchar_t tagMMDDYYYY[8]{ '\0' };

	};

}