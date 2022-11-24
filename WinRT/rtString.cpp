#include "pch.h"
#include "HV4DString.h"
#if __has_include("HV4DString.g.cpp")
#include "HV4DString.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DString::HV4DString()
	{

		return;

	}

	HV4DRETURN HV4DString::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
