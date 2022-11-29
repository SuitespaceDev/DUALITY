﻿#pragma once

#include "winrt/HV4D.h"

#include "HV4DSHELL.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DSHELL : HV4DSHELLT<HV4DSHELL>
	{
	public:
		HV4DSHELL();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DSHELL : HV4DSHELLT<HV4DSHELL, implementation::HV4DSHELL>
	{

	};

}