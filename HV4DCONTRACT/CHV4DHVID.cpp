#include "pch.h"

#include "CHV4DHVID.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DHVID::CHV4DHVID()
	{
		memset(tagHVID, '\0', sizeof(tagHVID));

		return;

	}

	CHV4DHVID::CHV4DHVID(hstring const& s)
	{
		if (s.size() != 38)
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if (s[0] != '{' && s[37] != '}')
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if(s[9] != '-' && s[14] != '-' && s[19] != '-' && s[24] != '-')
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		tagHVID[0] = s[1];
		tagHVID[1] = s[2];
		tagHVID[2] = s[3];
		tagHVID[3] = s[4];
		tagHVID[4] = s[5];
		tagHVID[5] = s[6];
		tagHVID[6] = s[7];
		tagHVID[7] = s[8];
		tagHVID[8] = s[10];
		tagHVID[9] = s[11];
		tagHVID[10] = s[12];
		tagHVID[11] = s[13];
		tagHVID[12] = s[15];
		tagHVID[13] = s[16];
		tagHVID[14] = s[17];
		tagHVID[15] = s[18];
		tagHVID[16] = s[20];
		tagHVID[17] = s[21];
		tagHVID[18] = s[22];
		tagHVID[19] = s[23];
		tagHVID[20] = s[25];
		tagHVID[21] = s[26];
		tagHVID[22] = s[27];
		tagHVID[23] = s[28];
		tagHVID[24] = s[29];
		tagHVID[25] = s[30];
		tagHVID[26] = s[31];
		tagHVID[27] = s[32];
		tagHVID[28] = s[33];
		tagHVID[29] = s[34];
		tagHVID[30] = s[35];
		tagHVID[31] = s[36];

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DHVID::CHV4DHVID(HVID const& e)
	{
		tagHVID[0] = e.a[0];
		tagHVID[1] = e.a[1];
		tagHVID[2] = e.a[2];
		tagHVID[3] = e.a[3];
		tagHVID[4] = e.a[4];
		tagHVID[5] = e.a[5];
		tagHVID[6] = e.a[6];
		tagHVID[7] = e.a[7];
		tagHVID[8] = e.b[0];
		tagHVID[9] = e.b[1];
		tagHVID[10] = e.b[2];
		tagHVID[11] = e.b[3];
		tagHVID[12] = e.c[0];
		tagHVID[13] = e.c[1];
		tagHVID[14] = e.c[2];
		tagHVID[15] = e.c[3];
		tagHVID[16] = e.d[0];
		tagHVID[17] = e.d[1];
		tagHVID[18] = e.d[2];
		tagHVID[19] = e.d[3];
		tagHVID[20] = e.e[0];
		tagHVID[21] = e.e[1];
		tagHVID[22] = e.e[2];
		tagHVID[23] = e.e[3];
		tagHVID[24] = e.e[4];
		tagHVID[25] = e.e[5];
		tagHVID[26] = e.e[6];
		tagHVID[27] = e.e[7];
		tagHVID[28] = e.e[8];
		tagHVID[29] = e.e[9];
		tagHVID[30] = e.e[10];
		tagHVID[31] = e.e[11];

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DHVID::CHV4DHVID(CHV4DHVID const& e)
	{
		memcpy(tagHVID, e.tagHVID, sizeof(tagHVID));

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}


	void CHV4DHVID::HV4DIsValidHVID()
	{
		if (tagHVID[0] == '\0')
		{
			memset(tagHVID, '\0', sizeof(tagHVID));

			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagHVID)
		{
			citt = std::find(HV4DHexW()->begin(), HV4DHexW()->end(), itt);

			if (citt == HV4DHexW()->end())
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	void CHV4DHVID::operator = (hstring const& s)
	{
		CHV4DHVID hvid{ s };

		for (size_t i = 0; i < 32; i++)
		{
			tagHVID[i] = hvid.tagHVID[i];

		}

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DHVID::operator = (HVID const& e)
	{
		CHV4DHVID hvid{ e };

		for (size_t i = 0; i < 32; i++)
		{
			tagHVID[i] = hvid.tagHVID[i];

		}

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DHVID::operator = (CHV4DHVID const& e)
	{
		CHV4DHVID hvid{ e };

		for (size_t i = 0; i < 32; i++)
		{
			tagHVID[i] = hvid.tagHVID[i];

		}

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	bool CHV4DHVID::operator == (hstring const& s)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DHVID hvid{ s };

		try
		{
			hvid.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == hvid;

	}

	bool CHV4DHVID::operator == (HVID const& e)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DHVID hvid{ e };

		try
		{
			hvid.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		for (uint32_t i = 0; i < 32; i++)
		{
			if (tagHVID[i] != hvid.tagHVID[i])
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DHVID::operator == (CHV4DHVID const& e)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DHVID hvid{ e };

		try
		{
			hvid.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		for (uint32_t i = 0; i < 32; i++)
		{
			if (tagHVID[i] != hvid.tagHVID[i])
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DHVID::operator != (hstring const& s)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DHVID hvid{ s };

		try
		{
			hvid.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == hvid);

	}

	bool CHV4DHVID::operator != (HVID const& e)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DHVID hvid{ e };

		try
		{
			hvid.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == hvid);

	}

	bool CHV4DHVID::operator != (CHV4DHVID const& e)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DHVID hvid{ e };

		try
		{
			hvid.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == hvid);

	}

	HV4DRETURN CHV4DHVID::HV4DRandomHVID()
	{
		GUID guid{};

		HRESULT ret = CoCreateGuid(&guid);

		if (ret != S_OK)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		LPOLESTR lpsz = new wchar_t[39] {'\0'};

		int num = StringFromGUID2(guid, lpsz, 39);

		if (num != 39)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		*this = winrt::to_hstring(lpsz);

		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHVID::HV4DGetHstringHVID(hstring& o)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		o = L"{";
		o = o + tagHVID[0] + tagHVID[1] + tagHVID[2] + tagHVID[3];
		o = o + tagHVID[4] + tagHVID[5] + tagHVID[6] + tagHVID[7];
		o = o + '-';
		o = o + tagHVID[8] + tagHVID[9] + tagHVID[10] + tagHVID[11];
		o = o + '-';
		o = o + tagHVID[12] + tagHVID[13] + tagHVID[14] + tagHVID[15];
		o = o + '-';
		o = o + tagHVID[16] + tagHVID[17] + tagHVID[18] + tagHVID[19];
		o = o + '-';
		o = o + tagHVID[20] + tagHVID[21] + tagHVID[22] + tagHVID[23];
		o = o + tagHVID[24] + tagHVID[25] + tagHVID[26] + tagHVID[27];
		o = o + tagHVID[28] + tagHVID[29] + tagHVID[30] + tagHVID[31];
		o = o + L"}\0";

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHVID::HV4DGetArrayHVID(wchar_t a[32])
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		a = tagHVID;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHVID::HV4DGetWinrtHVID(HVID& o)
	{
		try
		{
			HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHVID, '\0', sizeof(tagHVID));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		o.a = L"" + tagHVID[0] + tagHVID[1] + tagHVID[2] + tagHVID[3] + tagHVID[4] + tagHVID[5] + tagHVID[6] + tagHVID[7] + '\0';
		o.b = L"" + tagHVID[8] + tagHVID[9] + tagHVID[10] + tagHVID[11] + '\0';
		o.c = L"" + tagHVID[12] + tagHVID[13] + tagHVID[14] + tagHVID[15] + '\0';
		o.d = L"" + tagHVID[16] + tagHVID[17] + tagHVID[18] + tagHVID[19] + '\0';
		o.e = L"" + tagHVID[20] + tagHVID[21] + tagHVID[22] + tagHVID[23] + tagHVID[24] + tagHVID[25] + tagHVID[26] + tagHVID[27] + tagHVID[28] + tagHVID[29] + tagHVID[30] + tagHVID[31] + '\0';

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}