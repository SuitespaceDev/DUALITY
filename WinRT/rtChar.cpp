#include "pch.h"
#include "HV4DChar.h"
#if __has_include("HV4DChar.g.cpp")
#include "HV4DChar.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::WinRT::implementation
{
	HV4DChar::HV4DChar()
	{

		return;

	}

	HV4DRETURN HV4DChar::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
