#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DMAXPATH.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DMAXPATH : HV4DMAXPATHT<HV4DMAXPATH>
	{
	public:
		HV4DMAXPATH();

	public:
		HV4D::HV4DRETURN HV4DFromHstring(hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::MAXPATH const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DMAXPATH const&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::MAXPATH&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DMAXPATH);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::MAXPATH const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DMAXPATH const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DMAXPATH : HV4DMAXPATHT<HV4DMAXPATH, implementation::HV4DMAXPATH>
	{

	};

}
