#include "pch.h"
#include "HV4DVIEW.h"
#if __has_include("HV4DVIEW.g.cpp")
#include "HV4DVIEW.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DVIEW::HV4DVIEW()
	{

		return;

	}

	HV4DRETURN HV4DVIEW::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
