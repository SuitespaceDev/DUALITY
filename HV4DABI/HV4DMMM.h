#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DMMM.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DMMM : HV4DMMMT<HV4DMMM>
	{
	public:
		HV4DMMM();

	public:
		__declspec(dllexport) HV4D::HV4DRETURN HV4DFromHstring(hstring const&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::MMM const&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DMMM const&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DToHstring(hstring&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::MMM&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DMMM&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::MMM const&);

		__declspec(dllexport) HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DMMM const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DMMM : HV4DMMMT<HV4DMMM, implementation::HV4DMMM>
	{

	};

}
