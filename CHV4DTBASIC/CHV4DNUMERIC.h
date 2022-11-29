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
	class CHV4DNUMERIC
	{
	public:
		CHV4DNUMERIC();

		CHV4DNUMERIC(uint64_t const&);

		CHV4DNUMERIC(CHV4DNUMERIC const&);

		void HV4DIsValidOffset() const;

	public:
		void operator = (uint64_t const&);

		void operator = (std::wstring const&);

		void operator = (CHV4DNUMERIC const&);

		bool operator == (uint64_t const&) const;

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DNUMERIC const&) const;

		bool operator != (uint64_t const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DNUMERIC const&) const;

		bool operator < (uint64_t const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DNUMERIC const&) const;

		bool operator > (uint64_t const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DNUMERIC const&) const;

	public:
		void HV4DGetStringNUMERIC(std::wstring&) const;

		void HV4DGetNUMERIC(uint64_t&) const;

	private:
		uint64_t tagNUM;

	};

}