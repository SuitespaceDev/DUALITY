#include "pch.h"

#include "CHV4DIndexProjects.h"

namespace HV4DDUALITY
{
	CHV4DIndexProjects::CHV4DIndexProjects()
	{

		return;

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DConnect()
	{
		PublicConnection.CHV4DMakePublicConnection();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DDisconnect()
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DIndexProjects()
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DGetProjectIndex(std::vector<HV4DX::TableProjectIndex>& o)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DCleartProjectIndex()
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DGetProjectIndexSize(uint32_t& sz)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
