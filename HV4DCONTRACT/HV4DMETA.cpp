#include "pch.h"
#include "HV4DMETA.h"
#if __has_include("HV4DMETA.g.cpp")
#include "HV4DMETA.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DMETA::HV4DMETA()
	{

		return;

	}

	HV4DRETURN HV4DMETA::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
