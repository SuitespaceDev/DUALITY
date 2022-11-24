#include "pch.h"
#include "HV4DInt16.h"
#if __has_include("HV4DInt16.g.cpp")
#include "HV4DInt16.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DInt16::HV4DInt16()
	{

		return;

	}

	HV4DRETURN HV4DInt16::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
