#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DHVID.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DHVID : HV4DHVIDT<HV4DHVID>
	{
	public:
		HV4DHVID();

	public:
		HV4D::HV4DRETURN HV4DFromHstring(hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::HVID const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DHVID const&);

		HV4D::HV4DRETURN HV4DFromNative(winrt::guid const&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::HVID&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DHVID&);

		HV4D::HV4DRETURN HV4DToNative(winrt::guid&);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::HVID const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DHVID const&);


	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DHVID : HV4DHVIDT<HV4DHVID, implementation::HV4DHVID>
	{

	};

}
