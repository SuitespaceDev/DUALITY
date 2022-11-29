#include "pch.h"

#include "CHV4DMMDDYYYY.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DMMDDYYYY::CHV4DMMDDYYYY()
	{
		memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

		return;

	}

	CHV4DMMDDYYYY::CHV4DMMDDYYYY(std::wstring const& s)
	{
		if (s.size() != 10)
		{
			throw std::invalid_argument("");

		}

		if (!(s[2] == '/' && s[5] == '/'))
		{
			throw std::invalid_argument("");

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
		catch (std::domain_error)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::invalid_argument("");

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
		catch (std::domain_error)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DMMDDYYYY::HV4DIsValidMMDDYYYY() const
	{
		if (tagMMDDYYYY[0] == '\0')
		{
			throw std::underflow_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagMMDDYYYY)
		{
			citt = std::find(SYSCALL::HV4DNumericW()->begin(), SYSCALL::HV4DNumericW()->end(), itt);

			if (citt == SYSCALL::HV4DNumericW()->end())
			{
				throw std::domain_error("");

			}

		}

		std::wstring mm = std::wstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1];
		std::wstring dd = std::wstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3];
		std::wstring yyyy = std::wstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7];

		std::wstring dd_max{};

		try
		{
			dd_max = SYSCALL::HV4DMMDDW()->at(mm);

		}
		catch (std::out_of_range)
		{
			throw std::domain_error("");

		}

		std::vector<std::wstring>::const_iterator citt_leap{};

		citt_leap = std::find(SYSCALL::HV4DLeapW()->begin(), SYSCALL::HV4DLeapW()->end(), yyyy);

		if (citt_leap != SYSCALL::HV4DLeapW()->end())
		{
			dd_max = L"29";

		}

		int val_dd{ std::stoi(dd.c_str()) };

		int val_dd_max{ std::stoi(dd_max.c_str()) };

		if (val_dd < 1 || val_dd > val_dd_max)
		{
			throw std::domain_error("");

		}

		return;

	}

	void CHV4DMMDDYYYY::operator = (std::wstring const& s)
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
		catch (std::domain_error)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::invalid_argument("");

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
		catch (std::domain_error)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::invalid_argument("");

		}

		return;

	}

	bool CHV4DMMDDYYYY::operator == (std::wstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

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
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		int ret = memcmp(tagMMDDYYYY, mmddyyyy.tagMMDDYYYY, sizeof(tagMMDDYYYY));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DMMDDYYYY::operator != (std::wstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

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
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return (*this == mmddyyyy);

	}

	bool CHV4DMMDDYYYY::operator > (std::wstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this > mmddyyyy;

	}

	bool CHV4DMMDDYYYY::operator > (CHV4DMMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

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

	bool CHV4DMMDDYYYY::operator < (std::wstring const& s) const
	{
		CHV4DMMDDYYYY mmddyyyy{ s };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this < mmddyyyy;

	}

	bool CHV4DMMDDYYYY::operator < (CHV4DMMDDYYYY const& e) const
	{
		CHV4DMMDDYYYY mmddyyyy{ e };

		try
		{
			mmddyyyy.HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

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

	void CHV4DMMDDYYYY::HV4DCurrentMMDDYYYY()
	{
		std::time_t time = std::time(nullptr);

		std::tm now{};

		int is_valid = localtime_s(&now, &time);

		if (is_valid != NULL)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::overflow_error("localtime failed.");

		}

		char buffer[128];

		size_t ret = strftime(buffer, sizeof(buffer), "%m/%d/%Y", &now);

		if (ret == 0)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::underflow_error("time format failed.");

		}

		std::wstring str{ &buffer[0], &buffer[127] };

		*this = str;

		try
		{
			HV4DIsValidMMDDYYYY();

		}
		catch (std::domain_error)
		{
			memset(tagMMDDYYYY, '\0', sizeof(tagMMDDYYYY));

			throw std::domain_error("");

		}

		return;

	}

	void CHV4DMMDDYYYY::HV4DGetStringMMDDYYYY(std::wstring& o) const
	{
		o = o + tagMMDDYYYY[0];
		o = o + tagMMDDYYYY[1];
		o = o + L"/";
		o = o + tagMMDDYYYY[2];
		o = o + tagMMDDYYYY[3];
		o = o + L"/";
		o = o + tagMMDDYYYY[4];
		o = o + tagMMDDYYYY[5];
		o = o + tagMMDDYYYY[6];
		o = o + tagMMDDYYYY[7];

		o = o + L"\0";

		return;

	}

	void CHV4DMMDDYYYY::HV4DGetNumericMMDDYYYY(uint8_t& mm, uint8_t& dd, uint8_t& yyyy) const
	{
		std::wstring str_mm = std::wstring{ tagMMDDYYYY[0] } + tagMMDDYYYY[1];

		std::wstring str_dd = std::wstring{ tagMMDDYYYY[2] } + tagMMDDYYYY[3];

		std::wstring str_yyyy = std::wstring{ tagMMDDYYYY[4] } + tagMMDDYYYY[5] + tagMMDDYYYY[6] + tagMMDDYYYY[7];

		mm = std::stoi(str_mm.c_str());

		dd = std::stoi(str_dd.c_str());

		yyyy = std::stoi(str_yyyy.c_str());

		return;

	}

	void CHV4DMMDDYYYY::HV4DGetArrayMMDDYYYY(wchar_t a[8]) const
	{
		for (uint8_t i = 0; i < 8; i++)
		{
			a[i] = tagMMDDYYYY[i];

		}

		return;

	}

}