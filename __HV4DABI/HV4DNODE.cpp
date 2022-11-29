#include "pch.h"
#include "HV4DNODE.h"
#if __has_include("HV4DNODE.g.cpp")
#include "HV4DNODE.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DNODE::HV4DNODE()
	{

		return;

	}

	HV4DRETURN HV4DNODE::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
