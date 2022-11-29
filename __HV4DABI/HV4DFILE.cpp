#include "pch.h"
#include "HV4DFILE.h"
#if __has_include("HV4DFILE.g.cpp")
#include "HV4DFILE.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DFILE::HV4DFILE()
	{

		return;

	}

	HV4DRETURN HV4DFILE::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
