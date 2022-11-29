#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DSYSCALL.lib")

#include <objbase.h>

#include <vector>

#include <string>

#include <ctime>

#include <stdexcept>

#include "..\CHV4DSYSCALL\CHV4DKEYMAP.h"

namespace SYSCALL = CHV4D::CHV4DSYSCALL;

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DOFFSET
	{
	public:
		CHV4DOFFSET();

		CHV4DOFFSET(DWORD const&, DWORD const&, DWORD const&, DWORD const&);

		CHV4DOFFSET(uint64_t const&, uint64_t const&);

		CHV4DOFFSET(std::wstring const&, std::wstring const&);

		CHV4DOFFSET(CHV4DOFFSET const&);

		void HV4DIsValidOffset() const;

	public:
		void operator = (CHV4DOFFSET const&);

		bool operator == (CHV4DOFFSET const&) const;

		bool operator != (CHV4DOFFSET const&) const;

	public:
		void HV4DGetStringOFFSET(std::wstring&, std::wstring&) const;

		void HV4DGetNumericOFFSET(uint64_t&, uint64_t&) const;

		void HV4DGetDWORDOFFSET(DWORD&, DWORD&, DWORD&, DWORD&) const;

		void HV4DGetArrayOFFSET(wchar_t[4], wchar_t[4]) const;

	private:
		wchar_t tagOFFSET[4]{ '0', '0', '0', '0' };

		wchar_t tagSIZE[4]{ '0', '0', '0', '0' };

	};

}