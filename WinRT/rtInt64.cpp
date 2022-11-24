#include "pch.h"
#include "HV4DInt64.h"
#if __has_include("HV4DInt64.g.cpp")
#include "HV4DInt64.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DInt64::HV4DInt64()
	{

		return;

	}

	HV4DRETURN HV4DInt64::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
