#pragma once

#ifdef SYSCALL
#define __SYSCALL __declspec(dllexport)
#else
#define __SYSCALL __declspec(dllimport)
#endif

#include "winrt/HV4D.h"

#include "HV4DFACTORY.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DFACTORY : HV4DFACTORYT<HV4DFACTORY>
	{
	public:
		HV4DFACTORY();

	public:
		__SYSCALL HV4D::HV4DRETURN HV4DGetActivationFactory(hstring const&, hstring const&, winrt::Windows::Foundation::IInspectable&);

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DFACTORY : HV4DFACTORYT<HV4DFACTORY, implementation::HV4DFACTORY>
	{

	};

}
