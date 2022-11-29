#include "pch.h"

#include "CHV4DHHMMSS.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DHHMMSS::CHV4DHHMMSS()
	{
		memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

		return;

	}

	CHV4DHHMMSS::CHV4DHHMMSS(std::wstring const& s)
	{
		if (s.size() != 8)
		{
			throw std::invalid_argument("");

		}

		if(!(s[2] == ':' && s[5] == ':'))
		{
			throw std::invalid_argument("");

		}

		tagHHMMSS[0] = s[0];
		tagHHMMSS[1] = s[1];
		tagHHMMSS[2] = s[3];
		tagHHMMSS[3] = s[4];
		tagHHMMSS[4] = s[6];
		tagHHMMSS[5] = s[7];

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::domain_error("");

		}

		return;

	}

	CHV4DHHMMSS::CHV4DHHMMSS(CHV4DHHMMSS const& e)
	{
		memcpy(tagHHMMSS, e.tagHHMMSS, sizeof(tagHHMMSS));

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::domain_error("");

		}

		return;

	}

	void CHV4DHHMMSS::HV4DIsValidHHMMSS() const
	{
		if (tagHHMMSS[0] == '\0')
		{
			throw std::underflow_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagHHMMSS)
		{
			citt = std::find(SYSCALL::HV4DNumericW()->begin(), SYSCALL::HV4DNumericW()->end(), itt);

			if (citt == SYSCALL::HV4DNumericW()->end())
			{
				throw std::domain_error("");

			}

		}

		std::wstring hh{ tagHHMMSS[0], tagHHMMSS[1] };
		std::wstring mm{ tagHHMMSS[2], tagHHMMSS[3] };
		std::wstring ss{ tagHHMMSS[4], tagHHMMSS[5] };

		int sz_hh = std::stoi(hh.data());
		int sz_mm = std::stoi(mm.data());
		int sz_ss = std::stoi(ss.data());

		if (!(0 <= sz_hh && sz_hh < 24 && 0 <= sz_mm && sz_mm < 60 && 0 <= sz_ss && sz_ss < 60))
		{
			throw std::domain_error("");

		}

		return;

	}

	void CHV4DHHMMSS::operator = (std::wstring const& s)
	{
		CHV4DHHMMSS hhmmss{ s };

		for (size_t i = 0; i < 6; i++)
		{
			tagHHMMSS[i] = hhmmss.tagHHMMSS[i];

		}

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DHHMMSS::operator = (CHV4DHHMMSS const& e)
	{
		for (size_t i = 0; i < 6; i++)
		{
			tagHHMMSS[i] = e.tagHHMMSS[i];

		}

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::invalid_argument("");

		}

		return;

	}

	bool CHV4DHHMMSS::operator == (std::wstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this == hhmmss;

	}

	bool CHV4DHHMMSS::operator == (CHV4DHHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		int ret = memcmp(tagHHMMSS, hhmmss.tagHHMMSS, sizeof(tagHHMMSS));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DHHMMSS::operator != (std::wstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == hhmmss);

	}

	bool CHV4DHHMMSS::operator != (CHV4DHHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == hhmmss);

	}

	bool CHV4DHHMMSS::operator > (std::wstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this > hhmmss;

	}

	bool CHV4DHHMMSS::operator > (CHV4DHHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		uint32_t a_hh = std::stoi(std::wstring{ tagHHMMSS[0], tagHHMMSS[1] });
		uint32_t b_hh = std::stoi(std::wstring{ hhmmss.tagHHMMSS[0], hhmmss.tagHHMMSS[1] });

		uint32_t a_mm = std::stoi(std::wstring{ tagHHMMSS[2], tagHHMMSS[3] });
		uint32_t b_mm = std::stoi(std::wstring{ hhmmss.tagHHMMSS[2], hhmmss.tagHHMMSS[3] });

		uint32_t a_ss = std::stoi(std::wstring{ tagHHMMSS[4], tagHHMMSS[5] });
		uint32_t b_ss = std::stoi(std::wstring{ hhmmss.tagHHMMSS[4], hhmmss.tagHHMMSS[5] });

		if (a_hh > b_hh)
		{
			return true;

		}
		else if (a_hh < b_hh)
		{
			return false;

		}
		else
		{
			if (a_mm > b_mm)
			{
				return true;

			}
			if (a_mm < b_mm)
			{
				return false;

			}
			else
			{
				if (a_ss > b_ss)
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

	bool CHV4DHHMMSS::operator < (std::wstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this < hhmmss);

	}

	bool CHV4DHHMMSS::operator < (CHV4DHHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		uint32_t a_hh = std::stoi(std::wstring{ tagHHMMSS[0], tagHHMMSS[1] });
		uint32_t b_hh = std::stoi(std::wstring{ hhmmss.tagHHMMSS[0], hhmmss.tagHHMMSS[1] });

		uint32_t a_mm = std::stoi(std::wstring{ tagHHMMSS[2], tagHHMMSS[3] });
		uint32_t b_mm = std::stoi(std::wstring{ hhmmss.tagHHMMSS[2], hhmmss.tagHHMMSS[3] });

		uint32_t a_ss = std::stoi(std::wstring{ tagHHMMSS[4], tagHHMMSS[5] });
		uint32_t b_ss = std::stoi(std::wstring{ hhmmss.tagHHMMSS[4], hhmmss.tagHHMMSS[5] });

		if (a_hh < b_hh)
		{
			return true;

		}
		else if (a_hh > b_hh)
		{
			return false;

		}
		else
		{
			if (a_mm < b_mm)
			{
				return true;

			}
			if (a_mm > b_mm)
			{
				return false;

			}
			else
			{
				if (a_ss < b_ss)
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

	void CHV4DHHMMSS::HV4DCurrentHHMMSS()
	{
		std::time_t time = std::time(nullptr);

		std::tm now{};

		int is_valid = localtime_s(&now, &time);

		if (is_valid != NULL)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::overflow_error("localtime failed.");

		}

		char buffer[128];

		size_t ret = strftime(buffer, sizeof(buffer), "%X", &now);

		if (ret == 0)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::underflow_error("format time failed.");

		}

		std::wstring str{ &buffer[0], &buffer[strlen(buffer)] };

		*this = str;

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (std::domain_error)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw std::domain_error("");

		}

		return;

	}

	void CHV4DHHMMSS::HV4DGetStringHHMMSS(std::wstring& o) const
	{
		o = std::wstring{ tagHHMMSS[0], tagHHMMSS[1], ':', tagHHMMSS[2], tagHHMMSS[3], ':', tagHHMMSS[4], tagHHMMSS[5] };

		return;

	}

	void CHV4DHHMMSS::HV4DGetNumericHHMMSS(uint8_t& hh, uint8_t& mm, uint8_t& ss) const
	{
		hh = (uint8_t)std::stoi(std::wstring{ tagHHMMSS[0] } + tagHHMMSS[1]);

		mm = (uint8_t)std::stoi(std::wstring{ tagHHMMSS[2] } + tagHHMMSS[3]);

		ss = (uint8_t)std::stoi(std::wstring{ tagHHMMSS[4] } + tagHHMMSS[5]);

		return;

	}

	void CHV4DHHMMSS::HV4DGetArrayHHMMSS(wchar_t a[6]) const
	{
		for (uint8_t i = 0; i < 6; i++)
		{
			a[i] = tagHHMMSS[i];

		}

		return;

	}

}