#pragma once

#include "winrt/HV4D.h"

#include "HV4DENCRYPT.g.h"

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DENCRYPT : HV4DENCRYPTT<HV4DENCRYPT>
	{
	public:
		HV4DENCRYPT();

	public:
		HV4D::IHV4DRETURN HV4DEncryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&);

		HV4D::IHV4DRETURN HV4DDecryptVolumeName(winrt::guid const&, hstring const&, winrt::guid&);

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DENCRYPT : HV4DENCRYPTT<HV4DENCRYPT, implementation::HV4DENCRYPT>
	{

	};

}
