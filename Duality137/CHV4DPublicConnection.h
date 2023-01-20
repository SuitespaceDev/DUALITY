#pragma once

#include <libpq-fe.h>

#include "winrt/HV4D.h"
#include "winrt/HV4DX.h"

namespace HV4D = winrt::HV4D;
namespace HV4DX = winrt::HV4DX;

namespace HV4DDUALITY
{
	class CHV4DPublicConnection
	{
	public:
		CHV4DPublicConnection();

	public:
		HV4D::IHV4DRETURN CHV4DMakePublicConnection();

		HV4D::IHV4DRETURN CHV4DBreakPublicConnection();

	private:
		PGconn* PublicConnection{};

	};

}