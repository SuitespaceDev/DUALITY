#include "pch.h"
#include "HV4DDouble.h"
#if __has_include("HV4DDouble.g.cpp")
#include "HV4DDouble.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DDouble::HV4DDouble()
	{

		return;

	}

	HV4DRETURN HV4DDouble::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
