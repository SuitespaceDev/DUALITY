#include "pch.h"
#include "HV4DSTRING.h"
#if __has_include("HV4DSTRING.g.cpp")
#include "HV4DSTRING.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DSTRING::HV4DSTRING()
	{

		return;

	}

	HV4DRETURN HV4DSTRING::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
