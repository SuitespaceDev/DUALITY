#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DMMDDYYYY.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DMMDDYYYY : HV4DMMDDYYYYT<HV4DMMDDYYYY>
	{
	public:
		HV4DMMDDYYYY();

	public:
		HV4D::HV4DRETURN HV4DFromHstring(hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::MMDDYYYY const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DMMDDYYYY const&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::MMDDYYYY&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DMMDDYYYY);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::MMDDYYYY const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DMMDDYYYY const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DMMDDYYYY : HV4DMMDDYYYYT<HV4DMMDDYYYY, implementation::HV4DMMDDYYYY>
	{

	};

}
