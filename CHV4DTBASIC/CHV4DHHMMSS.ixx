export module CHV4DHHMMSS;

import <vector>;

import <string>;

import <ctime>;

import <stdexcept>;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DHHMMSS
	{
	public:
		CHV4DHHMMSS();

		CHV4DHHMMSS(std::wstring const&);

		CHV4DHHMMSS(CHV4DHHMMSS const&);

	private:
		void HV4DIsValidHHMMSS(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DHHMMSS const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DHHMMSS const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DHHMMSS const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DHHMMSS const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DHHMMSS const&) const;

		operator std::wstring() const;

		operator std::tuple<uint8_t, uint8_t, uint8_t>() const;

		void operator()();

	private:
		std::wstring tagHHMMSS{};

	private:
		const std::vector<std::wstring> HV4DHourW{ L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10",
			L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23" };

		const std::vector<std::wstring> HV4D59W{ L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10",
			L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"26", L"27", L"28",
			L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
			L"45", L"46", L"47", L"48", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59" };

	};

}


namespace CHV4D::CHV4DTBASIC
{
	CHV4DHHMMSS::CHV4DHHMMSS()
	{

		return;

	}

	CHV4DHHMMSS::CHV4DHHMMSS(std::wstring const& s)
	{
		try
		{
			HV4DIsValidHHMMSS(s);

		}
		catch (std::domain_error)
		{
			tagHHMMSS.clear();

			throw std::invalid_argument("");

		}

		tagHHMMSS = s;

		return;

	}

	CHV4DHHMMSS::CHV4DHHMMSS(CHV4DHHMMSS const& e)
	{
		tagHHMMSS = e.tagHHMMSS;

		return;

	}

	void CHV4DHHMMSS::HV4DIsValidHHMMSS(std::wstring const& s) const
	{
		if (s.size() == 8)
		{
			throw std::domain_error("");

		}

		if (s[2] != ':' || s[5] != ':')
		{
			throw std::domain_error("");

		}

		std::vector<std::wstring>::const_iterator citt{};

		citt = std::find(HV4DHourW.begin(), HV4DHourW.end(), std::wstring{ s[0], s[1] });

		if (citt == HV4DHourW.end())
		{
			throw std::domain_error("");

		}

		citt = std::find(HV4D59W.begin(), HV4D59W.end(), std::wstring{ s[3], s[4] });

		if (citt == HV4D59W.end())
		{
			throw std::domain_error("");

		}

		citt = std::find(HV4D59W.begin(), HV4D59W.end(), std::wstring{ s[6], s[7] });

		if (citt == HV4D59W.end())
		{
			throw std::domain_error("");

		}

		return;

	}

	void CHV4DHHMMSS::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidHHMMSS(s);

		}
		catch (std::domain_error)
		{
			tagHHMMSS.clear();

			throw std::invalid_argument("");

		}

		tagHHMMSS = s;

		return;

	}

	void CHV4DHHMMSS::operator = (CHV4DHHMMSS const& e)
	{
		tagHHMMSS = e.tagHHMMSS;

		return;

	}

	bool CHV4DHHMMSS::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidHHMMSS(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHHMMSS.compare(s) == 0;

	}

	bool CHV4DHHMMSS::operator == (CHV4DHHMMSS const& e) const
	{
		return tagHHMMSS.compare(e.tagHHMMSS) == 0;

	}

	bool CHV4DHHMMSS::operator != (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidHHMMSS(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHHMMSS.compare(s) != 0;

	}

	bool CHV4DHHMMSS::operator != (CHV4DHHMMSS const& e) const
	{
		return tagHHMMSS.compare(e.tagHHMMSS) != 0;

	}

	bool CHV4DHHMMSS::operator > (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidHHMMSS(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHHMMSS.compare(s) > 0;

	}

	bool CHV4DHHMMSS::operator > (CHV4DHHMMSS const& e) const
	{
		return tagHHMMSS.compare(e.tagHHMMSS) > 0;

	}

	bool CHV4DHHMMSS::operator < (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidHHMMSS(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHHMMSS.compare(s) < 0;

	}

	bool CHV4DHHMMSS::operator < (CHV4DHHMMSS const& e) const
	{
		return tagHHMMSS.compare(e.tagHHMMSS) > 0;

	}

	CHV4DHHMMSS::operator std::wstring() const
	{
		return std::wstring{ tagHHMMSS[0], tagHHMMSS[1], ':', tagHHMMSS[2], tagHHMMSS[3], ':', tagHHMMSS[4], tagHHMMSS[5] };

	}

	CHV4DHHMMSS::operator std::tuple<uint8_t, uint8_t, uint8_t>() const
	{
		return std::tuple{
			(uint8_t)std::stoi(std::wstring{tagHHMMSS[0]} + tagHHMMSS[1]),
			(uint8_t)std::stoi(std::wstring{ tagHHMMSS[2] } + tagHHMMSS[3]),
			(uint8_t)std::stoi(std::wstring{ tagHHMMSS[4] } + tagHHMMSS[5]) };

	}

	void CHV4DHHMMSS::operator()()
	{
		std::time_t time = std::time(nullptr);

		std::tm now{};

		int is_valid = localtime_s(&now, &time);

		if (is_valid != NULL)
		{
			tagHHMMSS.clear();

			throw std::overflow_error("localtime failed.");

		}

		char buffer[128];

		size_t ret = strftime(buffer, sizeof(buffer), "%X", &now);

		if (ret == 0)
		{
			tagHHMMSS.clear();

			throw std::underflow_error("format time failed.");

		}

		std::wstring str{ &buffer[0], &buffer[strlen(buffer)] };

		tagHHMMSS = str;

		try
		{
			HV4DIsValidHHMMSS(tagHHMMSS);

		}
		catch (std::domain_error)
		{
			tagHHMMSS.clear();

			throw std::domain_error("");

		}

		return;

	}

}
