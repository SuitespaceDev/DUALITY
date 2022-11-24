#include "pch.h"

#include "CHV4DOFFSET.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DOFFSET::CHV4DOFFSET()
	{


		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(DWORD const& off_bot, DWORD const& off_upp, DWORD const& sz_bot, DWORD const& sz_upp)
	{
		memcpy(&tagOFFSET[0], &off_bot, sizeof(DWORD));

		memcpy(&tagOFFSET[2], &off_upp, sizeof(DWORD));

		memcpy(&tagSIZE[0], &sz_bot, sizeof(DWORD));

		memcpy(&tagSIZE[2], &sz_upp, sizeof(DWORD));

		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(OFFSET const& e)
	{
		byte array[8]{};

		array[0] = e.o.b0;
		array[1] = e.o.b1;
		array[2] = e.o.b2;
		array[3] = e.o.b3;
		array[4] = e.o.b4;
		array[5] = e.o.b5;
		array[6] = e.o.b6;
		array[7] = e.o.b7;

		memcpy(tagOFFSET, array, sizeof(array));

		array[0] = e.sz.b0;
		array[1] = e.sz.b1;
		array[2] = e.sz.b2;
		array[3] = e.sz.b3;
		array[4] = e.sz.b4;
		array[5] = e.sz.b5;
		array[6] = e.sz.b6;
		array[7] = e.sz.b7;

		memcpy(tagSIZE, array, sizeof(array));

		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(CHV4DOFFSET const& e)
	{
		memcpy(tagOFFSET, e.tagOFFSET, sizeof(tagOFFSET));

		memcpy(tagSIZE, e.tagSIZE, sizeof(tagSIZE));

		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	void CHV4DOFFSET::HV4DIsValidOffset()
	{
		if (wcscmp(tagOFFSET, L"0000") || wcscmp(tagSIZE, L"0000"))
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagOFFSET)
		{
			citt = std::find(HV4DNumericW()->begin(), HV4DNumericW()->end(), itt);

			if (citt != HV4DNumericW()->end())
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		for (wchar_t itt : tagSIZE)
		{
			citt = std::find(HV4DNumericW()->begin(), HV4DNumericW()->end(), itt);

			if (citt != HV4DNumericW()->end())
			{
				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	void CHV4DOFFSET::operator = (OFFSET const& e)
	{
		CHV4DOFFSET offset{ e };

		for (size_t i = 0; i < 4; i++)
		{
			tagOFFSET[i] = offset.tagOFFSET[i];

			tagSIZE[i] = offset.tagSIZE[i];

		}

		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	void CHV4DOFFSET::operator = (CHV4DOFFSET const& e)
	{
		CHV4DOFFSET offset{ e };

		for (size_t i = 0; i < 4; i++)
		{
			tagOFFSET[i] = offset.tagOFFSET[i];

			tagSIZE[i] = offset.tagSIZE[i];

		}

		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	bool CHV4DOFFSET::operator == (OFFSET const& e)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DOFFSET offset{ e };

		try
		{
			offset.HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == offset;

	}

	bool CHV4DOFFSET::operator == (CHV4DOFFSET const& e)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DOFFSET offset{ e };

		try
		{
			offset.HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		for (uint32_t i = 0; i < 4; i++)
		{
			if (tagOFFSET[i] != offset.tagOFFSET[i] || tagSIZE[i] != offset.tagSIZE[i])
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DOFFSET::operator != (OFFSET const& e)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DOFFSET offset{ e };

		try
		{
			offset.HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == offset);

	}

	bool CHV4DOFFSET::operator != (CHV4DOFFSET const& e)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DOFFSET offset{ e };

		try
		{
			offset.HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == offset);

	}

	HV4DRETURN CHV4DOFFSET::HV4DGetHstringOFFSET(hstring& o, hstring& sz)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		long long ret_off{};

		memcpy(&ret_off, tagOFFSET, sizeof(ret_off));

		o = std::to_wstring(ret_off).c_str();

		long long ret_sz{};

		memcpy(&ret_sz, tagSIZE, sizeof(ret_sz));

		sz = std::to_wstring(ret_sz).c_str();

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DOFFSET::HV4DGetNumericOFFSET(long long& o, long long& sz)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		memcpy(&o, tagOFFSET, sizeof(long long));

		memcpy(&sz, tagSIZE, sizeof(long long));

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DOFFSET::HV4DGetDWORDOFFSET(DWORD& o_bot, DWORD& o_upp, DWORD& sz_bot, DWORD& sz_upp)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		memcpy(&o_bot, &tagOFFSET[0], sizeof(DWORD));

		memcpy(&o_upp, &tagOFFSET[2], sizeof(DWORD));

		memcpy(&sz_bot, &tagSIZE[0], sizeof(DWORD));

		memcpy(&sz_upp, &tagSIZE[2], sizeof(DWORD));

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DOFFSET::HV4DGetArrayOFFSET(wchar_t a[4], wchar_t b[4])
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		a = tagOFFSET;

		b = tagSIZE;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DOFFSET::HV4DGetWinrtOFFSET(OFFSET& e)
	{
		try
		{
			HV4DIsValidOffset();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagOFFSET, '\0', sizeof(tagOFFSET));

				memset(tagSIZE, '\0', sizeof(tagSIZE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		byte array[8]{};

		memcpy(array, tagOFFSET, sizeof(array));

		e.o.b0 = array[0];
		e.o.b1 = array[1];
		e.o.b2 = array[2];
		e.o.b3 = array[3];
		e.o.b4 = array[4];
		e.o.b5 = array[5];
		e.o.b6 = array[6];
		e.o.b7 = array[7];

		memcpy(array, tagSIZE, sizeof(array));

		e.o.b0 = array[0];
		e.o.b1 = array[1];
		e.o.b2 = array[2];
		e.o.b3 = array[3];
		e.o.b4 = array[4];
		e.o.b5 = array[5];
		e.o.b6 = array[6];
		e.o.b7 = array[7];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}