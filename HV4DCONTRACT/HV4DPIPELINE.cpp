#include "pch.h"
#include "HV4DPIPELINE.h"
#if __has_include("HV4DPIPELINE.g.cpp")
#include "HV4DPIPELINE.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DPIPELINE::HV4DPIPELINE()
	{

		return;

	}

	HV4DRETURN HV4DPIPELINE::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
