#include "pch.h"
#include "HV4DSTRING.h"
#if __has_include("HV4DSTRING.g.cpp")
#include "HV4DSTRING.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DSTRING::HV4DSTRING()
	{

		return;

	}

	HV4DRETURN HV4DSTRING::HV4DSubStr(hstring const&, uint32_t const&, uint32_t const&, hstring&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DSTRING::HV4DNoSymbols(hstring const&, hstring&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DSTRING::HV4DHasSymbols(hstring const&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DSTRING::HV4DNoEscape(hstring const&, hstring&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
