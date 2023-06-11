#pragma once

#include "HV4DDO.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct HV4DDO : HV4DDOT<HV4DDO>
	{
	public:
		HV4DDO() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DDO : HV4DDOT<HV4DDO, implementation::HV4DDO>
	{

	};

}
