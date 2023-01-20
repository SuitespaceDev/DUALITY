#pragma once

#include <vector>

#include "winrt/HV4D.h"
#include "winrt/HV4DX.h"

#include "CHV4DPublicConnection.h"

namespace HV4D = winrt::HV4D;
namespace HV4DX = winrt::HV4DX;

namespace HV4DDUALITY
{
	class CHV4DIndexProjects
	{
	public:
		CHV4DIndexProjects();

	public:
		HV4D::IHV4DRETURN HV4DConnect();

		HV4D::IHV4DRETURN HV4DDisconnect();

	private:
		CHV4DPublicConnection PublicConnection{};

	public:
		HV4D::IHV4DRETURN HV4DIndexProjects();

		HV4D::IHV4DRETURN HV4DGetProjectIndex(std::vector<HV4DX::TableProjectIndex>&);

		HV4D::IHV4DRETURN HV4DCleartProjectIndex();

		HV4D::IHV4DRETURN HV4DGetProjectIndexSize(uint32_t&);

	private:
		std::vector<HV4DX::TableProjectIndex> ProjectIndex{};

	};

}