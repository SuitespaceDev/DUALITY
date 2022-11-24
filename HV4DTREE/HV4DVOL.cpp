#include "pch.h"

#include "HV4DVOL.h"

using namespace std;

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4D::HV4DDRIVEIO
{


	HV4DRETURN HV4DVOL::HV4DMountVolume(const HV4DHVID& hvid)
	{


		return HV4DRETURN::HV4D_TRUE;

	}

}