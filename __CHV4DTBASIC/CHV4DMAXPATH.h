#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DMAXPATH
	{
	public:
		CHV4DMAXPATH();

		CHV4DMAXPATH(std::wstring_view const&);

		CHV4DMAXPATH(winrt::HV4DABI::MAXPATH const&);

		CHV4DMAXPATH(winrt::HV4DABI::CHV4DMAXPATH const&);

		void HV4DIsValidMAXPATH() const;

	public:
		void operator = (std::wstring_view const&);

		void operator = (winrt::HV4DABI::MAXPATH const&);

		void operator = (winrt::HV4DABI::CHV4DMAXPATH const&);

		bool operator == (std::wstring_view const&) const;

		bool operator == (winrt::HV4DABI::MAXPATH const&) const;

		bool operator == (winrt::HV4DABI::CHV4DMAXPATH const&) const;

		bool operator != (std::wstring_view const&) const;

		bool operator != (winrt::HV4DABI::MAXPATH const&) const;

		bool operator != (winrt::HV4DABI::CHV4DMAXPATH const&) const;

		bool operator < (std::wstring_view const&) const;

		bool operator < (winrt::HV4DABI::MAXPATH const&) const;

		bool operator < (winrt::HV4DABI::CHV4DMAXPATH const&) const;

		bool operator > (std::wstring_view const&) const;

		bool operator > (winrt::HV4DABI::MAXPATH const&) const;

		bool operator > (winrt::HV4DABI::CHV4DMAXPATH const&) const;

	public:
		void HV4DGetHstringMAXPATH(std::wstring_view&) const;

		void HV4DGetArrayMAXPATH(wchar_t[256]) const;

		void HV4DGetWinrtMAXPATH(winrt::HV4DABI::MAXPATH&) const;

	private:
		wchar_t tagMAXPATH[256]{ '\0' };

	};

}