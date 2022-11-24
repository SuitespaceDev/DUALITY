#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include <filesystem>

#include <sstream>
#include <fstream>

#include <map>
#include <vector>

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DWINRT.h"
#include "winrt/HV4D.HV4DENUM.h"
#include "winrt/HV4D.HV4DMODULE.h"

#include "../HV4DBASE/HV4DMapFileSystemModules.h"
#include "../HV4DBASE/HV4DMapConfigurationFile.h"

#include "../HV4DBASE/CHV4DINDEX.h"
#include "../HV4DBASE/CHV4DSYSFILE.h"
#include "../HV4DBASE/CHV4DNUMERIC.h"

#include "CHV4DXmlReadConfiguration.h"
#include "CHV4DXmlWriteConfiguration.h"
#include "CHV4DXmlCreateConfiguration.h"

#include "../pugixml/pugixml.hpp"

#include "HV4DMODULE.g.h"

namespace winrt::HV4DCFG::implementation
{
	struct HV4DMODULE : RTHV4DCFGT<HV4DMODULE>
	{
	public:
		HV4DMODULE();

	public:
		virtual HV4D::HV4DRETURN HV4DSetSystemFileHeader(HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC const&);

		virtual HV4D::HV4DRETURN HV4DGetSystemFileHeader(HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC&);

	private:
		HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4D{};

	public:
		virtual HV4D::HV4DRETURN HV4DLoadDocument();

		virtual HV4D::HV4DRETURN HV4DReadDocument(HV4D::HV4DCONTRACT::IHV4DWINRT);

		virtual HV4D::HV4DRETURN HV4DWriteDocument(HV4D::HV4DCONTRACT::IHV4DWINRT);

	private:
		HV4D::HV4DRETURN HV4DFillArrayView(std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring>&);

		HV4D::HV4DRETURN HV4DFillDocument(std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring> const&);

		HV4D::HV4DDUALITY::CHV4DHVID HVID{};

		HV4D::HV4DDUALITY::CHV4DMMDDYYYY CREATED_MMDDYYYY{};

		HV4D::HV4DDUALITY::CHV4DHHMMSS CREATED_HHMMSS{};

		HV4D::HV4DDUALITY::CHV4DMMDDYYYY SAVED_MMDDYYYY{};

		HV4D::HV4DDUALITY::CHV4DHHMMSS SAVED_HHMMSS{};

		HV4D::HV4DDUALITY::CHV4DMMDDYYYY OPENED_MMDDYYYY{};

		HV4D::HV4DDUALITY::CHV4DHHMMSS OPENED_HHMMSS{};

		HV4D::HV4DDUALITY::CHV4DMAXPATH NAME{};

		HV4D::HV4DDUALITY::CHV4DABS INDEX{};

		HV4D::HV4DDUALITY::CHV4DABS PROJECT{};

	public:
		virtual HV4D::HV4DRETURN HV4DGetFileSystemModule(HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM_MODULE&);

		virtual HV4D::HV4DRETURN HV4DGetFileSystemModules(winrt::array_view<HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM_MODULE>&);

		virtual HV4D::HV4DRETURN HV4DSwapFileSystemModule(HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM_MODULE const&);

		virtual HV4D::HV4DRETURN HV4DSwapFileSystemModules(winrt::array_view<HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM_MODULE const>);

	private:
		std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS> FileSystemModule{};

	public:
		virtual HV4D::HV4DRETURN HV4DUpdateConfigurationDocumentFromXml();

		virtual HV4D::HV4DRETURN HV4DUpdateConfigurationDocumentXml();

		virtual HV4D::HV4DRETURN HV4DCreateConfigurationDocument(HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC const&);

		virtual HV4D::HV4DRETURN HV4DCloneConfigurationDocument(HV4D::HV4DABS const&);

	private:
		winrt::HV4D::HV4DDUALITY::CHV4DXmlReadConfiguration Read{};

		winrt::HV4D::HV4DDUALITY::CHV4DXmlWriteConfiguration Write{};

		winrt::HV4D::HV4DDUALITY::CHV4DXmlCreateConfiguration Create{};

	public:
		virtual HV4D::HV4DRETURN HV4DIsConfiguredConfigurationDocument();

		virtual HV4D::HV4DRETURN HV4DClearConfigurationDocument();

		virtual HV4D::HV4DRETURN HV4DDebugSystemFile(HV4D::HV4DMODULE::IHV4DDEBUG);;

	private:
		HV4D::HV4DMODULE::IHV4DDEBUG $HV4DDEBUG{};

	};

}

namespace winrt::HV4DCFG::factory_implementation
{
	struct HV4DMODULE : RTHV4DCFGT<HV4DMODULE, implementation::HV4DMODULE>
	{

	};

}
