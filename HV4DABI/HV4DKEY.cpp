#include "pch.h"
#include "HV4DKEY.h"
#if __has_include("HV4DKEY.g.cpp")
#include "HV4DKEY.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DKEY::HV4DKEY()
	{

		return;

	}

	HV4DRETURN HV4DKEY::HV4DFromHstring(hstring const& p, hstring const& f)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DFromKEY(winrt::HV4DABI::KEY const& key)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DFromWinRT(winrt::HV4DABI::HV4DKEY const& key)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DToHstring(hstring& p, hstring& f)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DToKEY(winrt::HV4DABI::KEY& key)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DToWinRT(winrt::HV4DABI::HV4DKEY& key)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DIsEqualHstring(hstring const& p, hstring const& f)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DIsEqualKEY(winrt::HV4DABI::KEY const& key)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DKEY::HV4DIsEqualWinRT(winrt::HV4DABI::HV4DKEY const& key)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}

