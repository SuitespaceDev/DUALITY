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
	class CHV4DMAXPATH
	{
	public:
		CHV4DMAXPATH();

		CHV4DMAXPATH(std::wstring const&);

		CHV4DMAXPATH(CHV4DMAXPATH const&);

		void HV4DIsValidMAXPATH() const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMAXPATH const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMAXPATH const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMAXPATH const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMAXPATH const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMAXPATH const&) const;

	public:
		void HV4DGetStringMAXPATH(std::wstring&) const;

		void HV4DGetArrayMAXPATH(wchar_t[256]) const;

	private:
		wchar_t tagMAXPATH[256]{ '\0' };

	};

}