#include "pch.h"
#include "HV4DFACTORY.h"
#if __has_include("HV4DFACTORY.g.cpp")
#include "HV4DFACTORY.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DFACTORY::HV4DFACTORY()
	{

		return;

	}

	HV4DRETURN HV4DFACTORY::HV4DGetActivationFactory(hstring const& dll, hstring const& rtclass, winrt::Windows::Foundation::IInspectable& factory)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
