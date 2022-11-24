#include "pch.h"
#include "HV4DWINRT.h"
#if __has_include("HV4DWINRT.g.cpp")
#include "HV4DWINRT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DWINRT::HV4DWINRT()
	{

		return;

	}

	HV4DRETURN HV4DWINRT::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
