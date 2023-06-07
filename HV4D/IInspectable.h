#pragma once

#include "IInspectable.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct IInspectable : IInspectableT<IInspectable>
	{
	public:
		IInspectable() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct IInspectable : IInspectableT<IInspectable, implementation::IInspectable>
	{

	};

}
