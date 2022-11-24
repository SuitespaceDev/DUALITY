#include "pch.h"
#include "HV4DAPP.h"
#if __has_include("HV4DAPP.g.cpp")
#include "HV4DAPP.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DAPP::HV4DAPP()
	{

		return;

	}

	HV4DRETURN HV4DAPP::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
