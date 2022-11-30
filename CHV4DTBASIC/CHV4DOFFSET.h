#pragma once

#include <objbase.h>

#include <vector>

#include <string>

#include <stdexcept>

#include "CHV4DNUMERIC.h"

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DOFFSET
	{
	public:
		CHV4DOFFSET();

		CHV4DOFFSET(std::wstring const&, std::wstring const&);

		CHV4DOFFSET(DWORD const&, DWORD const&, DWORD const&, DWORD const&);

		CHV4DOFFSET(uint64_t const&, uint64_t const&);

		CHV4DOFFSET(CHV4DOFFSET const&);

	public:
		void operator = (CHV4DOFFSET const&);

		bool operator == (CHV4DOFFSET const&) const;

		bool operator != (CHV4DOFFSET const&) const;

	public:
		void HV4DGetStringOFFSET(std::wstring&, std::wstring&) const;

		void HV4DGetNumericOFFSET(uint64_t&, uint64_t&) const;

		void HV4DGetDWORDOFFSET(DWORD&, DWORD&, DWORD&, DWORD&) const;

	private:
		CHV4DNUMERIC tagOFFSET{};

		CHV4DNUMERIC tagSIZE{};

	};

}