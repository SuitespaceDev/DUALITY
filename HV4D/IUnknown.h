#pragma once

#include "Unknown.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;

namespace winrt::HV4D::implementation
{
	struct Unknown : UnknownT<Unknown>
	{
	public:
		Unknown() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct Unknown : UnknownT<Unknown, implementation::Unknown>
	{

	};

}
