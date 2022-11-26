#include "pch.h"

#include "CHV4DENCRYPT.h"

namespace winrt::HV4DSYSCALL
{
	HV4D::IHV4DRETURN HV4DEncryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&)
	{




		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDecryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&)
	{



		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}