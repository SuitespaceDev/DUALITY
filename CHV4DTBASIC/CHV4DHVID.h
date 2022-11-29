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
	class CHV4DHVID
	{
	public:
		CHV4DHVID();

		CHV4DHVID(std::wstring const&);

		CHV4DHVID(GUID const&);

		CHV4DHVID(CHV4DHVID const&);

		void HV4DIsValidHVID() const;

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

	public:
		void HV4DRandomHVID();

		void HV4DGetStringHVID(std::wstring&) const;

		void HV4DGetNativeHVID(GUID&) const;

		void HV4DGetArrayHVID(wchar_t[32]) const;

	private:
		wchar_t tagHVID[32]{ '0' };

	};

}