module;

#include <time.h>

export module CHV4DMMDDYYYY;

import std;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMMDDYYYY
	{
	public:
		CHV4DMMDDYYYY();

		CHV4DMMDDYYYY(std::wstring const&);

		CHV4DMMDDYYYY(CHV4DMMDDYYYY const&);

	private:
		void HV4DIsValidMMDDYYYY(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMMDDYYYY const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMMDDYYYY const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMMDDYYYY const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMMDDYYYY const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMMDDYYYY const&) const;

		operator std::wstring() const;

		operator std::tuple<long, long, long>() const;

		void operator()();

	private:
		std::wstring tagMMDDYYYY{};

	private:
		const std::vector<wchar_t> HV4DNumericW{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

		const std::unordered_map<std::wstring, std::wstring> HV4DMMDDW{
			{ L"01"	,L"31" },
			{ L"02"	,L"28" },
			{ L"03"	,L"31" },
			{ L"04"	,L"30" },
			{ L"05"	,L"31" },
			{ L"06"	,L"30" },
			{ L"07"	,L"31" },
			{ L"08"	,L"31" },
			{ L"09"	,L"30" },
			{ L"10"	,L"31" },
			{ L"11"	,L"30" },
			{ L"12" ,L"31" } };

		const std::vector<std::wstring> HV4DLeapW{ L"2004", L"2008", L"2012", L"2016", L"2020", L"2024", L"2028", L"2032",
			L"2036", L"2040", L"2044", L"2048", L"2052", L"2056", L"2060", L"2064", L"2068", L"2072", L"2076", L"2080",
			L"2084", L"2088", L"2092", L"2096" };

	};

}

namespace CHV4D::CHV4DTBASIC
{
	CHV4DMMDDYYYY::CHV4DMMDDYYYY()
	{

		return;

	}

	CHV4DMMDDYYYY::CHV4DMMDDYYYY(std::wstring const& s)
	{
		try
		{
			HV4DIsValidMMDDYYYY(s);

		}
		catch (std::domain_error)
		{
			tagMMDDYYYY.clear();

			throw std::invalid_argument("");

		}

		tagMMDDYYYY = s;

		return;

	}

	CHV4DMMDDYYYY::CHV4DMMDDYYYY(CHV4DMMDDYYYY const& e)
	{
		tagMMDDYYYY = e.tagMMDDYYYY;

		return;

	}

	void CHV4DMMDDYYYY::HV4DIsValidMMDDYYYY(std::wstring const& s) const
	{

		if (s.size() != 10)
		{
			throw std::domain_error("");

		}

		if (s[2] != '/' || s[5] != '/')
		{
			throw std::domain_error("");

		}

		std::vector<wchar_t>::const_iterator nitt{};

		for (std::uint8_t i = 0; i < 10; i++)
		{
			nitt = std::find(HV4DNumericW.begin(), HV4DNumericW.end(), s[i]);

			if (nitt == HV4DNumericW.end())
			{
				throw std::domain_error("");

			}

			if (i == 2 || i == 5)
			{
				i++;

			}

		}

		std::uint64_t dd_max{};

		try
		{
			dd_max = std::wcstoull(HV4DMMDDW.at(std::wstring{ s[0], s[1] }).c_str(), nullptr, 10);

		}
		catch (std::out_of_range)
		{
			throw std::domain_error("");

		}

		std::uint64_t mm = std::wcstoull(std::wstring{ s[0], s[1] }.c_str(), nullptr, 10);

		std::uint64_t dd = std::wcstoull(std::wstring{ s[3], s[4] }.c_str(), nullptr, 10);

		std::uint64_t yy = std::wcstoull(std::wstring{ &s[6], &s[9] }.c_str(), nullptr, 10);

		std::vector<std::wstring>::const_iterator citt{};

		citt = std::find(HV4DLeapW.begin(), HV4DLeapW.end(), std::wstring{ &s[6], &s[9] });

		if (citt != HV4DLeapW.end() && mm == 2)
		{
			dd_max += 1;

		}

		if (dd > dd_max)
		{
			throw std::domain_error("");

		}

		if (yy < 2004 || 2096 < yy)
		{
			throw std::domain_error("");

		}

		return;

	}

	void CHV4DMMDDYYYY::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidMMDDYYYY(s);

		}
		catch (std::domain_error)
		{
			tagMMDDYYYY.clear();

			throw std::invalid_argument("");

		}

		tagMMDDYYYY = s;

		return;

	}

	void CHV4DMMDDYYYY::operator = (CHV4DMMDDYYYY const& e)
	{
		tagMMDDYYYY = e.tagMMDDYYYY;

		return;

	}

	bool CHV4DMMDDYYYY::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMDDYYYY(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagMMDDYYYY.compare(s) == 0;

	}

	bool CHV4DMMDDYYYY::operator == (CHV4DMMDDYYYY const& e) const
	{
		return tagMMDDYYYY.compare(e.tagMMDDYYYY) == 0;

	}

	bool CHV4DMMDDYYYY::operator != (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMDDYYYY(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagMMDDYYYY.compare(s) != 0;

	}

	bool CHV4DMMDDYYYY::operator != (CHV4DMMDDYYYY const& e) const
	{
		return tagMMDDYYYY.compare(e.tagMMDDYYYY) != 0;

	}

	bool CHV4DMMDDYYYY::operator > (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMDDYYYY(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this > CHV4DMMDDYYYY{ s };

	}

	bool CHV4DMMDDYYYY::operator > (CHV4DMMDDYYYY const& e) const
	{
		std::uint64_t a_mm = std::wcstoull(std::wstring{ tagMMDDYYYY[0], tagMMDDYYYY[1] }.c_str(), nullptr, 10);
		std::uint64_t b_mm = std::wcstoull(std::wstring{ e.tagMMDDYYYY[0], e.tagMMDDYYYY[1] }.c_str(), nullptr, 10);

		std::uint64_t a_dd = std::wcstoull(std::wstring{ tagMMDDYYYY[3], tagMMDDYYYY[4] }.c_str(), nullptr, 10);
		std::uint64_t b_dd = std::wcstoull(std::wstring{ e.tagMMDDYYYY[3], e.tagMMDDYYYY[4] }.c_str(), nullptr, 10);

		std::uint64_t a_yyyy = std::wcstoull(std::wstring{ &tagMMDDYYYY[6], &tagMMDDYYYY[9] }.c_str(), nullptr, 10);
		std::uint64_t b_yyyy = std::wcstoull(std::wstring{ &e.tagMMDDYYYY[6], &e.tagMMDDYYYY[9] }.c_str(), nullptr, 10);

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
		try
		{
			HV4DIsValidMMDDYYYY(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this < CHV4DMMDDYYYY{ s };

	}

	bool CHV4DMMDDYYYY::operator < (CHV4DMMDDYYYY const& e) const
	{
		std::uint64_t a_mm = std::wcstoull(std::wstring{ tagMMDDYYYY[0], tagMMDDYYYY[1] }.c_str(), nullptr, 10);
		std::uint64_t b_mm = std::wcstoull(std::wstring{ e.tagMMDDYYYY[0], e.tagMMDDYYYY[1] }.c_str(), nullptr, 10);

		std::uint64_t a_dd = std::wcstoull(std::wstring{ tagMMDDYYYY[3], tagMMDDYYYY[4] }.c_str(), nullptr, 10);
		std::uint64_t b_dd = std::wcstoull(std::wstring{ e.tagMMDDYYYY[3], e.tagMMDDYYYY[4] }.c_str(), nullptr, 10);

		std::uint64_t a_yyyy = std::wcstoull(std::wstring{ &tagMMDDYYYY[6], &tagMMDDYYYY[9] }.c_str(), nullptr, 10);
		std::uint64_t b_yyyy = std::wcstoull(std::wstring{ &e.tagMMDDYYYY[6], &e.tagMMDDYYYY[9] }.c_str(), nullptr, 10);

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

	CHV4DMMDDYYYY::operator std::wstring() const
	{
		return tagMMDDYYYY;

	}

	CHV4DMMDDYYYY::operator std::tuple<long, long, long>() const
	{
		return std::tuple{
			std::wcstoul(tagMMDDYYYY.substr(0, 2).c_str(), nullptr, 10),
			std::wcstoul(tagMMDDYYYY.substr(3, 4).c_str(), nullptr, 10),
			std::wcstoul(tagMMDDYYYY.substr(6, 9).c_str(), nullptr, 10) };

	}

	void CHV4DMMDDYYYY::operator()()
	{
		std::time_t t = std::time(nullptr);

		std::tm* now{};

		int result = ::localtime_s(now, &t);

		if (result == NULL)
		{
			tagMMDDYYYY.clear();

			throw std::overflow_error("localtime failed.");

		}

		char buffer[128];

		size_t ret = std::strftime(buffer, sizeof(buffer), "%m/%d/%Y", now);

		if (ret == 0)
		{
			tagMMDDYYYY.clear();

			throw std::overflow_error("localtime failed.");

		}

		std::wstring str{ &buffer[0], &buffer[127] };

		tagMMDDYYYY = str;

		try
		{
			HV4DIsValidMMDDYYYY(tagMMDDYYYY);

		}
		catch (std::domain_error)
		{
			tagMMDDYYYY.clear();

			throw std::domain_error("");

		}

		return;

	}

}