#include "pch.h"
#include "HV4DINTERUPT.h"
#if __has_include("HV4DINTERUPT.g.cpp")
#include "HV4DINTERUPT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DINTERUPT::HV4DINTERUPT()
	{

		return;

	}

	HV4DRETURN HV4DINTERUPT::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
