#pragma once

#include "RTHV4DPARAMETER.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DPARAMETER : RTHV4DPARAMETERT<RTHV4DPARAMETER>
	{
	public:
		RTHV4DPARAMETER();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DPARAMETER : RTHV4DPARAMETERT<RTHV4DPARAMETER, implementation::RTHV4DPARAMETER>
	{

	};

}
