#include "pch.h"

#include "CHV4DCLASST.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DCLASST::CHV4DCLASST()
	{
		memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

		memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

		return;

	}

	CHV4DCLASST::CHV4DCLASST(hstring const& ns, hstring const& c)
	{
		if (ns.size() > 256 || c.size() > 256)
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		for (uint32_t i = 0; i < ns.size(); i++)
		{
			tagNAMESPACE[i] = ns[i];

		}

		for (uint32_t i = 0; i < c.size(); i++)
		{
			tagWINRTCLASS[i] = c[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

				memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DCLASST::CHV4DCLASST(CLASST const& e)
	{
		for (uint32_t i = 0; i < e.ns.size(); i++)
		{
			tagNAMESPACE[i] = e.ns[i];

		}

		for (uint32_t i = 0; i < e.c.size(); i++)
		{
			tagWINRTCLASS[i] = e.c[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

				memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DCLASST::CHV4DCLASST(CHV4DCLASST const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagNAMESPACE[i] = e.tagNAMESPACE[i];

			tagWINRTCLASS[i] = e.tagWINRTCLASS[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

				memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DCLASST::HV4DIsValidCLASST() const
	{
		if ((tagNAMESPACE[0] == '\0') || (tagWINRTCLASS[0] == '\0'))
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagNAMESPACE)
		{
			if (itt == '\0') break;

			if (itt != '.')
			{
				citt = std::find(HV4DAlphaNumericW()->begin(), HV4DAlphaNumericW()->end(), itt);

				if (citt == HV4DAlphaNumericW()->end())
				{
					throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

				}

			}

		}

		for (wchar_t itt : tagWINRTCLASS)
		{
			if (itt == '\0') break;

			if (itt != '.')
			{
				citt = std::find(HV4DAlphaNumericW()->begin(), HV4DAlphaNumericW()->end(), itt);

				if (citt == HV4DAlphaNumericW()->end())
				{
					throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

				}

			}

		}

		return;

	}

	void CHV4DCLASST::operator = (CLASST const& e)
	{
		for (uint32_t i = 0; i < e.ns.size(); i++)
		{
			tagNAMESPACE[i] = e.ns[i];

		}

		for (uint32_t i = 0; i < e.c.size(); i++)
		{
			tagWINRTCLASS[i] = e.c[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

				memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DCLASST::operator = (CHV4DCLASST const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagNAMESPACE[i] = e.tagNAMESPACE[i];

			tagWINRTCLASS[i] = e.tagWINRTCLASS[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

				memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	bool CHV4DCLASST::operator == (CLASST const& e) const
	{
		CHV4DCLASST classT{ e };

		try
		{
			classT.HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == classT;

	}

	bool CHV4DCLASST::operator == (CHV4DCLASST const& e) const
	{
		CHV4DCLASST classT{ e };

		try
		{
			classT.HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		int ret = memcmp(tagNAMESPACE, classT.tagNAMESPACE, sizeof(tagNAMESPACE));

		if (ret != 0) return false;

		ret = memcmp(tagWINRTCLASS, classT.tagWINRTCLASS, sizeof(tagWINRTCLASS));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DCLASST::operator != (CLASST const& e) const
	{
		CHV4DCLASST classT{ e };

		try
		{
			classT.HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == classT);

	}

	bool CHV4DCLASST::operator != (CHV4DCLASST const& e) const
	{
		CHV4DCLASST classT{ e };

		try
		{
			classT.HV4DIsValidCLASST();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == classT);

	}

	HV4DRETURN CHV4DCLASST::HV4DGetHstringCLASST(hstring& ns, hstring& c) const
	{
		ns = hstring{ tagNAMESPACE };

		c = hstring{ tagWINRTCLASS };

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DCLASST::HV4DGetArrayCLASST(wchar_t ns[256], wchar_t c[256]) const
	{
		for (uint16_t i = 0; i < 256; i++)
		{
			ns[i] = tagNAMESPACE[i];

			c[i] = tagWINRTCLASS[i];

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DCLASST::HV4DGetWinrtCLASST(CLASST& o) const
	{
		o.ns = hstring{ tagNAMESPACE };

		o.c = hstring{ tagWINRTCLASS };

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}