#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DMMM
	{
	public:
		CHV4DMMM();

		CHV4DMMM(std::wstring_view const&);

		CHV4DMMM(winrt::HV4DABI::MMM const&);

		CHV4DMMM(winrt::HV4DABI::CHV4DMMM const&);

		void HV4DIsValidMMM() const;

	public:
		void operator = (std::wstring_view const&);

		void operator = (winrt::HV4DABI::MMM const&);

		void operator = (winrt::HV4DABI::CHV4DMMM const&);

		bool operator == (std::wstring_view const&) const;

		bool operator == (winrt::HV4DABI::MMM const&) const;

		bool operator == (winrt::HV4DABI::CHV4DMMM const&) const;

		bool operator != (std::wstring_view const&) const;

		bool operator != (winrt::HV4DABI::MMM const&) const;

		bool operator != (winrt::HV4DABI::CHV4DMMM const&) const;

		bool operator > (std::wstring_view const&) const;

		bool operator > (winrt::HV4DABI::MMM const&) const;

		bool operator > (winrt::HV4DABI::CHV4DMMM const&) const;

		bool operator < (std::wstring_view const&) const;

		bool operator < (winrt::HV4DABI::MMM const&) const;

		bool operator < (winrt::HV4DABI::CHV4DMMM const&) const;

	public:
		void HV4DGetHstringMMM(std::wstring_view&) const;

		void HV4DGetNumericMMM(long&, long&, long&) const;

		void HV4DGetArrayMMM(wchar_t[7]) const;

		void HV4DGetWinrtMMM(winrt::HV4DABI::MMM&) const;

	private:
		wchar_t tagMMM[7]{ '\0' };

	};

}