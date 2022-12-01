#pragma once

#include <vector>

#include <string>

#include <stdexcept>

#include "CHV4DMAXPATH.h"

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DCLASST
	{
	public:
		CHV4DCLASST();

		CHV4DCLASST(std::wstring const&, std::wstring const&);

		CHV4DCLASST(CHV4DMAXPATH const&, CHV4DMAXPATH const&);

		CHV4DCLASST(CHV4DCLASST const&);

	public:
		void operator = (CHV4DCLASST const&);

		bool operator == (CHV4DCLASST const&) const;

		bool operator != (CHV4DCLASST const&) const;

	public:
		void HV4DGetStringCLASST(std::wstring&, std::wstring&) const;

		void HV4DGetMAXPATH(CHV4DMAXPATH&, CHV4DMAXPATH&) const;

	private:
		CHV4DMAXPATH tagNAMESPACE{};

		CHV4DMAXPATH tagWINRTCLASS{};

	};

}