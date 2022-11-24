#include "pch.h"
#include "HV4DABS.h"
#if __has_include("HV4DABS.g.cpp")
#include "HV4DABS.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DABS::HV4DABS()
	{

		return;

	}

	HV4DRETURN HV4DABS::HV4DFromHstring(hstring const&, hstring const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DFromABI(ABS const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DFromWinRT(winrt::HV4DABI::HV4DABS const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DToHstring(hstring&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DToABI(ABS&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DToWinRT(winrt::HV4DABI::HV4DABS)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DIsEqualHstring(hstring const&, hstring const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DIsEqualABI(ABS const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DABS::HV4DIsEqualWinRT(winrt::HV4DABI::HV4DABS const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
