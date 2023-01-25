module;

#include <guiddef.h>

#include <string>

#include <stdexcept>

export module CHV4DTBASIC:CHV4DDATETIME;

import :CHV4DMMDDYYYY;
import :CHV4DHHMMSS;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DDATETIME
	{
	public:
		CHV4DDATETIME();

		CHV4DDATETIME(std::wstring const&, std::wstring const&);

		CHV4DDATETIME(CHV4DMMDDYYYY const&, CHV4DHHMMSS const&);

		CHV4DDATETIME(CHV4DDATETIME const&);

	public:
		void operator = (std::tuple<std::wstring const&, std::wstring const&>);

		void operator = (CHV4DDATETIME const&);

		bool operator == (CHV4DDATETIME const&) const;

		bool operator != (CHV4DDATETIME const&) const;

		bool operator < (CHV4DDATETIME const&) const;

		bool operator > (CHV4DDATETIME const&) const;

		operator std::tuple<std::wstring, std::wstring>() const;

		operator std::tuple<CHV4DMMDDYYYY, CHV4DHHMMSS>() const;

		void operator()();

	private:
		CHV4DMMDDYYYY tagMMDDYYYY{};

		CHV4DHHMMSS tagHHMMSS{};

	};

}