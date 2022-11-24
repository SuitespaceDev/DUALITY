#include "pch.h"
#include "HV4DOBJECT.h"
#if __has_include("HV4DOBJECT.g.cpp")
#include "HV4DOBJECT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DOBJECT::HV4DOBJECT()
	{

		return;

	}

	HV4DRETURN HV4DOBJECT::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
