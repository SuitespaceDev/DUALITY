#include "pch.h"
#include "HV4DWORLD.h"
#if __has_include("HV4DWORLD.g.cpp")
#include "HV4DWORLD.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DWORLD::HV4DWORLD()
	{

		return;

	}

	HV4DRETURN HV4DWORLD::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
