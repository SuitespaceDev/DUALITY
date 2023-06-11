#pragma once

#include "HV4DBASE.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct HV4DBASE : HV4DBASET<HV4DBASE>
	{
	public:
		HV4DBASE() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DBASE : HV4DBASET<HV4DBASE, implementation::HV4DBASE>
	{

	};

}
