﻿#include "pch.h"
#include "HV4DISTREAM.h"
#if __has_include("HV4DISTREAM.g.cpp")
#include "HV4DISTREAM.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DISTREAM::HV4DISTREAM()
	{

		return;

	}

	HV4DRETURN HV4DISTREAM::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
