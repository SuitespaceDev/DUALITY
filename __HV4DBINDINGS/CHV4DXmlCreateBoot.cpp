#include "pch.h"

#include "CHV4DXmlCreateBoot.h"

using namespace std::filesystem;

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DSYS;
using namespace winrt::HV4D::HV4DSINK;

using namespace winrt::HV4D::HV4DDUALITY;

using namespace pugi;

namespace winrt::HV4D::HV4DDUALITY
{
	CHV4DXmlCreateBoot::CHV4DXmlCreateBoot()
	{

	}

	HV4DRETURN CHV4DXmlCreateBoot::HV4DExecuteCreateXml(CHV4DSYSFILE const& h, std::unordered_map<HV4D_FILE_SYSTEM_ID, CHV4DSYSFILE>& e)
	{
		try
		{
			$HV4DSYSFILE = h;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		HV4D_SYSTEM_FILE_DESC WinrtProject{};

		if ($HV4DSYSFILE.HV4DGetWinrtSystemFile(WinrtProject) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring path = WinrtProject.file.p + WinrtProject.file.f;

		if (exists(path.c_str()))
		{
			if (!remove(path.c_str()))
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

		}

		std::wfstream xmldoc(path.c_str());

		xmldoc << L"<?xml version=\"1.0\" encoding=\"utf - 16BE\"?>" << std::endl;

		xmldoc << L"<Project ToolsVersion=\"1.0\" xmlns=\"http://schemas.entangledlogic.com/enterprise/DUALITY/2022\">" << std::endl;

		xmldoc << L"</Project>" << std::endl;

		xmldoc.close();

		xml_document doc{};

		xml_parse_result result = doc.load_file(path.c_str(), parse_default, encoding_utf16_be);

		if (!result)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node node{};

		node = doc.document_element();

		if (!node)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node SystemFile{};

		SystemFile = node.append_child(L"SystemFile");

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_attribute FileType{};

		FileType = SystemFile.append_attribute(L"FHV4D");

		if (HV4DCreateNode(SystemFile) != HV4DRETURN::HV4D_FILE_BAD_FORMATTING)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node ItemGroup{};

		ItemGroup = node.insert_child_after(L"ItemGroup", node);

		if (!ItemGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_attribute Label{};

		Label = ItemGroup.append_attribute(L"Label");

		if (!Label)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		bool ret = Label.set_value(L"$HV4DFILES");

		if (!ret)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileIDToHstring()->begin(); citt != HV4DMapSystemFileIDToHstring()->end(); citt++)
		{
			SystemFile = node.append_child(L"SystemFile");

			if (!SystemFile)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			FileType = SystemFile.append_attribute(L"FileType");

			if (!FileType)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ret = FileType.set_value(citt->second.c_str());

			if (HV4DCreateNode(SystemFile) != HV4DRETURN::HV4D_FILE_BAD_FORMATTING)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

		}

		if (Write.HV4DExecuteWriteXml($HV4DSYSFILE, e) != HV4DRETURN::HV4D_FILE_BAD_FORMATTING)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		doc.save_file(path.c_str(), L"\u0009", 1U, encoding_utf16_be);

		doc.reset();

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlCreateBoot::HV4DCreateNode(xml_node const& n)
	{
		xml_node SystemFile{ n };

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node Property{};

		xml_attribute PropertyName{};

		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileFieldIDToHstring()->begin(); citt != HV4DMapSystemFileFieldIDToHstring()->end(); citt++)
		{
			Property = SystemFile.append_child(L"Property");

			if (!Property)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			PropertyName = Property.append_attribute(L"PropertyName");

			if (!PropertyName)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			bool ret = PropertyName.set_value(citt->second.c_str());

			if (!ret)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}