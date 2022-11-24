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

	void CHV4DHHMMSS::HV4DIsValidHHMMSS()
	{
		if (tagHHMMSS[0] == '\0')
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagHHMMSS)
		{
			citt = std::find(HV4DNumericW()->begin(), HV4DNumericW()->end(), itt);

			if (citt == HV4DNumericW()->end())
			{
				memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		hstring hh{ L"" + tagHHMMSS[0] + tagHHMMSS[1] };
		hstring mm{ L"" + tagHHMMSS[2] + tagHHMMSS[3] };
		hstring ss{ L"" + tagHHMMSS[4] + tagHHMMSS[5] };

		int sz_hh = std::stoi(hh.c_str());
		int sz_mm = std::stoi(mm.c_str());
		int sz_ss = std::stoi(ss.c_str());

		if ((sz_hh > 23) || (sz_mm > 59) || (sz_ss > 59))
		{
			memset(tagHHMMSS, '\0', sizeof(tagHHMMSS));

			throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

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

	bool CHV4DHHMMSS::operator == (hstring const& s)
	{
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

	bool CHV4DHHMMSS::operator == (HHMMSS const& e)
	{
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

	bool CHV4DHHMMSS::operator == (CHV4DHHMMSS const& e)
	{
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

		for (uint32_t i = 0; i < 6; i++)
		{
			if (tagHHMMSS[i] != hhmmss.tagHHMMSS[i])
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DHHMMSS::operator != (hstring const& s)
	{
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

	bool CHV4DHHMMSS::operator != (HHMMSS const& e)
	{
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

	bool CHV4DHHMMSS::operator != (CHV4DHHMMSS const& e)
	{
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

	bool CHV4DHHMMSS::operator > (hstring const& s)
	{
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

	bool CHV4DHHMMSS::operator > (HHMMSS const& e)
	{
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

	bool CHV4DHHMMSS::operator > (CHV4DHHMMSS const& e)
	{
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

		uint32_t a_hh = std::stoi(std::wstring{ L"" + tagHHMMSS[0] + tagHHMMSS[1] });
		uint32_t b_hh = std::stoi(std::wstring{ L"" + hhmmss.tagHHMMSS[0] + hhmmss.tagHHMMSS[1] });

		uint32_t a_mm = std::stoi(std::wstring{ L"" + tagHHMMSS[2] + tagHHMMSS[3] });
		uint32_t b_mm = std::stoi(std::wstring{ L"" + hhmmss.tagHHMMSS[2] + hhmmss.tagHHMMSS[3] });

		uint32_t a_ss = std::stoi(std::wstring{ L"" + tagHHMMSS[4] + tagHHMMSS[5] });
		uint32_t b_ss = std::stoi(std::wstring{ L"" + hhmmss.tagHHMMSS[4] + hhmmss.tagHHMMSS[5] });

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

	bool CHV4DHHMMSS::operator < (hstring const& s)
	{
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

	bool CHV4DHHMMSS::operator < (HHMMSS const& e)
	{
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

	bool CHV4DHHMMSS::operator < (CHV4DHHMMSS const& e)
	{
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

		uint32_t a_hh = std::stoi(std::wstring{ L"" + tagHHMMSS[0] + tagHHMMSS[1] });
		uint32_t b_hh = std::stoi(std::wstring{ L"" + hhmmss.tagHHMMSS[0] + hhmmss.tagHHMMSS[1] });

		uint32_t a_mm = std::stoi(std::wstring{ L"" + tagHHMMSS[2] + tagHHMMSS[3] });
		uint32_t b_mm = std::stoi(std::wstring{ L"" + hhmmss.tagHHMMSS[2] + hhmmss.tagHHMMSS[3] });

		uint32_t a_ss = std::stoi(std::wstring{ L"" + tagHHMMSS[4] + tagHHMMSS[5] });
		uint32_t b_ss = std::stoi(std::wstring{ L"" + hhmmss.tagHHMMSS[4] + hhmmss.tagHHMMSS[5] });

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

	HV4DRETURN CHV4DHHMMSS::HV4DGetHstringHHMMSS(hstring& o)
	{
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

		o = L"" + tagHHMMSS[0] + tagHHMMSS[1] + ':' + tagHHMMSS[2] + tagHHMMSS[3] + ':' + tagHHMMSS[4] + tagHHMMSS[5] + '\0';

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetNumericHHMMSS(uint32_t& hh, uint32_t& mm, uint32_t& ss)
	{
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

		hh = (uint32_t)std::stoi(L"" + tagHHMMSS[0] + tagHHMMSS[1]);

		mm = (uint32_t)std::stoi(L"" + tagHHMMSS[2] + tagHHMMSS[3]);

		ss = (uint32_t)std::stoi(L"" + tagHHMMSS[4] + tagHHMMSS[5]);

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetArrayHHMMSS(wchar_t a[6])
	{
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

		a = tagHHMMSS;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DHHMMSS::HV4DGetWinrtHHMMSS(HHMMSS& o)
	{
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

		o.hh = L"" + tagHHMMSS[0] + tagHHMMSS[1];

		o.mm = L"" + tagHHMMSS[2] + tagHHMMSS[3];

		o.ss = L"" + tagHHMMSS[4] + tagHHMMSS[5];

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}