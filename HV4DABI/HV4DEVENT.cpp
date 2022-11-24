#include "pch.h"
#include "HV4DEVENT.h"
#if __has_include("HV4DEVENT.g.cpp")
#include "HV4DEVENT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DEVENT::HV4DEVENT()
	{

		return;

	}

	HV4DRETURN HV4DEVENT::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
