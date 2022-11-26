#include "pch.h"
#include "HV4DFACTORY.h"
#if __has_include("HV4DFACTORY.g.cpp")
#include "HV4DFACTORY.g.cpp"
#endif

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DFACTORY::HV4DFACTORY()
	{

		return;

	}

	HV4D::IHV4DRETURN HV4DFACTORY::HV4DGetActivationFactory(winrt::hstring const& dll, winrt::hstring const& rtclass, WF::IInspectable& factory)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
