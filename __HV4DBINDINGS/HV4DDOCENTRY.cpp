#include "pch.h"
#include "HV4DDOCENTRY.h"
#if __has_include("HV4DDOCENTRY.g.cpp")
#include "HV4DDOCENTRY.g.cpp"
#endif

using namespace std::filesystem;

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DENUM;
using namespace winrt::HV4D::HV4DFIELD;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DSYS;
using namespace winrt::HV4D::HV4DSINK;

using namespace winrt::HV4D::HV4DDUALITY;

using namespace pugi;

namespace winrt::HV4DCFG::implementation
{
	HV4DDOCENTRY::HV4DDOCENTRY()
	{
		$HV4D = CHV4DSYSFILE{};

		HVID = CHV4DHVID{};

		CREATED_MMDDYYYY = CHV4DMMDDYYYY{};

		CREATED_HHMMSS = CHV4DHHMMSS{};

		SAVED_MMDDYYYY = CHV4DMMDDYYYY{};

		SAVED_HHMMSS = CHV4DHHMMSS{};

		OPENED_MMDDYYYY = CHV4DMMDDYYYY{};

		OPENED_HHMMSS = CHV4DHHMMSS{};

		NAME = CHV4DMAXPATH{};

		INDEX = CHV4DABS{};

		PROJECT = CHV4DABS{};

		FileSystemModule.clear();

		FileSystemModule = HV4DInitMapFileSystemModules();

		return;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DSetSystemFileConfigurationDocument(HV4D_SYSTEM_FILE_DESC const& e)
	{
		$HV4D = CHV4DSYSFILE{};

		try
		{
			$HV4D = e;

		}
		catch (HV4DRETURN)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DGetSystemFileConfigurationDocument(HV4D_SYSTEM_FILE_DESC& o)
	{
		try
		{
			$HV4D.HV4DIsValidSystemFile();

		}
		catch(HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return thrown;

			}

		}

		HV4D_SYSTEM_FILE_DESC WinrtSystemFile{};

		if ($HV4D.HV4DGetWinrtSystemFile(WinrtSystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		o = WinrtSystemFile;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DLoadConfigurationDocument()
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (is_configured_configuration_document == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_ALREADY_CONFIGURED;

		}

		if (HV4DUpdateConfigurationDocumentFromXml() != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (HV4DIsConfiguredConfigurationDocument() == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DReadConfigurationDocument(array_view<HV4D_ENUMERATED_DUALITY_ENTRY>& o)
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (is_configured_configuration_document == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> Values{};

		if (HV4DFillArrayView(Values) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (o.size() != Values.size())
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		array_view<HV4D_ENUMERATED_DUALITY_ENTRY>::iterator itt{};

		for (itt = o.begin(); itt != o.end(); itt++)
		{
			try
			{
				*itt = HV4D_ENUMERATED_DUALITY_ENTRY{ itt->enumid, Values.at(itt->enumid) };

			}
			catch (std::out_of_range)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DWriteConfigurationDocument(array_view<HV4D_ENUMERATED_DUALITY_ENTRY const> e)
	{
		if (HV4DIsConfiguredConfigurationDocument() == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> Values{};

		for (HV4D_ENUMERATED_DUALITY_ENTRY itt : e)
		{
			Values.insert(std::pair(itt.enumid, itt.value));

		}

		if (HV4DFillDocument(Values) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (HV4DIsConfiguredConfigurationDocument() == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DFillArrayView(std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>& o)
	{
		hstring Value{};

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> Values{};

		Values = HV4DInitMapConfigurationField();

		if (HVID.HV4DGetHstringGUID(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_HVID) = Value;

		if (CREATED_MMDDYYYY.HV4DGetHstringMMDDYYYY(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_CREATED_MMDDYYYY) = Value;

		if (CREATED_HHMMSS.HV4DGetHstringHHMMSS(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_CREATED_HHMMSS) = Value;

		if (SAVED_MMDDYYYY.HV4DGetHstringMMDDYYYY(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_SAVED_MMDDYYYY) = Value;

		if (SAVED_HHMMSS.HV4DGetHstringHHMMSS(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_SAVED_HHMMSS) = Value;

		if (OPENED_MMDDYYYY.HV4DGetHstringMMDDYYYY(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_OPENED_MMDDYYYY) = Value;

		if (OPENED_HHMMSS.HV4DGetHstringHHMMSS(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_OPENED_HHMMSS) = Value;

		if (NAME.HV4DGetHstringMAXPATH(Value) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_NAME) = Value;

		hstring Path{}, File{};

		if (INDEX.HV4DGetHstringABS(Path, File) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_INDEX_PATH) = Value;

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_INDEX_FILE) = Value;

		if (PROJECT.HV4DGetHstringABS(Path, File) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_PATH) = Value;

		Values.at(HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_FILE) = Value;

		if (HV4DIsOntoMappedConfigurationDocument(Values) != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		o = Values;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DFillDocument(std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> const& e)
	{
		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> Values{ e };

		if (HV4DIsOntoMappedConfigurationDocument(Values) != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = Values.begin(); citt != Values.end(); citt++)
		{
			hstring Path{}, File{};

			switch (citt->first) {

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_HVID:

				try
				{
					HVID = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_CREATED_MMDDYYYY:

				try
				{
					CREATED_MMDDYYYY = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_CREATED_HHMMSS:

				try
				{
					CREATED_HHMMSS = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_SAVED_MMDDYYYY:

				try
				{
					SAVED_MMDDYYYY = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_SAVED_HHMMSS:

				try
				{
					SAVED_HHMMSS = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_OPENED_MMDDYYYY:

				try
				{
					OPENED_MMDDYYYY = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_OPENED_HHMMSS:

				try
				{
					OPENED_HHMMSS = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_NAME:

				try
				{
					NAME = citt->second;

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_INDEX_PATH:
				
				if (INDEX.HV4DGetHstringABS(Path, File) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				try
				{
					INDEX = CHV4DABS{ citt->second, File };

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_INDEX_FILE:

				if (INDEX.HV4DGetHstringABS(Path, File) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				try
				{
					INDEX = CHV4DABS{ Path, citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_PATH:

				if (PROJECT.HV4DGetHstringABS(Path, File) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				try
				{
					PROJECT = CHV4DABS{ citt->second, File };

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_FILE:

				if (PROJECT.HV4DGetHstringABS(Path, File) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				try
				{
					PROJECT = CHV4DABS{ Path, citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearConfigurationDocument();

					return HV4DRETURN::HV4D_INVALID_ARGUMENT;

				}

				break;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DGetFileSystemModule(HV4D_ENUMERATED_FILE_SYSTEM_MODULE& o)
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (is_configured_configuration_document == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		CHV4DRTCLASS RTClass{};

		try
		{
			RTClass = FileSystemModule.at(o.enumid);

		}
		catch (std::out_of_range)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}
		catch (HV4DRETURN)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}


		HV4D_RTCLASS_DESC WinrtRTClass{};

		if (RTClass.HV4DGetWinrtRTClass(WinrtRTClass) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		o = HV4D_ENUMERATED_FILE_SYSTEM_MODULE{ o.enumid, WinrtRTClass };
		
		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DGetFileSystemModules(winrt::array_view<HV4D_ENUMERATED_FILE_SYSTEM_MODULE>& o)
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (is_configured_configuration_document == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		if (o.size() != FileSystemModule.size())
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		winrt::array_view<HV4D_ENUMERATED_FILE_SYSTEM_MODULE>::iterator itt;

		for (itt = o.begin(); itt != o.end(); itt++)
		{
			HV4D_RTCLASS_DESC WinrtRTClass{};

			if (FileSystemModule.at(itt->enumid).HV4DGetWinrtRTClass(WinrtRTClass) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

			itt->rtclass = WinrtRTClass;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DSwapFileSystemModule(HV4D_ENUMERATED_FILE_SYSTEM_MODULE const& e)
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		CHV4DRTCLASS Bak{};
		
		try
		{
			Bak = FileSystemModule.at(e.enumid);

		}
		catch (std::out_of_range)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		try
		{
			FileSystemModule.at(e.enumid) = e.rtclass;

		}
		catch (HV4DRETURN)
		{
			FileSystemModule.at(e.enumid) = Bak;

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}			

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DSwapFileSystemModules(array_view<HV4D_ENUMERATED_FILE_SYSTEM_MODULE const> e)
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (is_configured_configuration_document == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		if (e.size() != FileSystemModule.size())
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		winrt::array_view<HV4D_ENUMERATED_FILE_SYSTEM_MODULE>::const_iterator citt;

		for (citt = e.begin(); citt != e.end(); citt++)
		{
			try
			{
				FileSystemModule.at(citt->enumid) = citt->rtclass;

			}
			catch (HV4DRETURN)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}
	
	HV4DRETURN HV4DDOCENTRY::HV4DUpdateConfigurationDocumentFromXml()
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (Read.HV4DClearDocumentStream() != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (Read.HV4DExecuteReadDocumentFromXml($HV4D) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> Values{};

		if (Read.HV4DReadFromDocumentStream(Values) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (HV4DFillDocument(Values) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Read.HV4DReadFromModuleStream(FileSystemModule) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DUpdateConfigurationDocumentXml()
	{
		if (HV4DIsConfiguredConfigurationDocument() == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (HV4DIsConfiguredConfigurationDocument() == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring> Values{};

		if (HV4DFillArrayView(Values) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Write.HV4DWriteToDocumentStream(Values) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Write.HV4DWriteToModuleStream(FileSystemModule) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Write.HV4DExecuteWriteDocumentToXml($HV4D) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DCreateConfigurationDocument(HV4D_SYSTEM_FILE_DESC const& e)
	{
		HV4DClearConfigurationDocument();

		if (HV4DSetSystemFileConfigurationDocument(e) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if (Create.HV4DExecuteCreateXml(e) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DCloneConfigurationDocument(HV4DABS const& e)
	{
		HV4DRETURN is_configured_configuration_document = HV4DIsConfiguredConfigurationDocument();

		if (is_configured_configuration_document == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		CHV4DSYSFILE Bak{};

		Bak = $HV4D;

		HV4D_SYSTEM_FILE_DESC WinrtSfystemFile{};

		if ($HV4D.HV4DGetWinrtSystemFile(WinrtSfystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		WinrtSfystemFile.file.p = e.p;

		WinrtSfystemFile.file.f = e.f;

		try
		{
			$HV4D = WinrtSfystemFile;

		}
		catch (HV4DRETURN)
		{
			$HV4D = Bak;

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		try
		{
			$HV4D.HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				$HV4D = Bak;

				return thrown;

			}

		}

		if (Create.HV4DExecuteCreateXml($HV4D) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (HV4DUpdateConfigurationDocumentXml() != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearConfigurationDocument();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DIsConfiguredConfigurationDocument()
	{
		HV4DRETURN is_valid_system_file = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			$HV4D.HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				is_valid_system_file = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				is_valid_system_file = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_hvid = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			HVID.HV4DIsValidGUID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
			{
				is_valid_hvid = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_hvid = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}


		}

		HV4DRETURN is_valid_created_mmddyyyy = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			CREATED_MMDDYYYY.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
			{
				is_valid_created_mmddyyyy = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_created_mmddyyyy = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_created_hhmmss = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			CREATED_HHMMSS.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
			{
				is_valid_created_hhmmss = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_created_hhmmss = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_saved_mmddyyyy = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			SAVED_MMDDYYYY.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_saved_mmddyyyy = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else
			{
				is_valid_saved_mmddyyyy = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_saved_hhmmss = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			SAVED_HHMMSS.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_saved_hhmmss = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else
			{
				is_valid_saved_hhmmss = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_opened_mmddyyyy = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			OPENED_MMDDYYYY.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
			{
				is_valid_opened_mmddyyyy = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_opened_mmddyyyy = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_opened_hhmmss = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			OPENED_HHMMSS.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearConfigurationDocument();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
			{
				is_valid_opened_hhmmss = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}

			if (thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_opened_hhmmss = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_name = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			NAME.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_name = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else
			{
				is_valid_name = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_index = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			INDEX.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_index = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else
			{
				is_valid_index = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_project = HV4DRETURN::HV4D_UNKNOWN;

		try
		{
			PROJECT.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				is_valid_project = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else
			{
				is_valid_project = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		HV4DRETURN is_valid_modules = HV4DRETURN::HV4D_UNKNOWN;

		if (HV4DIsOntoMappedFileSystemModule(FileSystemModule) != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, CHV4DRTCLASS>::iterator itt{};

		for (itt = FileSystemModule.begin(); itt != FileSystemModule.end(); itt++)
		{
			try
			{
				itt->second.HV4DIsValidRTCLASS();

			}
			catch (HV4DRETURN thrown)
			{
				if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
				{
					return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

				}

				if (is_valid_modules == HV4DRETURN::HV4D_UNKNOWN)
				{
					is_valid_modules = thrown;

				}

				if (is_valid_modules == HV4DRETURN::HV4D_NOT_CONFIGURED &&
					thrown == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
				{
					return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

				}

				if (is_valid_modules == HV4DRETURN::HV4D_PROPERLY_CONFIGURED &&
					thrown == HV4DRETURN::HV4D_NOT_CONFIGURED)
				{
					return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

				}

			}
			
		}

		if (is_valid_system_file == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_created_mmddyyyy == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_created_hhmmss == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_saved_mmddyyyy == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_saved_hhmmss == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_opened_mmddyyyy == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_opened_hhmmss == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_name == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_index == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_project == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			is_valid_modules == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		if (is_valid_system_file == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_created_mmddyyyy == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_created_hhmmss == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_saved_mmddyyyy == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_saved_hhmmss == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_opened_mmddyyyy == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_opened_hhmmss == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_name == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_index == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_project == HV4DRETURN::HV4D_ALREADY_CONFIGURED &&
			is_valid_modules == HV4DRETURN::HV4D_ALREADY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_ALREADY_CONFIGURED;

		}

		HV4DClearConfigurationDocument();

		return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DClearConfigurationDocument()
	{
		$HV4D = CHV4DSYSFILE{};

		HVID = CHV4DHVID{};

		CREATED_MMDDYYYY = CHV4DMMDDYYYY{};

		CREATED_HHMMSS = CHV4DHHMMSS{};

		SAVED_MMDDYYYY = CHV4DMMDDYYYY{};

		SAVED_HHMMSS = CHV4DHHMMSS{};

		OPENED_MMDDYYYY = CHV4DMMDDYYYY{};

		OPENED_HHMMSS = CHV4DHHMMSS{};

		NAME = CHV4DMAXPATH{};

		INDEX = CHV4DABS{};

		PROJECT = CHV4DABS{};

		FileSystemModule.clear();

		FileSystemModule = HV4DInitMapFileSystemModules();

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DDOCENTRY::HV4DSetDebugger(IHV4DDEBUG e)
	{
		if (!e)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		$HV4DDEBUG = e;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
