#pragma once

#include "winrt/HV4D.h"

#include "HV4DXML.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DXML : HV4DXMLT<HV4DXML>
	{
	public:
		HV4DXML();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DXML : HV4DXMLT<HV4DXML, implementation::HV4DXML>
	{

	};

}
