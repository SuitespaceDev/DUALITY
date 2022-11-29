#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DSYSCALL.lib")

#include <objbase.h>

#include <vector>

#include <string>

#include <ctime>

#include <stdexcept>

#include "..\CHV4DSYSCALL\CHV4DKEYMAP.h"

#include "CHV4DHVID.h"
#include "CHV4DMAXPATH.h"

namespace SYSCALL = CHV4D::CHV4DSYSCALL;

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DKEY
	{
	public:
		CHV4DKEY();

		CHV4DKEY(std::wstring const&, std::wstring const&);

		CHV4DKEY(GUID const&, std::wstring const&);

		CHV4DKEY(CHV4DKEY const&);

		void HV4DIsValidKEY() const;

	public:
		void operator = (CHV4DKEY const&);

		bool operator == (CHV4DKEY const&) const;

		bool operator != (CHV4DKEY const&) const;

		bool operator < (CHV4DKEY const&) const;

		bool operator > (CHV4DKEY const&) const;

	public:
		void HV4DGetStringKEY(std::wstring&, std::wstring&) const;

		void HV4DGetArrayKEY(wchar_t[256], wchar_t[256]) const;

		void HV4DGetNativeKEY(GUID&, std::wstring&) const;

	private:
		CHV4DHVID tagHVID{};

		CHV4DMAXPATH tagMAXPATH{};

	};

	struct CHV4DKEYFN
	{
		std::size_t operator() (CHV4DKEY const& key) const
		{
			GUID hvid{};

			std::wstring str;

			key.HV4DGetNativeKEY(hvid, str);

			std::size_t h1{}, h2{}, h3;

			memcpy(&h1, &hvid, sizeof(long long));

			memcpy(&h2, &hvid.Data4, sizeof(long long));

			h1 = h1 ^ h2;

			h3 = std::hash<std::wstring>()(str);

			return h1 ^ h3;

		}
	};


}
