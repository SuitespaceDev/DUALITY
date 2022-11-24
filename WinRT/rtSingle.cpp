#include "pch.h"
#include "HV4DSingle.h"
#if __has_include("HV4DSingle.g.cpp")
#include "HV4DSingle.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DSingle::HV4DSingle()
	{

		return;

	}

	HV4DRETURN HV4DSingle::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
