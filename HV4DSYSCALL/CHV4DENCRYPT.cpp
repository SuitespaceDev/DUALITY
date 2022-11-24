#include "pch.h"

#include "CHV4DENCRYPT.h"

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
	HV4DRETURN HV4DEncryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&)
	{




		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDecryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&)
	{



		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}