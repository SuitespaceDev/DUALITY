export module CHV4DMMM;

import std;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMMM
	{
	public:
		CHV4DMMM();

		CHV4DMMM(std::wstring const&);

		CHV4DMMM(std::uint32_t const&, std::uint32_t const&, std::uint32_t const&);

		CHV4DMMM(CHV4DMMM const&);

	private:
		void HV4DIsValidMMM(std::wstring const&) const;

	public:
		void operator = (std::tuple<std::uint32_t, std::uint32_t, std::uint32_t>);

		void operator = (std::wstring const&);

		void operator = (CHV4DMMM const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMMM const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMMM const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMMM const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMMM const&) const;

		operator std::wstring() const;

		operator std::tuple<std::uint32_t, std::uint32_t, std::uint32_t>() const;

	private:
		std::wstring tagMMM{};

	private:
		const std::vector<wchar_t> HV4DNumericW{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	};

}


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

	CHV4DMMM::CHV4DMMM(std::uint32_t const& mil, std::uint32_t const& maj, std::uint32_t const& min)
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

		if (!(s[1] == '.' && s[5] == '.'))
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

	void CHV4DMMM::operator = (std::tuple<std::uint32_t, std::uint32_t, std::uint32_t> e)
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

	CHV4DMMM::operator std::wstring() const
	{
		return tagMMM;

	}

	CHV4DMMM::operator std::tuple<std::uint32_t, std::uint32_t, std::uint32_t>() const
	{
		std::uint32_t mil{}, maj{}, min{};

		std::wstring str_mil{ tagMMM[0] };

		std::wstring str_maj{ &tagMMM[1], &tagMMM[3] };

		std::wstring str_min{ &tagMMM[4], &tagMMM[6] };

		mil = std::wcstoul(str_mil.c_str(), nullptr, 10);

		maj = std::wcstoul(str_maj.c_str(), nullptr, 10);

		min = std::wcstoul(str_min.c_str(), nullptr, 10);

		return std::tuple{ mil, maj, min };

	}

}