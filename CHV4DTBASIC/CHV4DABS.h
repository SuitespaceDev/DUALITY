#pragma once

#include <vector>

#include <string>

#include <stdexcept>

#include "CHV4DMAXPATH.h"

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DABS /* PATH, FILE */
	{
	public:
		CHV4DABS();

		CHV4DABS(std::wstring const&, std::wstring const&);

		CHV4DABS(CHV4DMAXPATH const&, CHV4DMAXPATH const&);

		CHV4DABS(CHV4DABS const&);

	private:
		void HV4DIsValidABS() const;

	public:
		void operator = (std::tuple<std::wstring const&, std::wstring const&>);

		void operator = (CHV4DABS const&);

		bool operator == (CHV4DABS const&) const;

		bool operator != (CHV4DABS const&) const;

		operator std::tuple<std::wstring, std::wstring>() const;

		operator std::tuple<CHV4DMAXPATH, CHV4DMAXPATH>() const;

	private:
		CHV4DMAXPATH tagPATH{};

		CHV4DMAXPATH tagFILE{};

	};

}