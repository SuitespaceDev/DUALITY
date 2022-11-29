#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DHVID
	{
	public:
		CHV4DHVID();

		CHV4DHVID(std::wstring_view const&);

		CHV4DHVID(winrt::HV4DABI::HVID const&);

		CHV4DHVID(winrt::guid const&);

		CHV4DHVID(winrt::HV4DABI::CHV4DHVID const&);

		void HV4DIsValidHVID() const;

	public:
		void operator = (std::wstring_view const&);

		void operator = (winrt::HV4DABI::HVID const&);

		void operator = (winrt::guid const&);

		void operator = (winrt::HV4DABI::CHV4DHVID const&);

		bool operator == (std::wstring_view const&) const;

		bool operator == (winrt::HV4DABI::HVID const&) const;

		bool operator == (winrt::guid const&) const;

		bool operator == (winrt::HV4DABI::CHV4DHVID const&) const;

		bool operator != (std::wstring_view const&) const;

		bool operator != (winrt::HV4DABI::HVID const&) const;

		bool operator != (winrt::guid const&) const;

		bool operator != (winrt::HV4DABI::CHV4DHVID const&) const;

		bool operator < (std::wstring_view const&) const;

		bool operator < (winrt::HV4DABI::HVID const&) const;

		bool operator < (winrt::guid const&) const;

		bool operator < (winrt::HV4DABI::CHV4DHVID const&) const;

		bool operator > (std::wstring_view const&) const;

		bool operator > (winrt::HV4DABI::HVID const&) const;

		bool operator > (winrt::guid const&) const;

		bool operator > (winrt::HV4DABI::CHV4DHVID const&) const;

	public:
		void HV4DRandomHVID();

		void HV4DGetHstringHVID(std::wstring_view&) const;

		void HV4DGetNativeHVID(winrt::guid&) const;

		void HV4DGetArrayHVID(wchar_t[32]) const;

		void HV4DGetWinrtHVID(winrt::HV4DABI::HVID&) const;

	private:
		wchar_t tagHVID[32]{ '0' };

	};

}