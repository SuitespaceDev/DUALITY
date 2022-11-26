#pragma once

#include "winrt/HV4D.h"

#include "HV4DKEYMAP.g.h"

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DKEYMAP : HV4DKEYMAPT<HV4DKEYMAP>
	{
	public:
		HV4DKEYMAP();

	public:
		HV4D::IHV4DRETURN HV4DCharToNumeric(char16_t const&, uint32_t&);

		HV4D::IHV4DRETURN HV4DCharFromNumeric(uint32_t const&, char16_t&);

		HV4D::IHV4DRETURN HV4DCharIsHex(char16_t const&);

		HV4D::IHV4DRETURN HV4DCharIsNumeric(char16_t const&);

		HV4D::IHV4DRETURN HV4DCharIsAlphaNumeric(char16_t const&);

		HV4D::IHV4DRETURN HV4DCharIsSymbol(char16_t const&);

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DKEYMAP : HV4DKEYMAPT<HV4DKEYMAP, implementation::HV4DKEYMAP>
	{

	};

}
