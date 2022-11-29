#include "pch.h"

#include "CHV4DMMM.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace HV4D::CHV4DTBASIC
{
	CHV4DMMM::CHV4DMMM()
	{
		memset(tagMMM, '\0', sizeof(tagMMM));

		return;

	}

	CHV4DMMM::CHV4DMMM(std::wstring_view const& s)
	{
		if (s.size() != 9)
		{
			throw std::domain_error;

		}

		if (!(s[1] == '.' && s[5] == '.'))
		{
			throw std::domain_error;

		}

		tagMMM[0] = s[0];
		tagMMM[1] = s[2];
		tagMMM[2] = s[3];
		tagMMM[3] = s[4];
		tagMMM[4] = s[6];
		tagMMM[5] = s[7];
		tagMMM[6] = s[8];

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagMMM, '\0', sizeof(tagMMM));

				throw std::invalid_argument;

			}

		}

		return;

	}

	CHV4DMMM::CHV4DMMM(MMM const& e)
	{
		tagMMM[0] = e.mil[0];
		tagMMM[1] = e.maj[0];
		tagMMM[2] = e.maj[1];
		tagMMM[3] = e.maj[2];
		tagMMM[4] = e.min[0];
		tagMMM[5] = e.min[1];
		tagMMM[6] = e.min[2];

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagMMM, '\0', sizeof(tagMMM));

				throw std::invalid_argument;

			}

		}

		return;

	}

	CHV4DMMM::CHV4DMMM(CHV4DMMM const& e)
	{
		memcpy(tagMMM, e.tagMMM, sizeof(tagMMM));

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagMMM, '\0', sizeof(tagMMM));

				throw std::invalid_argument;

			}

		}

		return;

	}

	void CHV4DMMM::HV4DIsValidMMM() const
	{
		if (tagMMM[0] == '\0')
		{
			throw std::underflow_error;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagMMM)
		{
			citt = std::find(HV4DNumericW()->begin(), HV4DNumericW()->end(), itt);

			if (citt == HV4DNumericW()->end())
			{
				throw std::domain_error;

			}

		}

		return;

	}

	void CHV4DMMM::operator = (std::wstring_view const& s)
	{
		CHV4DMMM mmm{ s };

		for (uint32_t i = 0; i < 7; i++)
		{
			tagMMM[i] = mmm.tagMMM[i];

		}

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagMMM, '\0', sizeof(tagMMM));

				throw std::invalid_argument;

			}

		}

		return;

	}

	void CHV4DMMM::operator = (MMM const& e)
	{
		CHV4DMMM mmm{ e };

		for (uint32_t i = 0; i < 7; i++)
		{
			tagMMM[i] = mmm.tagMMM[i];

		}

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagMMM, '\0', sizeof(tagMMM));

				throw std::invalid_argument;

			}

		}

		return;

	}

	void CHV4DMMM::operator = (CHV4DMMM const& e)
	{
		CHV4DMMM mmm{ e };

		for (uint32_t i = 0; i < 7; i++)
		{
			tagMMM[i] = mmm.tagMMM[i];

		}

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagMMM, '\0', sizeof(tagMMM));

				throw std::invalid_argument;

			}

		}

		return;

	}

	bool CHV4DMMM::operator == (std::wstring_view const& s) const
	{
		CHV4DMMM mmm{ s };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this == mmm;

	}

	bool CHV4DMMM::operator == (MMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this == mmm;

	}

	bool CHV4DMMM::operator == (CHV4DMMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		for (uint32_t i = 0; i < 7; i++)
		{
			if (tagMMM != mmm.tagMMM)
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DMMM::operator != (std::wstring_view const& s) const
	{
		CHV4DMMM mmm{ s };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == mmm);

	}

	bool CHV4DMMM::operator != (MMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == mmm);

	}

	bool CHV4DMMM::operator != (CHV4DMMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == mmm);

	}

	bool CHV4DMMM::operator > (std::wstring_view const& s) const
	{
		CHV4DMMM mmm{ s };

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this > mmm;

	}

	bool CHV4DMMM::operator > (MMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this > mmm;

	}

	bool CHV4DMMM::operator > (CHV4DMMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		int a_mil = std::stoi(std::wstring{ tagMMM[0] });
		int b_mil = std::stoi(std::wstring{ mmm.tagMMM[0] });

		int a_maj = std::stoi(std::wstring{ tagMMM[1] } + tagMMM[2] + tagMMM[3]);
		int b_maj = std::stoi(std::wstring{ mmm.tagMMM[1] } + mmm.tagMMM[2] + mmm.tagMMM[3]);

		int a_min = std::stoi(std::wstring{ tagMMM[4] } + tagMMM[5] + tagMMM[6]);
		int b_min = std::stoi(std::wstring{ mmm.tagMMM[4] } + mmm.tagMMM[5] + mmm.tagMMM[6]);

		if (a_mil > b_mil)
		{
			return true;

		}
		else if (a_mil < b_mil)
		{
			return false;

		}
		else
		{
			if (a_maj > b_maj)
			{
				return true;

			}
			else if (a_maj < b_maj)
			{
				return false;

			}
			else
			{
				if (a_min > b_min)
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

	bool CHV4DMMM::operator < (std::wstring_view const& s) const
	{
		CHV4DMMM mmm{ s };

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this < mmm;

	}

	bool CHV4DMMM::operator < (MMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this < mmm;

	}

	bool CHV4DMMM::operator < (CHV4DMMM const& e) const
	{
		CHV4DMMM mmm{ e };

		try
		{
			mmm.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		int a_mil = std::stoi(std::wstring{ tagMMM[0] });
		int b_mil = std::stoi(std::wstring{ mmm.tagMMM[0] });

		int a_maj = std::stoi(std::wstring{ tagMMM[1] } + tagMMM[2] + tagMMM[3]);
		int b_maj = std::stoi(std::wstring{ mmm.tagMMM[1] } + mmm.tagMMM[2] + mmm.tagMMM[3]);

		int a_min = std::stoi(std::wstring{ tagMMM[4] } + tagMMM[5] + tagMMM[6]);
		int b_min = std::stoi(std::wstring{ mmm.tagMMM[4] } + mmm.tagMMM[5] + mmm.tagMMM[6]);

		if (a_mil < b_mil)
		{
			return true;

		}
		else if (a_mil > b_mil)
		{
			return false;

		}
		else
		{
			if (a_maj < b_maj)
			{
				return true;

			}
			else if (a_maj > b_maj)
			{
				return false;

			}
			else
			{
				if (a_min < b_min)
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

	void CHV4DMMM::HV4DGetHstringMMM(std::wstring_view& o) const
	{
		o = o + tagMMM[0];
		o = o + '.';
		o = o + tagMMM[1];
		o = o + tagMMM[2];
		o = o + tagMMM[3];
		o = o + '.';
		o = o + tagMMM[4];
		o = o + tagMMM[5];
		o = o + tagMMM[6];

		return;

	}

	void CHV4DMMM::HV4DGetNumericMMM(long& mil, long& maj, long& min) const
	{
		std::wstring_view str_mil = std::wstring_view{ tagMMM[0] };

		std::wstring_view str_maj = std::wstring_view{ tagMMM[1] } + tagMMM[2] + tagMMM[3];

		std::wstring_view str_min = std::wstring_view{ tagMMM[4] } + tagMMM[5] + tagMMM[6];

		mil = std::stol(str_mil.c_str());

		maj = std::stol(str_maj.c_str());

		min = std::stol(str_min.c_str());

		return;

	}

	void CHV4DMMM::HV4DGetArrayMMM(wchar_t a[7]) const
	{
		for (uint8_t i = 0; i < 7; i++)
		{
			a[i] = tagMMM[i];
	
		}

		return;

	}

	void CHV4DMMM::HV4DGetWinrtMMM(MMM& e) const
	{
		e.mil = std::wstring_view{ tagMMM[0] };

		e.maj = std::wstring_view{ tagMMM[1] } + tagMMM[2] + tagMMM[3];

		e.min = std::wstring_view{ tagMMM[4] } + tagMMM[5] + tagMMM[6];

		return;

	}

}