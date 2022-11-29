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
	class CHV4DMMDDYYYY
	{
	public:
		CHV4DMMDDYYYY();

		CHV4DMMDDYYYY(std::wstring const&);

		CHV4DMMDDYYYY(CHV4DMMDDYYYY const&);

		void HV4DIsValidMMDDYYYY() const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMMDDYYYY const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMMDDYYYY const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMMDDYYYY const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMMDDYYYY const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMMDDYYYY const&) const;

	public:
		void HV4DCurrentMMDDYYYY();

		void HV4DGetStringMMDDYYYY(std::wstring&) const;

		void HV4DGetNumericMMDDYYYY(uint8_t&, uint8_t&, uint8_t&) const;

		void HV4DGetArrayMMDDYYYY(wchar_t[8]) const;

	private:
		wchar_t tagMMDDYYYY[8]{ '\0' };

	};

}