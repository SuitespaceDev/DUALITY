#include "pch.h"
#include "HV4DCLIENT.h"
#if __has_include("HV4DCLIENT.g.cpp")
#include "HV4DCLIENT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DCLIENT::HV4DCLIENT()
	{

		return;

	}

	HV4DRETURN HV4DCLIENT::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
