#pragma once

#include <objbase.h>

#include <vector>

#include <string>

#include <stdexcept>

#include "CHV4DMMDDYYYY.h"
#include "CHV4DHHMMSS.h"

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DDATETIME
	{
	public:
		CHV4DDATETIME();

		CHV4DDATETIME(std::wstring const&, std::wstring const&);

		CHV4DDATETIME(CHV4DMMDDYYYY const&, CHV4DHHMMSS const&);

		CHV4DDATETIME(CHV4DDATETIME const&);

	public:
		void operator = (CHV4DDATETIME const&);

		bool operator == (CHV4DDATETIME const&) const;

		bool operator != (CHV4DDATETIME const&) const;

		bool operator < (CHV4DDATETIME const&) const;

		bool operator > (CHV4DDATETIME const&) const;

	public:
		void HV4DSetToCurrentDATETIME();

		void HV4DGetStringDATETIME(std::wstring&, std::wstring&) const;

		void HV4DGetDATETIME(CHV4DMMDDYYYY&, CHV4DHHMMSS&) const;

	private:
		CHV4DMMDDYYYY tagMMDDYYYY{};

		CHV4DHHMMSS tagHHMMSS{};

	};

}