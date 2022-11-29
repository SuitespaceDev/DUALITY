#include "pch.h"

#include "CHV4DCLASST.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DCLASST::CHV4DCLASST()
	{
		memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

		memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

		return;

	}

	CHV4DCLASST::CHV4DCLASST(std::wstring const& ns, std::wstring const& c)
	{
		if (ns.size() > 256 || c.size() > 256)
		{
			throw std::invalid_argument("");

		}

		for (uint32_t i = 0; i < ns.size(); i++)
		{
			tagNAMESPACE[i] = ns[i];

		}

		for (uint32_t i = 0; i < c.size(); i++)
		{
			tagWINRTCLASS[i] = c[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (std::domain_error)
		{
			memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

			memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DCLASST::CHV4DCLASST(CHV4DCLASST const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagNAMESPACE[i] = e.tagNAMESPACE[i];

			tagWINRTCLASS[i] = e.tagWINRTCLASS[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (std::domain_error)
		{
			memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

			memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DCLASST::HV4DIsValidCLASST() const
	{
		if ((tagNAMESPACE[0] == '\0') || (tagWINRTCLASS[0] == '\0'))
		{
			throw std::underflow_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagNAMESPACE)
		{
			if (itt == '\0') break;

			if (itt != '.')
			{
				citt = std::find(SYSCALL::HV4DAlphaNumericW()->begin(), SYSCALL::HV4DAlphaNumericW()->end(), itt);

				if (citt == SYSCALL::HV4DAlphaNumericW()->end())
				{
					throw std::domain_error("");

				}

			}

		}

		for (wchar_t itt : tagWINRTCLASS)
		{
			if (itt == '\0') break;

			if (itt != '.')
			{
				citt = std::find(SYSCALL::HV4DAlphaNumericW()->begin(), SYSCALL::HV4DAlphaNumericW()->end(), itt);

				if (citt == SYSCALL::HV4DAlphaNumericW()->end())
				{
					throw std::domain_error("");

				}

			}

		}

		return;

	}

	void CHV4DCLASST::operator = (CHV4DCLASST const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagNAMESPACE[i] = e.tagNAMESPACE[i];

			tagWINRTCLASS[i] = e.tagWINRTCLASS[i];

		}

		try
		{
			HV4DIsValidCLASST();

		}
		catch (std::domain_error)
		{
			memset(tagNAMESPACE, '\0', sizeof(tagNAMESPACE));

			memset(tagWINRTCLASS, '\0', sizeof(tagWINRTCLASS));

			throw std::invalid_argument("");

		}

		return;

	}

	bool CHV4DCLASST::operator == (CHV4DCLASST const& e) const
	{
		CHV4DCLASST classT{ e };

		try
		{
			classT.HV4DIsValidCLASST();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		int ret = memcmp(tagNAMESPACE, classT.tagNAMESPACE, sizeof(tagNAMESPACE));

		if (ret != 0) return false;

		ret = memcmp(tagWINRTCLASS, classT.tagWINRTCLASS, sizeof(tagWINRTCLASS));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DCLASST::operator != (CHV4DCLASST const& e) const
	{
		CHV4DCLASST classT{ e };

		try
		{
			classT.HV4DIsValidCLASST();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == classT);

	}

	void CHV4DCLASST::HV4DGetStringCLASST(std::wstring& ns, std::wstring& c) const
	{
		ns = std::wstring{ tagNAMESPACE };

		c = std::wstring{ tagWINRTCLASS };

		return;

	}

	void CHV4DCLASST::HV4DGetArrayCLASST(wchar_t ns[256], wchar_t c[256]) const
	{
		for (uint16_t i = 0; i < 256; i++)
		{
			ns[i] = tagNAMESPACE[i];

			c[i] = tagWINRTCLASS[i];

		}

		return;

	}

}