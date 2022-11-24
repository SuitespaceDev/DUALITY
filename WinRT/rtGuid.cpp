#include "pch.h"
#include "HV4DGuid.h"
#if __has_include("HV4DGuid.g.cpp")
#include "HV4DGuid.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DGuid::HV4DGuid()
	{

		return;

	}

	HV4DRETURN HV4DGuid::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
