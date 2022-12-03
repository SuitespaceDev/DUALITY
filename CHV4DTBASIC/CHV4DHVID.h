#pragma once

#include <objbase.h>

#include <vector>

#include <string>

#include <iostream>
#include <sstream>

#include <stdexcept>

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DHVID
	{
	public:
		CHV4DHVID();

		CHV4DHVID(std::wstring const&);

		CHV4DHVID(GUID const&);

		CHV4DHVID(CHV4DHVID const&);

	public:
		void operator = (std::wstring const&);

		void operator = (GUID const&);

		void operator = (CHV4DHVID const&);

		bool operator == (std::wstring const&) const;

		bool operator == (GUID const&) const;

		bool operator == (CHV4DHVID const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (GUID const&) const;

		bool operator != (CHV4DHVID const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (GUID const&) const;

		bool operator < (CHV4DHVID const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (GUID const&) const;

		bool operator > (CHV4DHVID const&) const;

		operator std::wstring() const;

		operator GUID const&() const;

		void operator()();

	private:
		void HV4DToString(GUID const&, std::wstring&) const;

		void HV4DToGUID(std::wstring const&, GUID&) const;

	private:
		GUID tagHVID{};

	};

}