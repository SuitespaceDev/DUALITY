#pragma once

#include "winrt/HV4D.h"

#include "HV4DAPP.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DAPP : HV4DAPPT<HV4DAPP>
	{
	public:
		HV4DAPP();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DAPP : HV4DAPPT<HV4DAPP, implementation::HV4DAPP>
	{

	};

}
