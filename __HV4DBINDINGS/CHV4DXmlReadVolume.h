
#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include <filesystem>

#include <sstream>
#include <fstream>

#include "../HV4DBASE/HV4DString.h"

#include "../HV4DBASE/HV4DMapSystemFile.h"
#include "../HV4DBASE/HV4DMapVolumeFile.h"
#include "../HV4DBASE/HV4DInitMapVolumeFile.h"

#include "../HV4DBASE/CHV4DSYSFILE.h"

#include "winrt/HV4D.HV4DSYS.h"
#include "winrt/HV4D.HV4DSINK.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4D::HV4DDUALITY
{
	class CHV4DXmlReadVolume
	{
	public:
		CHV4DXmlReadVolume();

	public:
		HV4D::HV4DRETURN HV4DExecuteReadVolumeFromXml(HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

		HV4D::HV4DRETURN HV4DReadFromVolumeStream(std::unordered_map<HV4D::HV4DFIELD::HV4D_VOLUME_FILE_FIELD_ID, hstring>&);

		HV4D::HV4DRETURN HV4DClearVolumeStream();

	private:
		HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4D{};

	private:
		HV4D::HV4DRETURN HV4DReadVolumeFromXml(pugi::xml_node const&);

		std::unordered_map<HV4D::HV4DFIELD::HV4D_VOLUME_FILE_FIELD_ID, hstring> DocumentStream{};

	};

}