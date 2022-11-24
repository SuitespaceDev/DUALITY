#include "pch.h"
#include "HV4DSHELL.h"
#if __has_include("HV4DSHELL.g.cpp")
#include "HV4DSHELL.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DSHELL::HV4DSHELL()
	{

		return;

	}

	HV4DRETURN HV4DSHELL::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
