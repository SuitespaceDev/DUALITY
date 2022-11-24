#include "pch.h"

#include "CHV4DMMDDYYYY.h"

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DMMDDYYYY::CHV4DMMDDYYYY()
	{
		memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

		return;

	}

	CHV4DMMDDYYYY::CHV4DMMDDYYYY(hstring const& s)
	{
		if (s.size() != 10)
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if (!(s[2] == '/' && s[5] == '/'))
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		tagMMDDYYYY[0] = s[0];
		tagMMDDYYYY[1] = s[1];
		tagMMDDYYYY[2] = s[3];
		tagMMDDYYYY[3] = s[4];
		tagMMDDYYYY[4] = s[6];
		tagMMDDYYYY[5] = s[7];
		tagMMDDYYYY[6] = s[8];
		tagMMDDYYYY[7] = s[9];

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}
	CHV4DMMDDYYYY::CHV4DMMDDYYYY(MMDDYYYY const& e)
	{
		tagMMDDYYYY[0] = e.mm[0];
		tagMMDDYYYY[1] = e.mm[1];
		tagMMDDYYYY[2] = e.dd[0];
		tagMMDDYYYY[3] = e.dd[1];
		tagMMDDYYYY[4] = e.yyyy[0];
		tagMMDDYYYY[5] = e.yyyy[1];
		tagMMDDYYYY[6] = e.yyyy[2];
		tagMMDDYYYY[7] = e.yyyy[3];

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DMMDDYYYY::CHV4DMMDDYYYY(CHV4DMMDDYYYY const& e)
	{
		memcpy(tagMMDDYYYY, e.tagMMDDYYYY, sizeof(tagMMDDYYYY));

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DMMDDYYYY::HV4DIsValidMMDDYYYY() const
	{
		if (tagMMDDYYYY[0] == '\0')
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagMMDDYYYY)
		{
			citt = std::find(HV4DNumericW()->begin(), HV4DNumericW()->end(), itt);

			if (citt == HV4DNumericW()->end())
			{
				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		hstring mm = hstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1];
		hstring dd = hstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3];
		hstring yyyy = hstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7];

		hstring dd_max{};

		try
		{
			dd_max = HV4DMMDDW()->at(mm);

		}
		catch (std::out_of_range)
		{
			throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		std::vector<hstring>::const_iterator citt_leap{};

		citt_leap = std::find(HV4DLeapW()->begin(), HV4DLeapW()->end(), yyyy);

		if (citt_leap != HV4DLeapW()->end())
		{
			dd_max = L"29";

		}

		int val_dd{ std::stoi(dd.c_str()) };

		int val_dd_max{ std::stoi(dd_max.c_str()) };

		if (val_dd < 1 || val_dd > val_dd_max)
		{
			throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return;

	}

	void CHV4DMMDDYYYY::operator = (hstring const& s)
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		for (size_t i = 0; i < 8; i++)
		{
			tagMMDDYYYY[i] = mmddyyyy.tagMMDDYYYY[i];

		}

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DMMDDYYYY::operator = (MMDDYYYY const& e)
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		for (size_t i = 0; i < 8; i++)
		{
			tagMMDDYYYY[i] = mmddyyyy.tagMMDDYYYY[i];

		}

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DMMDDYYYY::operator = (CHV4DMMDDYYYY const& e)
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		for (size_t i = 0; i < 8; i++)
		{
			tagMMDDYYYY[i] = mmddyyyy.tagMMDDYYYY[i];

		}

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	bool CHV4DMMDDYYYY::operator == (hstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == mmddyyyy;

	}

	bool CHV4DMMDDYYYY::operator == (MMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == mmddyyyy;

	}

	bool CHV4DMMDDYYYY::operator == (CHV4DMMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		int ret = memcmp(tagMMDDYYYY, mmddyyyy.tagMMDDYYYY, sizeof(tagMMDDYYYY));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DMMDDYYYY::operator != (hstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return (*this == mmddyyyy);

	}

	bool CHV4DMMDDYYYY::operator != (MMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return (*this == mmddyyyy);

	}

	bool CHV4DMMDDYYYY::operator != (CHV4DMMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return (*this == mmddyyyy);

	}

	bool CHV4DMMDDYYYY::operator > (hstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyyy{ s };

		try
		{
			mmddyyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this > mmddyyyyy;

	}

	bool CHV4DMMDDYYYY::operator > (MMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyyy{ e };

		try
		{
			mmddyyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this > mmddyyyyy;

	}

	bool CHV4DMMDDYYYY::operator > (CHV4DMMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}


		}

		int a_mm = std::stoi(std::wstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1]);
		int b_mm = std::stoi(std::wstring{ mmddyyyy.tagMMDDYYYY[0] } + mmddyyyy.tagMMDDYYYY[1]);

		int a_dd = std::stoi(std::wstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3]);
		int b_dd = std::stoi(std::wstring{ mmddyyyy.tagMMDDYYYY[2] } + mmddyyyy.tagMMDDYYYY[3]);

		int a_yyyy = std::stoi(std::wstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7]);
		int b_yyyy = std::stoi(std::wstring{ mmddyyyy.tagMMDDYYYY[4] } + mmddyyyy.tagMMDDYYYY[5] + mmddyyyy.tagMMDDYYYY[6] + mmddyyyy.tagMMDDYYYY[7]);

		if (a_yyyy > b_yyyy)
		{
			return true;

		}
		else if (a_yyyy < b_yyyy)
		{
			return false;

		}
		else
		{
			if (a_mm > b_mm)
			{
				return true;

			}
			else if (a_mm < b_mm)
			{
				return false;

			}
			else
			{
				if (a_dd > b_dd)
				{
					return true;

				}
				else
				{
					return false;

				}

			}

		}

	}

	bool CHV4DMMDDYYYY::operator < (hstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyyy{ s };

		try
		{
			mmddyyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this < mmddyyyyy;

	}

	bool CHV4DMMDDYYYY::operator < (MMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyyy{ e };

		try
		{
			mmddyyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this < mmddyyyyy;

	}

	bool CHV4DMMDDYYYY::operator < (CHV4DMMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}


		}

		int a_mm = std::stoi(std::wstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1]);
		int b_mm = std::stoi(std::wstring{ mmddyyyy.tagMMDDYYYY[0] } + mmddyyyy.tagMMDDYYYY[1]);

		int a_dd = std::stoi(std::wstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3]);
		int b_dd = std::stoi(std::wstring{ mmddyyyy.tagMMDDYYYY[2] } + mmddyyyy.tagMMDDYYYY[3]);

		int a_yyyy = std::stoi(std::wstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7]);
		int b_yyyy = std::stoi(std::wstring{ mmddyyyy.tagMMDDYYYY[4] } + mmddyyyy.tagMMDDYYYY[5] + mmddyyyy.tagMMDDYYYY[6] + mmddyyyy.tagMMDDYYYY[7]);

		if (a_yyyy < b_yyyy)
		{
			return true;

		}
		else if (a_yyyy > b_yyyy)
		{
			return false;

		}
		else
		{
			if (a_mm < b_mm)
			{
				return true;

			}
			else if (a_mm > b_mm)
			{
				return false;

			}
			else
			{
				if (a_dd < b_dd)
				{
					return true;

				}
				else
				{
					return false;

				}

			}

		}

	}

	HV4DRETURN CHV4DMMDDYYYY::HV4DCurrentMMDDYYYY()
	{
		std::time_t time = std::time(nullptr);

		std::tm now{};

		int is_valid = localtime_s(&now, &time);

		if (is_valid != NULL)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		char buffer[128];

		size_t ret = strftime(buffer, sizeof(buffer), "%m/%d/%Y", &now);

		if (ret == 0)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring str = winrt::to_hstring(buffer);

		*this = str;

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DMMDDYYYY::HV4DGetHstringMMDDYYYY(hstring& o) const
	{
		o = o + tagMMDDYYYY[0];
		o = o + tagMMDDYYYY[1];
		o = o + '/';
		o = o + tagMMDDYYYY[2];
		o = o + tagMMDDYYYY[3];
		o = o + '/';
		o = o + tagMMDDYYYY[4];
		o = o + tagMMDDYYYY[5];
		o = o + tagMMDDYYYY[6];
		o = o + tagMMDDYYYY[7];

		o = o + L"\0";

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DMMDDYYYY::HV4DGetNumericMMDDYYYY(uint32_t& mm, uint32_t& dd, uint32_t& yyyy) const
	{
		hstring str_mm = hstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1];

		hstring str_dd = hstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3];

		hstring str_yyyy = hstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7];

		mm = std::stol(str_mm.c_str());

		dd = std::stol(str_dd.c_str());

		yyyy = std::stol(str_yyyy.c_str());

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DMMDDYYYY::HV4DGetArrayMMDDYYYY(wchar_t a[8]) const
	{
		for (uint8_t i = 0; i < 8; i++)
		{
			a[i] = tagMMDDYYYY[i];

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DMMDDYYYY::HV4DGetWinrtMMDDYYYY(MMDDYYYY& o) const
	{
		o.mm = hstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1];

		o.dd = hstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3];

		o.yyyy = hstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}