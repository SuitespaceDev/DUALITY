#include "pch.h"
#include "HV4DSERVER.h"
#if __has_include("HV4DSERVER.g.cpp")
#include "HV4DSERVER.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DSERVER::HV4DSERVER()
	{

		return;

	}

	HV4DRETURN HV4DSERVER::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
