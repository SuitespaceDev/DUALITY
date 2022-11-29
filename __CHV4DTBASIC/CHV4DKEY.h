#pragma once

#include <string>

#include <stdexcept>

namespace HV4D::CHV4DTBASIC
{
	class CHV4DKEY
	{
	public:
		CHV4DKEY();

		CHV4DKEY(std::wstring_view const&, std::wstring_view const&);

		CHV4DKEY(winrt::guid const&, std::wstring_view const&);

		CHV4DKEY(winrt::HV4DABI::KEY const&);

		CHV4DKEY(winrt::HV4DABI::CHV4DKEY const&);

		void HV4DIsValidKEY() const;

	public:
		void operator = (winrt::HV4DABI::KEY const&);

		void operator = (CHV4DKEY const&);

		bool operator == (winrt::HV4DABI::KEY const&) const;

		bool operator == (const CHV4DKEY &) const;

		bool operator != (winrt::HV4DABI::KEY const&) const;

		bool operator != (CHV4DKEY const&) const;

		bool operator < (winrt::HV4DABI::KEY const&) const;

		bool operator < (CHV4DKEY const&) const;

		bool operator > (winrt::HV4DABI::KEY const&) const;

		bool operator > (CHV4DKEY const&) const;

	public:
		void HV4DGetHstringKEY(std::wstring_view&, std::wstring_view&) const;

		void HV4DGetArrayKEY(wchar_t[256], wchar_t[256]) const;

		void HV4DGetWinrtKEY(winrt::HV4DABI::KEY&) const;

		void HV4DGetNativeKEY(winrt::guid&, std::wstring_view&) const;

	private:
		CHV4DHVID tagHVID{};

		CHV4DMAXPATH tagMAXPATH{};

	};

	struct CHV4DKEYFN
	{
		std::size_t operator() (const CHV4DKEY& key) const
		{
			winrt::guid hvid{};

			std::wstring_view str;

			key.HV4DGetNativeKEY(hvid, str);

			std::size_t h1{}, h2{}, h3;

			memcpy(&h1, &hvid, sizeof(long long));

			memcpy(&h2, &hvid.Data4, sizeof(long long));

			h1 = h1 ^ h2;

			h3 = std::hash<std::wstring_view>()(str);

			return h1 ^ h3;

		}
	};


}
