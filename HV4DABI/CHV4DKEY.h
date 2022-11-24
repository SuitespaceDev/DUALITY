#pragma once

#ifdef ABI
#define __ABI __declspec(dllexport)
#else
#define __ABI __declspec(dllimport)
#endif

#include "CHV4DHVID.h"
#include "CHV4DMAXPATH.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

namespace winrt::HV4DABI
{
	class CHV4DKEY
	{
	public:
		__ABI CHV4DKEY();

		__ABI CHV4DKEY(winrt::hstring const&, winrt::hstring const&);

		__ABI CHV4DKEY(winrt::guid const&, winrt::hstring const&);

		__ABI CHV4DKEY(winrt::HV4DABI::KEY const&);

		__ABI CHV4DKEY(winrt::HV4DABI::CHV4DKEY const&);

		__ABI void HV4DIsValidKEY() const;

	public:
		__ABI void operator = (winrt::HV4DABI::KEY const&);

		__ABI void operator = (CHV4DKEY const&);

		__ABI bool operator == (winrt::HV4DABI::KEY const&) const;

		__ABI bool operator == (const CHV4DKEY &) const;

		__ABI bool operator != (winrt::HV4DABI::KEY const&) const;

		__ABI bool operator != (CHV4DKEY const&) const;

		__ABI bool operator < (winrt::HV4DABI::KEY const&) const;

		__ABI bool operator < (CHV4DKEY const&) const;

		__ABI bool operator > (winrt::HV4DABI::KEY const&) const;

		__ABI bool operator > (CHV4DKEY const&) const;

	public:
		__ABI HV4D::HV4DRETURN HV4DGetHstringKEY(hstring&, hstring&) const;

		__ABI HV4D::HV4DRETURN HV4DGetArrayKEY(wchar_t[256], wchar_t[256]) const;

		__ABI HV4D::HV4DRETURN HV4DGetWinrtKEY(winrt::HV4DABI::KEY&) const;

		__ABI HV4D::HV4DRETURN HV4DGetNativeKEY(winrt::guid&, hstring&) const;

	private:
		CHV4DHVID tagHVID{};

		CHV4DMAXPATH tagMAXPATH{};

	};

	struct CHV4DKEYFN
	{
		std::size_t operator() (const CHV4DKEY& key) const
		{
			winrt::guid hvid{};

			hstring str;

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
