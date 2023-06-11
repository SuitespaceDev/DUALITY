#pragma once

#include "HV4DRETURN.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct HV4DRETURN : HV4DRETURNT<HV4DRETURN>
	{
	public:
		HV4DRETURN() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DRETURN : HV4DRETURNT<HV4DRETURN, implementation::HV4DRETURN>
	{

	};

}
