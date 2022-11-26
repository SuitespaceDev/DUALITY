#include "pch.h"
#include "HV4DSTRING.h"
#if __has_include("HV4DSTRING.g.cpp")
#include "HV4DSTRING.g.cpp"
#endif

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DSTRING::HV4DSTRING()
	{

		return;

	}

	HV4D::IHV4DRETURN HV4DSTRING::HV4DSubStr(winrt::hstring const&, uint32_t const&, uint32_t const&, winrt::hstring&)
	{


		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DSTRING::HV4DNoSymbols(winrt::hstring const&, winrt::hstring&)
	{


		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DSTRING::HV4DHasSymbols(winrt::hstring const&)
	{


		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DSTRING::HV4DNoEscape(winrt::hstring const&, winrt::hstring&)
	{


		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
