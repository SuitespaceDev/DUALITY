#pragma once

#include "winrt/HV4D.h"

#include "HV4DDOCUMENT.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DDOCUMENT : HV4DDOCUMENTT<HV4DDOCUMENT>
	{
	public:
		HV4DDOCUMENT();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DDOCUMENT : HV4DDOCUMENTT<HV4DDOCUMENT, implementation::HV4DDOCUMENT>
	{

	};

}
