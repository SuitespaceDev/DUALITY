#include "pch.h"

#include "CHV4DXmlWriteBoot.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DSYS;
using namespace winrt::HV4D::HV4DSINK;

using namespace winrt::HV4D::HV4DDUALITY;

using namespace pugi;

namespace winrt::HV4D::HV4DDUALITY
{
	CHV4DXmlWriteBoot::CHV4DXmlWriteBoot()
	{

	
		return;

	}

	HV4DRETURN CHV4DXmlWriteBoot::HV4DExecuteWriteXml(CHV4DSYSFILE const& $, std::unordered_map<HV4D_FILE_SYSTEM_ID, CHV4DSYSFILE>& e)
	{
		try
		{
			$HV4DSYSFILE = $;

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

		hstring path = hstring{ WinrtProject.file.p } + WinrtProject.file.f;

		xml_document doc{};

		xml_parse_result result = doc.load_file(path.c_str(), parse_default, encoding_utf16_be);

		if (!result)
		{
			return HV4DRETURN::HV4D_FILE_DOESNT_EXIST;

		}

		xml_node node{};

		node = doc.document_element();

		if (!node)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node ItemGroup{};

		xml_node SystemFile{};

		xml_attribute Label{};

		hstring ValueLabel{};

		for (ItemGroup = node.child(L"ItemGroup"); ItemGroup; ItemGroup.next_sibling(L"ItemGroup"))
		{
			Label = ItemGroup.attribute(L"Label");

			if (!Label)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValueLabel = Label.value();

			if (ValueLabel == L"$HV4DFILES")
			{
				SystemFile = ItemGroup;

			}

		}

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_attribute FileType{};

		hstring ValueFileType{};

		for (SystemFile = SystemFile.child(L"SystemFile"); SystemFile; SystemFile.next_sibling(L"SystemFile"))
		{
			FileType = SystemFile.attribute(L"Label");

			if (!FileType)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValueFileType = FileType.value();

			HV4D_FILE_SYSTEM_ID id{};

			try
			{
				id = HV4DMapSystemFileHstringToID()->at(ValueFileType);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			if (e.at(id).HV4DWriteNodeSystemFile(SystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
			{
				return HV4DRETURN::HV4D_OPERATION_FAILED;

			}

		}

		doc.save_file(path.c_str(), L"\u0009", 1U, encoding_utf16_be);

		doc.reset();

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}