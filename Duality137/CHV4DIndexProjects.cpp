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
		try
		{
			MakeConnection();

		}
		catch (HV4D::HV4D_OPERATION_FAILED e)
		{


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

		if(!PublicConnection) throw HV4D::HV4D_OPERATION_FAILED{};

	}

	void CHV4DIndexProjects::PopulateProjectIndex()
	{
		auto query = PQexec(PublicConnection,
			"SELECT * FROM hv4d_table_indexed_project;");

		for (int i = 0; i < PQntuples(query); i++)
		{
			std::wstring_convert<std::codecvt_utf8<wchar_t>> UTF8_Converter{};

			Duality137::ProjectIndex index{};
			index.ValueProjectIndexHVID(UTF8_Converter.from_bytes(PQgetvalue(query, i, 0)));
			index.ValueProjectIndexMMM(UTF8_Converter.from_bytes(PQgetvalue(query, i, 1)));
			index.ValueProjectIndexTag(UTF8_Converter.from_bytes(PQgetvalue(query, i, 2)));
			index.ValueProjectIndexCreated(UTF8_Converter.from_bytes(PQgetvalue(query, i, 3)));
			index.ValueProjectIndexUpdated(UTF8_Converter.from_bytes(PQgetvalue(query, i, 4)));
			index.ValueProjectIndexDatabase(UTF8_Converter.from_bytes(PQgetvalue(query, i, 5)));
			index.ValueProjectIndexAccessLevel(UTF8_Converter.from_bytes(PQgetvalue(query, i, 6)));

			Rows.push_back(index);

		}

	}

	void CHV4DIndexProjects::BreakConnection()
	{


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
