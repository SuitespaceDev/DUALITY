#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DSYSCALL.lib")

#include <vector>

#include <string>

#include <ctime>

#include <stdexcept>

#include "..\CHV4DSYSCALL\CHV4DKEYMAP.h"

namespace SYSCALL = CHV4D::CHV4DSYSCALL;

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMMM
	{
	public:
		CHV4DMMM();

		CHV4DMMM(std::wstring const&);

		CHV4DMMM(CHV4DMMM const&);

		void HV4DIsValidMMM() const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMMM const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMMM const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMMM const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMMM const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMMM const&) const;

	public:
		void HV4DGetStringMMM(std::wstring&) const;

		void HV4DGetNumericMMM(uint8_t&, uint8_t&, uint8_t&) const;

		void HV4DGetArrayMMM(wchar_t[7]) const;

	private:
		wchar_t tagMMM[7]{ '\0' };

	};

}