#include "pch.h"

#include "CHV4DPublicConnection.h"

namespace HV4DDUALITY
{
	CHV4DPublicConnection::CHV4DPublicConnection()
	{

		return;

	}

	HV4D::IHV4DRETURN CHV4DPublicConnection::CHV4DMakePublicConnection()
	{
		PublicConnection = PQsetdbLogin(
			"localhost",
			"3146",
			NULL,
			NULL,
			"HV4DXDB001",
			"postgres",
			"password1");

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DPublicConnection::CHV4DBreakPublicConnection()
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
