#include "pch.h"

#include "CHV4DIndexProjects.h"

namespace HV4DDUALITY
{
	CHV4DIndexProjects::CHV4DIndexProjects()
	{

		return;

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DIndexProjects()
	{
		try
		{
			MakeConnection();

		}
		catch (HV4D::HV4D_OPERATION_FAILED e)
		{
			return HV4D::HV4D_COM_FAILED{};

		}

		try
		{
			PopulateProjectIndex();

		}
		catch (HV4D::HV4D_OPERATION_FAILED e)
		{


		}

		try
		{
			BreakConnection();

		}
		catch (HV4D::HV4D_OPERATION_FAILED e)
		{


		}

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

		auto status = PQstatus(PublicConnection);

		if (status != CONNECTION_OK)
		{
			PQfinish(PublicConnection);

			throw HV4D::HV4D_COM_FAILED{};

		}

	}

	void CHV4DIndexProjects::PopulateProjectIndex()
	{
		auto status = PQstatus(PublicConnection);

		if (status != CONNECTION_OK)
		{
			PQfinish(PublicConnection);

			throw HV4D::HV4D_COM_FAILED{};

		}

		auto query = PQexec(PublicConnection, "SELECT * FROM hv4d_schema_public.hv4d_table_project_index");

		auto rstatus = PQresultStatus(query);

		if (rstatus != PGRES_TUPLES_OK)
		{
			PQclear(query);

			throw HV4D::HV4D_OPERATION_FAILED{};

		}

		for (int i = 0; i < PQntuples(query); i++)
		{
			Duality137::IndexedProject index{};
			index.ValueIndexedProjectHVID(winrt::to_hstring(PQgetvalue(query, i, 0)));
			index.ValueIndexedProjectMMM(winrt::to_hstring(PQgetvalue(query, i, 1)));
			index.ValueIndexedProjectTag(winrt::to_hstring(PQgetvalue(query, i, 2)));
			index.ValueIndexedProjectCreated(winrt::to_hstring(PQgetvalue(query, i, 3)));
			index.ValueIndexedProjectUpdated(winrt::to_hstring(PQgetvalue(query, i, 4)));
			index.ValueIndexedProjectDatabase(winrt::to_hstring(PQgetvalue(query, i, 5)));
			index.ValueIndexedProjectAccessLevel(winrt::to_hstring(PQgetvalue(query, i, 6)));

			Rows.push_back(index);

		}

		PQclear(query);

	}

	void CHV4DIndexProjects::BreakConnection()
	{
		PQfinish(PublicConnection);

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DCleartProjectIndex()
	{
		Rows.clear();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DGetProjectIndexSize(uint32_t& sz)
	{
		sz = Rows.size();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN CHV4DIndexProjects::HV4DGetProjectIndex(uint32_t const& i, Duality137::IndexedProject** o)
	{
		*o = &Rows.at(i);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
