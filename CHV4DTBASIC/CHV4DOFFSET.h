/**************************************************************************************************************************/
/**************************************************************************************************************************/
/*****/
/*****/  //Entangled Logic Venture Company
/*****/  //
/*****/	 //Duality137
/*****/  //
/*****/  //Offset Lower Upper; Size Lower Upper
/*****/
/*****/
/**************************************************************************************************************************/
/**************************************************************************************************************************/

#pragma once

#include <objbase.h>

#include <vector>

#include <string>

#include <stdexcept>

#include "CHV4DNUMERIC.h"

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DOFFSET
	{
	public:
		CHV4DOFFSET();

		CHV4DOFFSET(std::wstring const&, std::wstring const&);

		CHV4DOFFSET(DWORD const&, DWORD const&, DWORD const&, DWORD const&);

		CHV4DOFFSET(uint64_t const&, uint64_t const&);

		CHV4DOFFSET(CHV4DOFFSET const&);

	public:
		void operator = (std::tuple<std::wstring const&, std::wstring const&>);

		void operator = (std::tuple<DWORD, DWORD, DWORD, DWORD>);

		void operator = (std::tuple<uint64_t, uint64_t>);

		void operator = (CHV4DOFFSET const&);

		bool operator == (CHV4DOFFSET const&) const;

		bool operator != (CHV4DOFFSET const&) const;

		operator std::tuple<std::wstring, std::wstring>() const;

		operator std::tuple<uint64_t, uint64_t>() const;

		operator std::tuple<DWORD, DWORD, DWORD, DWORD>() const;

	private:
		CHV4DNUMERIC tagOFFSET{};

		CHV4DNUMERIC tagSIZE{};

	};

}