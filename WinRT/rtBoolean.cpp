#include "pch.h"
#include "HV4DBoolean.h"
#if __has_include("HV4DBoolean.g.cpp")
#include "HV4DBoolean.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DBoolean::HV4DBoolean()
	{

		return;

	}

	HV4DRETURN HV4DBoolean::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
