#include "pch.h"
#include "HV4DSERVICE.h"
#if __has_include("HV4DSERVICE.g.cpp")
#include "HV4DSERVICE.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DSERVICE::HV4DSERVICE()
	{

		return;

	}

	HV4DRETURN HV4DSERVICE::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
