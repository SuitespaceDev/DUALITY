﻿#pragma once

#include "winrt/HV4D.h"

#include "HV4DSERVICE.g.h"

namespace winrt::Shaders23::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::Shaders23::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
