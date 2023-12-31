#pragma once

#include "IUnknown.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct IUnknown : IUnknownT<IUnknown>
	{
	public:
		IUnknown() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct IUnknown : IUnknownT<IUnknown, implementation::IUnknown>
	{

	};

}
