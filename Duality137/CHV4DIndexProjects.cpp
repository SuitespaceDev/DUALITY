#include "pch.h"

#include "CHV4DIndexProjects.h"

namespace HV4DDUALITY
{
	CHV4DIndexProjects::CHV4DIndexProjects()
	{

		return;

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DIndexProjects(std::vector<std::function<void(WF::IInspectable const&, MUX::RoutedEventArgs const&)>>& o)
	{
		MakeConnection();

		PopulateProjectIndex();

		BreakConnection();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	void CHV4DIndexProjects::MakeConnection()
	{
		PublicConnection = PQsetdbLogin(
			"localhost",
			"3146",
			NULL,
			NULL,
			"HV4DXDB001",
			"postgres",
			"password1");

		throw HV4D::HV4D_OPERATION_FAILED{};

	}

	void CHV4DIndexProjects::PopulateProjectIndex()
	{
		auto query = PQexec(PublicConnection,
			"SELECT * FROM table_name;");

		throw HV4D::HV4D_OPERATION_FAILED{};

	}

	void CHV4DIndexProjects::BreakConnection()
	{

		throw HV4D::HV4D_OPERATION_FAILED{};

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
