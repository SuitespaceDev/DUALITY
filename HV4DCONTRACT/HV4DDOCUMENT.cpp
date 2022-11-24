#include "pch.h"
#include "HV4DDOCUMENT.h"
#if __has_include("HV4DDOCUMENT.g.cpp")
#include "HV4DDOCUMENT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DDOCUMENT::HV4DDOCUMENT()
	{

		return;

	}

	HV4DRETURN HV4DDOCUMENT::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
