#pragma once

#include "winrt/HV4D.h"

#include "HV4DHstringFromGUID.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DHstringFromGUID : HV4DHstringFromGUIDT<HV4DHstringFromGUID>
	{
	public:
		HV4DHstringFromGUID();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DHstringFromGUID : HV4DHstringFromGUIDT<HV4DHstringFromGUID, implementation::HV4DHstringFromGUID>
	{

	};

}
