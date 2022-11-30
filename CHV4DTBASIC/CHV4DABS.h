#pragma once

#include <vector>

#include <string>

#include <stdexcept>

#include "CHV4DMAXPATH.h"

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DABS
	{
	public:
		CHV4DABS();

		CHV4DABS(std::wstring const&, std::wstring const&);

		CHV4DABS(CHV4DMAXPATH const&, CHV4DMAXPATH const&);

		CHV4DABS(CHV4DABS const&);

		void HV4DIsValidABS() const;

	public:
		void operator = (CHV4DABS const&);

		bool operator == (CHV4DABS const&) const;

		bool operator != (CHV4DABS const&) const;

	public:
		void HV4DGetStringABS(std::wstring&, std::wstring&) const;

		void HV4DGetMaxPathABS(CHV4DMAXPATH&, CHV4DMAXPATH&) const;

	private:
		CHV4DMAXPATH tagPATH{};

		CHV4DMAXPATH tagFILE{};

	};

}