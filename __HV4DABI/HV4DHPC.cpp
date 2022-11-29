#include "pch.h"
#include "HV4DHPC.h"
#if __has_include("HV4DHPC.g.cpp")
#include "HV4DHPC.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DHPC::HV4DHPC()
	{

		return;

	}

	HV4DRETURN HV4DHPC::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
