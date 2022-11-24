#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include "../HV4DBASE/HV4DSystem.hpp"

#include "../HV4DBASE/HV4DMapSysFile.h"

#include "../HV4DBASE/CHV4DNUMERIC.h"

#include "../HV4DBASE/CHV4DSYSFILE.h"
#include "../HV4DBASE/CHV4DSYSFILE.h"

#include "winrt/HV4D.HV4DSYS.h"
#include "winrt/HV4D.HV4DSINK.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4D::HV4DDUALITY
{
	class CHV4DXmlReadBoot
	{
	public:
		CHV4DXmlReadBoot();

	public:
		HV4D::HV4DRETURN HV4DExecuteReadXml(HV4D::HV4DDUALITY::CHV4DSYSFILE const&, std::unordered_map<HV4D::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE>&);

	private:
		HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4DSYSFILE{};

		std::unordered_map<HV4D::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE> $HV4DBOOT{};

	};

}