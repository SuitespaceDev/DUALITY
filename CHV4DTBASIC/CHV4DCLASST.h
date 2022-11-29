#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DSYSCALL.lib")

#include <vector>

#include <string>

#include <stdexcept>

#include "..\CHV4DSYSCALL\CHV4DKEYMAP.h"
#include "..\CHV4DSYSCALL\CHV4DTIME.h"

namespace SYSCALL = CHV4D::CHV4DSYSCALL;

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DCLASST
	{
	public:
		CHV4DCLASST();

		CHV4DCLASST(std::wstring const&, std::wstring const&);

		CHV4DCLASST(CHV4DCLASST const&);

		void HV4DIsValidCLASST() const;

	public:
		void operator = (CHV4DCLASST const&);

		bool operator == (CHV4DCLASST const&) const;

		bool operator != (CHV4DCLASST const&) const;

	public:
		void HV4DGetStringCLASST(std::wstring&, std::wstring&) const;

		void HV4DGetArrayCLASST(wchar_t[256], wchar_t[256]) const;

	private:
		wchar_t tagNAMESPACE[256]{ '\0' };

		wchar_t tagWINRTCLASS[256]{ '\0' };

	};

}