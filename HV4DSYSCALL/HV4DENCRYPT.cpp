#include "pch.h"
#include "HV4DENCRYPT.h"
#if __has_include("HV4DENCRYPT.g.cpp")
#include "HV4DENCRYPT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DENCRYPT::HV4DENCRYPT()
	{


		return;

	}

	HV4DRETURN HV4DENCRYPT::HV4DEncryptVolumeName(winrt::guid const& e, hstring const& k, winrt::guid& o)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DENCRYPT::HV4DDecryptVolumeName(winrt::guid const& e, hstring const& k, winrt::guid& o)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
