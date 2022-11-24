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
		if (s.size() == 38)
		{
			if (s[0] != '{' && s[37] != '}')
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

			if (s[9] != '-' && s[14] != '-' && s[19] != '-' && s[24] != '-')
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

			memcpy(&tagHVID[0], &s[1], 8 * sizeof(wchar_t));
			memcpy(&tagHVID[8], &s[10], 4 * sizeof(wchar_t));
			memcpy(&tagHVID[12], &s[15], 4 * sizeof(wchar_t));
			memcpy(&tagHVID[16], &s[20], 4 * sizeof(wchar_t));
			memcpy(&tagHVID[20], &s[25], 12 * sizeof(wchar_t));

		}
		else if (s.size() == 32)
		{
			memcpy(tagHVID, &s[0], sizeof(tagHVID));

		}
		else
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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

	CHV4DHVID::CHV4DHVID(HVID const& e)
	{
		memcpy(&tagHVID[0], &e.a[0], 8 * sizeof(wchar_t));
		memcpy(&tagHVID[8], &e.b[0], 4 * sizeof(wchar_t));
		memcpy(&tagHVID[12], &e.c[0], 4 * sizeof(wchar_t));
		memcpy(&tagHVID[16], &e.d[0], 4 * sizeof(wchar_t));
		memcpy(&tagHVID[20], &e.e[0], 12 * sizeof(wchar_t));

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

	CHV4DHVID::CHV4DHVID(winrt::guid const& e)
	{
		std::byte i_array[16]{};

		winrt::guid hvid{ e };

		std::byte* data1 = reinterpret_cast<std::byte*>(&hvid.Data1);
		std::byte* data2 = reinterpret_cast<std::byte*>(&hvid.Data2);
		std::byte* data3 = reinterpret_cast<std::byte*>(&hvid.Data3);

		i_array[0] = data1[3];
		i_array[1] = data1[2];
		i_array[2] = data1[1];
		i_array[3] = data1[0];
		i_array[4] = data2[1];
		i_array[5] = data2[0];
		i_array[6] = data3[1];
		i_array[7] = data3[0];
		i_array[8] = (std::byte)e.Data4[0];
		i_array[9] = (std::byte)e.Data4[1];
		i_array[10] = (std::byte)e.Data4[2];
		i_array[11] = (std::byte)e.Data4[3];
		i_array[12] = (std::byte)e.Data4[4];
		i_array[13] = (std::byte)e.Data4[5];
		i_array[14] = (std::byte)e.Data4[6];
		i_array[15] = (std::byte)e.Data4[7];

		for (uint8_t i = 0; i < 16; i++)
		{
			std::byte upper = i_array[i] & std::byte{ 0b11110000 };

			std::byte lower = i_array[i] & std::byte{ 0b00001111 };

			try
			{
				tagHVID[(i * 2)] = HV4DHexByteToHstring()->at(upper)[0];

			}
			catch (std::out_of_range)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

			try
			{
				tagHVID[(i * 2) + 1] = HV4DHexByteToHstring()->at(lower)[1];

			}
			catch (std::out_of_range)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

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

	void CHV4DHVID::HV4DIsValidHVID() const
	{
		if (tagHVID[0] == '\0')
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagHVID)
		{
			citt = std::find(HV4DHexW()->begin(), HV4DHexW()->end(), itt);

			if (citt == HV4DHexW()->end())
			{
				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

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

	void CHV4DHVID::operator = (winrt::guid const& e)
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

	bool CHV4DHVID::operator == (hstring const& s) const
	{
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

	bool CHV4DHVID::operator == (HVID const& e) const
	{
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

		return *this == hvid;

	}

	bool CHV4DHVID::operator == (winrt::guid const& e) const
	{
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

		return *this == hvid;

	}

	bool CHV4DHVID::operator == (CHV4DHVID const& e) const
	{
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

		int ret = memcmp(tagHVID, hvid.tagHVID, 64);

		if (ret != 0)
		{
			return false;

		}

		return true;

	}

	bool CHV4DHVID::operator != (hstring const& s) const
	{
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

	bool CHV4DHVID::operator != (HVID const& e) const
	{
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

	bool CHV4DHVID::operator != (winrt::guid const& e) const
	{
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

	bool CHV4DHVID::operator != (CHV4DHVID const& e) const
	{
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

	bool CHV4DHVID::operator < (hstring const& s) const
	{
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

		return *this < hvid;

	}

	bool CHV4DHVID::operator < (HVID const& e) const
	{
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

		return *this < hvid;

	}

	bool CHV4DHVID::operator < (winrt::guid const& e) const
	{
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

		return *this < hvid;

	}

	bool CHV4DHVID::operator < (CHV4DHVID const& e) const
	{
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

		winrt::guid left{}, right{};

		HV4DGetNativeHVID(left);

		hvid.HV4DGetNativeHVID(right);

		if (left.Data1 < right.Data1)
		{
			return true;

		}

		if (left.Data1 > right.Data1)
		{
			return false;

		}

		if (left.Data2 < right.Data2)
		{
			return true;

		}

		if (left.Data2 > right.Data2)
		{
			return false;

		}

		if (left.Data3 < right.Data3)
		{
			return true;

		}

		if (left.Data3 > right.Data3)
		{
			return false;

		}

		for (uint8_t i = 0; i < 8; i++)
		{
			if (left.Data4[i] < right.Data4[i])
			{
				return true;

			}

			if (left.Data4[i] > right.Data4[i])
			{
				return false;

			}

		}

		return false;

	}

	bool CHV4DHVID::operator > (hstring const& s) const
	{
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

		return *this > hvid;

	}

	bool CHV4DHVID::operator > (HVID const& e) const
	{
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

		return *this > hvid;

	}

	bool CHV4DHVID::operator > (winrt::guid const& e) const
	{
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

		return *this > hvid;

	}

	bool CHV4DHVID::operator > (CHV4DHVID const& e) const
	{
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

		winrt::guid left{}, right{};

		HV4DGetNativeHVID(left);

		hvid.HV4DGetNativeHVID(right);

		if (left.Data1 > right.Data1)
		{
			return true;

		}

		if (left.Data1 < right.Data1)
		{
			return false;

		}

		if (left.Data2 > right.Data2)
		{
			return true;

		}

		if (left.Data2 < right.Data2)
		{
			return false;

		}

		if (left.Data3 > right.Data3)
		{
			return true;

		}

		if (left.Data3 < right.Data3)
		{
			return false;

		}

		for (uint8_t i = 0; i < 8; i++)
		{
			if (left.Data4[i] > right.Data4[i])
			{
				return true;

			}

			if (left.Data4[i] < right.Data4[i])
			{
				return false;

			}

		}

		return false;

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

	HV4DRETURN CHV4DHVID::HV4DGetHstringHVID(hstring& o) const
	{
		o = o + L"{";
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
		o = o + L"}";

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHVID::HV4DGetNativeHVID(winrt::guid& o) const
	{
		std::byte i_array[16]{};

		for (uint8_t i = 0; i < 16; i++)
		{
			hstring str_upper = hstring{ tagHVID[(2 * i)] } + '0';

			std::byte upper = HV4DHexHstringToByte()->at(str_upper);

			hstring str_lower = hstring{ '0' } + tagHVID[(2 * i) + 1];

			std::byte lower = HV4DHexHstringToByte()->at(str_lower);

			i_array[i] = upper | lower;

		}

		std::byte* data1 = reinterpret_cast<std::byte*>(&o.Data1);
		std::byte* data2 = reinterpret_cast<std::byte*>(&o.Data2);
		std::byte* data3 = reinterpret_cast<std::byte*>(&o.Data3);

		data1[0] = i_array[3];
		data1[1] = i_array[2];
		data1[2] = i_array[1];
		data1[3] = i_array[0];
		data2[0] = i_array[5];
		data2[1] = i_array[4];
		data3[0] = i_array[7];
		data3[1] = i_array[6];
		o.Data4[0] = (uint8_t)i_array[8];
		o.Data4[1] = (uint8_t)i_array[9];
		o.Data4[2] = (uint8_t)i_array[10];
		o.Data4[3] = (uint8_t)i_array[11];
		o.Data4[4] = (uint8_t)i_array[12];
		o.Data4[5] = (uint8_t)i_array[13];
		o.Data4[6] = (uint8_t)i_array[14];
		o.Data4[7] = (uint8_t)i_array[15];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHVID::HV4DGetArrayHVID(wchar_t a[32]) const
	{
		for (uint8_t i = 0; i < 32; i++)
		{
			a[i] = tagHVID[i];

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHVID::HV4DGetWinrtHVID(HVID& o) const
	{
		o.a = hstring{ tagHVID[0] } + tagHVID[1] + tagHVID[2] + tagHVID[3] + tagHVID[4] + tagHVID[5] + tagHVID[6] + tagHVID[7];
		o.b = hstring{ tagHVID[8] } + tagHVID[9] + tagHVID[10] + tagHVID[11];
		o.c = hstring{ tagHVID[12] } + tagHVID[13] + tagHVID[14] + tagHVID[15];
		o.d = hstring{ tagHVID[16] } + tagHVID[17] + tagHVID[18] + tagHVID[19];
		o.e = hstring{ tagHVID[20] } + tagHVID[21] + tagHVID[22] + tagHVID[23] + tagHVID[24] + tagHVID[25] + tagHVID[26] + tagHVID[27] + tagHVID[28] + tagHVID[29] + tagHVID[30] + tagHVID[31];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}