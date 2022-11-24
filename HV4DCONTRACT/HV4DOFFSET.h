#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DOFFSET.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DOFFSET : HV4DOFFSETT<HV4DOFFSET>
	{
	public:
		HV4DOFFSET();

	public:
		HV4D::HV4DRETURN HV4DFromUInt64(uint64_t const&, uint64_t const&);

		HV4D::HV4DRETURN HV4DFromHstring(hstring const&, hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::OFFSET const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DOFFSET const&);

		HV4D::HV4DRETURN HV4DToUInt64(uint64_t&, uint64_t&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&, hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::OFFSET&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DOFFSET);

		HV4D::HV4DRETURN HV4DIsEqualUInt64(uint64_t const&, uint64_t const&);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&, hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::OFFSET const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DOFFSET const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DOFFSET : HV4DOFFSETT<HV4DOFFSET, implementation::HV4DOFFSET>
	{

	};

}
