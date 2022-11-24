#pragma once

#include "winrt/HV4D.h"

#include "HV4DSERVICE.g.h"

namespace winrt::HV4DBINDINGS::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DBINDINGS::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
