#include "pch.h"

#include "CHV4DMMM.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DMMM::CHV4DMMM()
	{

		return;

	}

	CHV4DMMM::CHV4DMMM(std::wstring const& s)
	{
		try
		{
			HV4DIsValidMMM(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		tagMMM = s;

		return;

	}

	CHV4DMMM::CHV4DMMM(uint32_t const& mil, uint32_t const& maj, uint32_t const& min)
	{
		if (mil > 10 || maj > 999 || min > 999)
		{
			throw std::invalid_argument("");

		}

		tagMMM = std::wstring{ std::to_wstring(mil) + L"." + std::to_wstring(maj) + L"." + std::to_wstring(min) };

	}

	CHV4DMMM::CHV4DMMM(CHV4DMMM const& e)
	{
		tagMMM = e.tagMMM;

		return;

	}

	void CHV4DMMM::HV4DIsValidMMM(std::wstring const& s) const
	{
		if (s.size() != 9)
		{
			throw std::domain_error("");

		}

		if(!(s[1] == '.' && s[5] == '.'))
		{
			throw std::domain_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : s)
		{
			citt = std::find(HV4DNumericW.begin(), HV4DNumericW.end(), itt);

			if (citt == HV4DNumericW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DMMM::operator = (std::tuple<uint32_t, uint32_t, uint32_t> e)
	{
		if (std::get<0>(e) > 10 || std::get<1>(e) > 999 || std::get<2>(e) > 999)
		{
			throw std::invalid_argument("");

		}

		tagMMM = std::wstring{ 
			std::to_wstring(std::get<0>(e)) + L"." + 
			std::to_wstring(std::get<1>(e)) + L"." + 
			std::to_wstring(std::get<2>(e)) };

	}

	void CHV4DMMM::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidMMM(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		tagMMM = s;

		return;

	}

	void CHV4DMMM::operator = (CHV4DMMM const& e)
	{
		tagMMM = e.tagMMM;

		return;

	}

	bool CHV4DMMM::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMM(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagMMM.compare(s) == 0;

	}

	bool CHV4DMMM::operator == (CHV4DMMM const& e) const
	{
		return tagMMM.compare(e.tagMMM) == 0;

	}

	bool CHV4DMMM::operator != (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMM(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagMMM.compare(s) != 0;

	}

	bool CHV4DMMM::operator != (CHV4DMMM const& e) const
	{
		return tagMMM.compare(e.tagMMM) != 0;

	}

	bool CHV4DMMM::operator > (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMM(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagMMM.compare(s) > 0;

	}

	bool CHV4DMMM::operator > (CHV4DMMM const& e) const
	{
		return tagMMM.compare(e.tagMMM) > 0;

	}

	bool CHV4DMMM::operator < (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidMMM(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagMMM.compare(s) < 0;

	}

	bool CHV4DMMM::operator < (CHV4DMMM const& e) const
	{
		return tagMMM.compare(e.tagMMM) < 0;

	}

	CHV4DMMM::operator std::wstring () const
	{
		return tagMMM;

	}

	CHV4DMMM::operator std::tuple<uint32_t, uint32_t, uint32_t>() const
	{
		uint32_t mil{}, maj{}, min{};

		std::wstring str_mil{ tagMMM[0] };

		std::wstring str_maj{ &tagMMM[1], &tagMMM[3] };

		std::wstring str_min{ &tagMMM[4], &tagMMM[6] };

		mil = std::wcstoul(str_mil.c_str(), NULL, 10);

		maj = std::wcstoul(str_maj.c_str(), NULL, 10);

		min = std::wcstoul(str_min.c_str(), NULL, 10);

		return std::tuple{ mil, maj, min };

	}

}