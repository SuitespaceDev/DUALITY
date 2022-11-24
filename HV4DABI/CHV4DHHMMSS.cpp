#include "pch.h"

#include "CHV4DHHMMSS.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DHHMMSS::CHV4DHHMMSS()
	{
		memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

		return;

	}

	CHV4DHHMMSS::CHV4DHHMMSS(hstring const& s)
	{
		if (s.size() != 8)
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if(!(s[2] == ':' && s[5] == ':'))
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	CHV4DHHMMSS::CHV4DHHMMSS(HHMMSS const& e)
	{
		tagHHMMSS[0] = e.hh[0];
		tagHHMMSS[1] = e.hh[1];
		tagHHMMSS[2] = e.mm[0];
		tagHHMMSS[3] = e.mm[1];
		tagHHMMSS[4] = e.ss[0];
		tagHHMMSS[5] = e.ss[1];

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	void CHV4DHHMMSS::HV4DIsValidHHMMSS() const
	{
		if (tagHHMMSS[0] == '\0')
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagHHMMSS)
		{
			citt = std::find(HV4DNumericW()->begin(), HV4DNumericW()->end(), itt);

			if (citt == HV4DNumericW()->end())
			{
				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		hstring hh = hstring{ tagHHMMSS[0] } + tagHHMMSS[1];
		hstring mm = hstring{ tagHHMMSS[2] } + tagHHMMSS[3];
		hstring ss = hstring{ tagHHMMSS[4] } + tagHHMMSS[5];

		int sz_hh = std::stoi(hh.c_str());
		int sz_mm = std::stoi(mm.c_str());
		int sz_ss = std::stoi(ss.c_str());

		if (!(0 <= sz_hh && sz_hh < 24 && 0 <= sz_mm && sz_mm < 60 && 0 <= sz_ss && sz_ss < 60))
		{
			throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return;

	}

	void CHV4DHHMMSS::operator = (hstring const& s)
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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw thrown;

			}

		}

		return;

	}

	void CHV4DHHMMSS::operator = (HHMMSS const& e)
	{
		CHV4DHHMMSS hhmmss{ e };

		for (size_t i = 0; i < 6; i++)
		{
			tagHHMMSS[i] = hhmmss.tagHHMMSS[i];

		}

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return;

	}

	bool CHV4DHHMMSS::operator == (hstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == hhmmss;

	}

	bool CHV4DHHMMSS::operator == (HHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		int ret = memcmp(tagHHMMSS, hhmmss.tagHHMMSS, sizeof(tagHHMMSS));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DHHMMSS::operator != (hstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == hhmmss);

	}

	bool CHV4DHHMMSS::operator != (HHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == hhmmss);

	}

	bool CHV4DHHMMSS::operator > (hstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this > hhmmss;

	}

	bool CHV4DHHMMSS::operator > (HHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		uint32_t a_hh = std::stoi(std::wstring{ tagHHMMSS[0] } + tagHHMMSS[1]);
		uint32_t b_hh = std::stoi(std::wstring{ hhmmss.tagHHMMSS[0] } + hhmmss.tagHHMMSS[1]);

		uint32_t a_mm = std::stoi(std::wstring{ tagHHMMSS[2] } + tagHHMMSS[3]);
		uint32_t b_mm = std::stoi(std::wstring{ hhmmss.tagHHMMSS[2] } + hhmmss.tagHHMMSS[3]);

		uint32_t a_ss = std::stoi(std::wstring{ tagHHMMSS[4] } + tagHHMMSS[5]);
		uint32_t b_ss = std::stoi(std::wstring{ hhmmss.tagHHMMSS[4] } + hhmmss.tagHHMMSS[5]);

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

	bool CHV4DHHMMSS::operator < (hstring const& s) const
	{
		CHV4DHHMMSS hhmmss{ s };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this < hhmmss);

	}

	bool CHV4DHHMMSS::operator < (HHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this < hhmmss;

	}

	bool CHV4DHHMMSS::operator < (CHV4DHHMMSS const& e) const
	{
		CHV4DHHMMSS hhmmss{ e };

		try
		{
			hhmmss.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		uint32_t a_hh = std::stoi(std::wstring{ tagHHMMSS[0] } + tagHHMMSS[1]);
		uint32_t b_hh = std::stoi(std::wstring{ hhmmss.tagHHMMSS[0] } + hhmmss.tagHHMMSS[1]);

		uint32_t a_mm = std::stoi(std::wstring{ tagHHMMSS[2] } + tagHHMMSS[3]);
		uint32_t b_mm = std::stoi(std::wstring{ hhmmss.tagHHMMSS[2] } + hhmmss.tagHHMMSS[3]);

		uint32_t a_ss = std::stoi(std::wstring{ tagHHMMSS[4] } + tagHHMMSS[5]);
		uint32_t b_ss = std::stoi(std::wstring{ hhmmss.tagHHMMSS[4] } + hhmmss.tagHHMMSS[5]);

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

	HV4DRETURN CHV4DHHMMSS::HV4DCurrentHHMMSS()
	{
		std::time_t time = std::time(nullptr);

		std::tm now{};

		int is_valid = localtime_s(&now, &time);

		if (is_valid != NULL)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		char buffer[128];

		size_t ret = strftime(buffer, sizeof(buffer), "%X", &now);

		if (ret == 0)
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring str = winrt::to_hstring(buffer);

		*this = str;

		try
		{
			HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetHstringHHMMSS(hstring& o) const
	{
		o = hstring{ tagHHMMSS[0] } + tagHHMMSS[1] + ':' + tagHHMMSS[2] + tagHHMMSS[3] + ':' + tagHHMMSS[4] + tagHHMMSS[5];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetNumericHHMMSS(uint32_t& hh, uint32_t& mm, uint32_t& ss) const
	{
		hh = (uint32_t)std::stoi(std::wstring{ tagHHMMSS[0] } + tagHHMMSS[1]);

		mm = (uint32_t)std::stoi(std::wstring{ tagHHMMSS[2] } + tagHHMMSS[3]);

		ss = (uint32_t)std::stoi(std::wstring{ tagHHMMSS[4] } + tagHHMMSS[5]);

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetArrayHHMMSS(wchar_t a[6]) const
	{
		for (uint8_t i = 0; i < 6; i++)
		{
			a[i] = tagHHMMSS[i];

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetWinrtHHMMSS(HHMMSS& o) const
	{
		o.hh = hstring{ tagHHMMSS[0] } + tagHHMMSS[1];
			   
		o.mm = hstring{ tagHHMMSS[2] } + tagHHMMSS[3];
			   
		o.ss = hstring{ tagHHMMSS[4] } + tagHHMMSS[5];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}