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
	class CHV4DABS
	{
	public:
		CHV4DABS();

		CHV4DABS(std::wstring const&, std::wstring const&);

		CHV4DABS(CHV4DABS const&);

		void HV4DIsValidABS() const;

	public:
		void operator = (CHV4DABS const&);

		bool operator == (CHV4DABS const&) const;

		bool operator != (CHV4DABS const&) const;

	public:
		void HV4DGetStringABS(std::wstring&, std::wstring&) const;

		void HV4DGetArrayABS(wchar_t[256], wchar_t[256]) const;

	private:
		wchar_t tagPATH[256]{ '\0' };

		wchar_t tagFILE[256]{ '\0' };

	};

}