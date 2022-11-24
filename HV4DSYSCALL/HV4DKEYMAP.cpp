#include "pch.h"
#include "HV4DKEYMAP.h"
#if __has_include("HV4DKEYMAP.g.cpp")
#include "HV4DKEYMAP.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DKEYMAP::HV4DKEYMAP()
	{

		return;

	}

	HV4DRETURN HV4DKEYMAP::HV4DCharToNumeric(char16_t const&, uint32_t&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEYMAP::HV4DCharFromNumeric(uint32_t const&, char16_t&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEYMAP::HV4DCharIsHex(char16_t const&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEYMAP::HV4DCharIsNumeric(char16_t const&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEYMAP::HV4DCharIsAlphaNumeric(char16_t const&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEYMAP::HV4DCharIsSymbol(char16_t const&)
	{




		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
