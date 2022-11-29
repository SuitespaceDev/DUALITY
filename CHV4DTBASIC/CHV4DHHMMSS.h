#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DSYSCALL.lib")

#include <vector>

#include <string>

#include <ctime>

#include <stdexcept>

#include "..\CHV4DSYSCALL\CHV4DKEYMAP.h"
#include "..\CHV4DSYSCALL\CHV4DTIME.h"

namespace SYSCALL = CHV4D::CHV4DSYSCALL;

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DHHMMSS
	{
	public:
		CHV4DHHMMSS();

		CHV4DHHMMSS(std::wstring const&);

		CHV4DHHMMSS(CHV4DHHMMSS const&);

		void HV4DIsValidHHMMSS() const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DHHMMSS const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DHHMMSS const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DHHMMSS const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DHHMMSS const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DHHMMSS const&) const;

	public:
		void HV4DCurrentHHMMSS();

		void HV4DGetStringHHMMSS(std::wstring&) const;

		void HV4DGetNumericHHMMSS(uint8_t&, uint8_t&, uint8_t&) const;

		void HV4DGetArrayHHMMSS(wchar_t[6]) const;

	private:
		wchar_t tagHHMMSS[6]{ '\0' };

	};

}