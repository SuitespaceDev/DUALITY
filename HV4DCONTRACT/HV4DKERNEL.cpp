#include "pch.h"
#include "HV4DKERNEL.h"
#if __has_include("HV4DKERNEL.g.cpp")
#include "HV4DKERNEL.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DKERNEL::HV4DKERNEL()
	{

		return;

	}

	HV4DRETURN HV4DKERNEL::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
