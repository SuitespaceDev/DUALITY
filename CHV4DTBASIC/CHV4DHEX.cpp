module;

#include <string>

#include <cstdint>

#include <vector>

#include <stdexcept>

module CHV4DTBASIC:CHV4DHEX;

namespace CHV4D::CHV4DTBASIC
{
	CHV4DHEX::CHV4DHEX()
	{

		return;

	}

	CHV4DHEX::CHV4DHEX(std::uint64_t const& n)
	{
		tagHEX = std::to_wstring(n);

		return;

	}

	CHV4DHEX::CHV4DHEX(std::wstring const& n)
	{
		try
		{
			HV4DIsValidHEX(n);

		}
		catch (std::domain_error)
		{
			tagHEX.clear();

			throw std::invalid_argument("");

		}

		tagHEX = n;

		return;

	}

	CHV4DHEX::CHV4DHEX(CHV4DHEX const& e)
	{
		tagHEX = e.tagHEX;

		return;

	}

	void CHV4DHEX::HV4DIsValidHEX(std::wstring const& s) const
	{
		if (s.size() > 16)
		{
			throw std::domain_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagHEX.begin(); itt != tagHEX.end(); itt++)
		{
			citt = std::find(HV4DHexW.begin(), HV4DHexW.end(), *itt);

			if (citt == HV4DHexW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DHEX::operator = (std::uint64_t const& n)
	{
		tagHEX = std::to_wstring(n);

		return;

	}

	void CHV4DHEX::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidHEX(s);

		}
		catch (std::domain_error)
		{
			tagHEX.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DHEX::operator = (CHV4DHEX const& e)
	{
		tagHEX = e.tagHEX;

		return;

	}

	bool CHV4DHEX::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidHEX(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHEX.compare(s) == 0;

	}

	bool CHV4DHEX::operator == (CHV4DHEX const& e) const
	{
		return tagHEX.compare(e.tagHEX) == 0;

	}

	CHV4DHEX::operator std::wstring() const
	{
		return tagHEX;

	}

	CHV4DHEX::operator std::uint64_t() const
	{
		return std::wcstoull(tagHEX.c_str(), nullptr, 16);

	}

}