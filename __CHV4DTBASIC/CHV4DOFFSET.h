#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DOFFSET
	{
	public:
		CHV4DOFFSET();

		CHV4DOFFSET(DWORD const&, DWORD const&, DWORD const&, DWORD const&);

		CHV4DOFFSET(winrt::HV4DABI::OFFSET const&);

		CHV4DOFFSET(winrt::HV4DABI::CHV4DOFFSET const&);

		void HV4DIsValidOffset() const;

	public:
		void operator = (winrt::HV4DABI::OFFSET const&);

		void operator = (winrt::HV4DABI::CHV4DOFFSET const&);

		bool operator == (winrt::HV4DABI::OFFSET const&) const;

		bool operator == (winrt::HV4DABI::CHV4DOFFSET const&) const;

		bool operator != (winrt::HV4DABI::OFFSET const&) const;

		bool operator != (winrt::HV4DABI::CHV4DOFFSET const&) const;

	public:
		void HV4DGetHstringOFFSET(std::wstring_view&, std::wstring_view&) const;

		void HV4DGetNumericOFFSET(long long&, long long&) const;

		void HV4DGetDWORDOFFSET(DWORD&, DWORD&, DWORD&, DWORD&) const;

		void HV4DGetArrayOFFSET(wchar_t[4], wchar_t[4]) const;

		void HV4DGetWinrtOFFSET(winrt::HV4DABI::OFFSET&) const;

	private:
		wchar_t tagOFFSET[4]{ '0', '0', '0', '0' };

		wchar_t tagSIZE[4]{ '0', '0', '0', '0' };

	};

}