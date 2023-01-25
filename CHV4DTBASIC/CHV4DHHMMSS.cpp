module;

#include <string>

#include <vector>

#include <ctime>

#include <stdexcept>

module CHV4DTBASIC:CHV4DHHMMSS;

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

	CHV4DHHMMSS::operator std::tuple<std::uint8_t, std::uint8_t, std::uint8_t>() const
	{
		return std::tuple{
			(std::uint8_t)std::stoi(std::wstring{tagHHMMSS[0]} + tagHHMMSS[1]),
			(std::uint8_t)std::stoi(std::wstring{ tagHHMMSS[2] } + tagHHMMSS[3]),
			(std::uint8_t)std::stoi(std::wstring{ tagHHMMSS[4] } + tagHHMMSS[5]) };

	}

	void CHV4DHHMMSS::operator()()
	{
		std::time_t t = std::time(nullptr);

		std::tm* now{};

		int result = ::localtime_s(now, &t);

		if (result == NULL)
		{
			tagHHMMSS.clear();

			throw std::overflow_error("localtime failed.");

		}

		char buffer[128];

		size_t ret = std::strftime(buffer, sizeof(buffer), "%X", now);

		if (ret == 0)
		{
			tagHHMMSS.clear();

			throw std::underflow_error("format time failed.");

		}

		std::wstring str{ &buffer[0], &buffer[std::strlen(buffer)] };

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
