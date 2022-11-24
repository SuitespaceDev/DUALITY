#include "pch.h"

#include "CHV4DRTCLASS.h"

using namespace winrt;

using namespace winrt::HV4D;

using namespace pugi;

namespace winrt::HV4DABI
{
	CHV4DRTCLASS::CHV4DRTCLASS()
	{
		tagHVID = CHV4DHVID{};

		tagMMM = CHV4DMMM{};

		tagNAME = CHV4DMAXPATH{};

		tagDLL = CHV4DABS{};

		tagCLASST = CHV4DCLASST{};

		return;

	}

	CHV4DRTCLASS::CHV4DRTCLASS(
		HVID    const& hvid,
		MMM     const& mmm,
		MAXPATH const& mp,
		ABS     const& dll,
		CLASST	const& classt)
	{
		tagHVID = hvid;

		tagMMM = mmm;

		tagNAME = mp;

		tagDLL = dll;

		tagCLASST = classt;

		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DRTCLASS::CHV4DRTCLASS(
		CHV4DHVID    const& hvid,
		CHV4DMMM     const& mmm,
		CHV4DMAXPATH const& mp,
		CHV4DABS     const& dll,
		CHV4DCLASST	 const& classt)
	{
		tagHVID = hvid;

		tagMMM = mmm;

		tagNAME = mp;

		tagDLL = dll;

		tagCLASST = classt;

		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DRTCLASS::CHV4DRTCLASS(RTCLASS const& e)
	{
		tagHVID = e.hvid;

		tagMMM = e.mmm;

		tagNAME = e.name;

		tagDLL = e.dll;

		tagCLASST = e.classt;

		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DRTCLASS::HV4DIsValidRTCLASS()
	{
		if (tagHVID == CHV4DHVID{} &&
			tagMMM == CHV4DMMM{} &&
			tagNAME == CHV4DMAXPATH{} &&
			tagDLL == CHV4DABS{} &&
			tagCLASST == CHV4DCLASST{})
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		try
		{
			tagHVID.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		try
		{
			tagMMM.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		try
		{
			tagNAME.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		try
		{
			tagDLL.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		try
		{
			tagCLASST.HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	void CHV4DRTCLASS::HV4DClearRTClass()
	{
		tagHVID = CHV4DHVID{};

		tagMMM = CHV4DMMM{};

		tagNAME = CHV4DMAXPATH{};

		tagDLL = CHV4DABS{};

		tagCLASST = CHV4DCLASST{};

		return;

	}

	void CHV4DRTCLASS::operator = (RTCLASS const& e)
	{
		tagHVID = e.hvid;

		tagMMM = e.mmm;

		tagNAME = e.name;

		tagDLL = e.dll;

		tagCLASST = e.classt;

		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	void CHV4DRTCLASS::operator = (CHV4DRTCLASS const& e)
	{
		tagHVID = e.tagHVID;

		tagMMM = e.tagMMM;

		tagNAME = e.tagNAME;

		tagDLL = e.tagDLL;

		tagCLASST = e.tagCLASST;

		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	bool CHV4DRTCLASS::operator == (RTCLASS const& e)
	{
		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DRTCLASS rtclass{ e };

		try
		{
			rtclass.HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == rtclass;

	}

	bool CHV4DRTCLASS::operator == (CHV4DRTCLASS const& e)
	{
		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DRTCLASS rtclass{ e };

		try
		{
			rtclass.HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		bool ret = true;

		if (tagHVID != rtclass.tagHVID) ret = false;

		if (tagMMM != rtclass.tagMMM) ret = false;

		if (tagNAME != rtclass.tagNAME) ret = false;

		if (tagDLL != rtclass.tagDLL) ret = false;

		if (tagCLASST != rtclass.tagCLASST) ret = false;

		return ret;

	}

	bool CHV4DRTCLASS::operator != (RTCLASS const& e)
	{
		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DRTCLASS rtclass{ e };

		try
		{
			rtclass.HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == rtclass);

	}

	bool CHV4DRTCLASS::operator != (CHV4DRTCLASS const& e)
	{
		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DRTCLASS rtclass{ e };

		try
		{
			rtclass.HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == rtclass);

	}

	HV4DRETURN CHV4DRTCLASS::HV4DGetWinrtRTClass(RTCLASS& o)
	{
		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		if (tagHVID.HV4DGetWinrtHVID(o.hvid) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = RTCLASS{};

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (tagMMM.HV4DGetWinrtMMM(o.mmm) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = RTCLASS{};

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (tagNAME.HV4DGetWinrtMAXPATH(o.name) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = RTCLASS{};

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (tagDLL.HV4DGetWinrtABS(o.dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = RTCLASS{};

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (tagCLASST.HV4DGetWinrtCLASST(o.classt) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = RTCLASS{};

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadNodeRTClass(xml_node const& e)
	{
		xml_node HV4DRTCLASS{ e };

		if (!HV4DRTCLASS)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		HV4DIsValidRTCLASS();

		xml_attribute ClassType{};

		hstring ValueClassType{ L"" };

		for (HV4DRTCLASS = HV4DRTCLASS.child(L"HV4DRTCLASS"); HV4DRTCLASS; HV4DRTCLASS.next_sibling(L"HV4DRTCLASS"))
		{
			ClassType = HV4DRTCLASS.attribute(L"ClassType");

			if (!ClassType)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValueClassType = ClassType.value();

			HV4D_RTCLASS_FIELD_ID index{};

			try
			{
				index = HV4DMapRTClassFieldHstringToID()->at(ValueClassType);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			switch (index) {

			case HV4D_RTCLASS_FIELD_ID::HV4D_HVID:

				if (HV4DReadHVID(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_MMM:

				if (HV4DReadMMM(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_NAME:

				if (HV4DReadNAME(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_PATH:

				if (HV4DReadDLLPath(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_DLL:

				if (HV4DReadDLL(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_NAMESPACE:

				if (HV4DReadRTCNS(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_CLASST:

				if (HV4DReadRTC(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			}

		}

		try
		{
			HV4DIsValidRTCLASS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearRTClass();

				return HV4DRETURN::HV4D_OPERATION_FAILED;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteNodeRTClass(xml_node const& e)
	{
		xml_node HV4DRTCLASS{ e };

		if (!HV4DRTCLASS)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		xml_attribute ClassType{};

		hstring ValueClassType{ L"" };

		for (HV4DRTCLASS = HV4DRTCLASS.child(L"HV4DRTCLASS"); HV4DRTCLASS; HV4DRTCLASS.next_sibling(L"HV4DRTCLASS"))
		{
			ClassType = HV4DRTCLASS.attribute(L"ClassType");

			if (!ClassType)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValueClassType = ClassType.value();

			HV4D_RTCLASS_FIELD_ID index{};

			try
			{
				index = HV4DMapRTClassFieldHstringToID()->at(ValueClassType);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			switch (index) {

			case HV4D_RTCLASS_FIELD_ID::HV4D_HVID:

				if (HV4DWriteHVID(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_MMM:

				if (HV4DWriteMMM(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_NAME:

				if (HV4DWriteNAME(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_PATH:

				if (HV4DWriteDLLPath(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_DLL:

				if (HV4DWriteDLL(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_NAMESPACE:

				if (HV4DWriteRTCNS(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_RTCLASS_FIELD_ID::HV4D_CLASST:

				if (HV4DWriteRTC(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadHVID(xml_node const& e)
	{
		hstring hvid{};

		if (tagHVID.HV4DGetHstringHVID(hvid) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(hvid.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteHVID(xml_node const& e)
	{
		hstring hvid{};

		if (tagHVID.HV4DGetHstringHVID(hvid) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(hvid.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadMMM(xml_node const& e)
	{
		hstring mmm{};

		if (tagMMM.HV4DGetHstringMMM(mmm) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(mmm.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteMMM(xml_node const& e)
	{
		hstring mmm{};

		if (tagMMM.HV4DGetHstringMMM(mmm) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(mmm.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadNAME(xml_node const& e)
	{
		hstring name{};

		if (tagNAME.HV4DGetHstringMAXPATH(name) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(name.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteNAME(xml_node const& e)
	{
		hstring name{};

		if (tagNAME.HV4DGetHstringMAXPATH(name) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(name.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadDLLPath(xml_node const& e)
	{
		hstring path{}, dll{};

		if (tagDLL.HV4DGetHstringABS(path, dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(path.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteDLLPath(xml_node const& e)
	{
		hstring path{}, dll{};

		if (tagDLL.HV4DGetHstringABS(path, dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(path.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadDLL(xml_node const& e)
	{
		hstring path{}, dll{};

		if (tagDLL.HV4DGetHstringABS(path, dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(dll.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteDLL(xml_node const& e)
	{
		hstring path{}, dll{};

		if (tagDLL.HV4DGetHstringABS(path, dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(dll.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteRTCNS(xml_node const& e)
	{
		hstring ns{}, rtc{};

		if (tagDLL.HV4DGetHstringABS(ns, rtc) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(ns.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadRTCNS(xml_node const& e)
	{
		hstring ns{}, rtc{};

		if (tagCLASST.HV4DGetHstringCLASST(ns, rtc) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(ns.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DReadRTC(xml_node const& e)
	{
		hstring ns{}, rtc{};

		if (tagCLASST.HV4DGetHstringCLASST(ns, rtc) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(rtc.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DRTCLASS::HV4DWriteRTC(xml_node const& e)
	{
		hstring ns{}, rtc{};

		if (tagCLASST.HV4DGetHstringCLASST(ns, rtc) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node node{ e };

		if (!node)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (node.set_value(rtc.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}