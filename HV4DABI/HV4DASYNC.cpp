#include "pch.h"
#include "HV4DASYNC.h"
#if __has_include("HV4DASYNC.g.cpp")
#include "HV4DASYNC.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DASYNC::HV4DASYNC()
	{

		return;

	}

	HV4DRETURN HV4DASYNC::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
