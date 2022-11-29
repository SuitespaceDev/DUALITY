#include "pch.h"
#include "HV4DDEBUG.h"
#if __has_include("HV4DDEBUG.g.cpp")
#include "HV4DDEBUG.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DDEBUG::HV4DDEBUG()
	{

		return;

	}

	HV4DRETURN HV4DDEBUG::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
