#include "pch.h"
#include "HV4DMMM.h"
#if __has_include("HV4DMMM.g.cpp")
#include "HV4DMMM.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DMMM::HV4DMMM()
	{

		return;

	}

	HV4DRETURN HV4DMMM::HV4DFromHstring(hstring const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DFromABI(MMM const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DFromWinRT(winrt::HV4DABI::HV4DMMM const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DToHstring(hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DToABI(MMM&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DToWinRT(winrt::HV4DABI::HV4DMMM&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DIsEqualHstring(hstring const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DIsEqualABI(MMM const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DMMM::HV4DIsEqualWinRT(winrt::HV4DABI::HV4DMMM const&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
