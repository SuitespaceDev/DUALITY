#include "pch.h"

#include "CHV4DKEY.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DKEY::CHV4DKEY()
	{


		return;

	}

	CHV4DKEY::CHV4DKEY(std::wstring const& hvid, std::wstring const& mp)
	{
		tagHVID = hvid;

		tagMAXPATH = mp;

		try
		{
			HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			tagHVID = CHV4DHVID{};

			tagMAXPATH = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DKEY::CHV4DKEY(GUID const& hvid, std::wstring const& mp)
	{
		tagHVID = hvid;

		tagMAXPATH = mp;

		try
		{
			HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			tagHVID = CHV4DHVID{};

			tagMAXPATH = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DKEY::CHV4DKEY(CHV4DKEY const& e)
	{
		tagHVID = e.tagHVID;

		tagMAXPATH = e.tagMAXPATH;

		try
		{
			HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			tagHVID = CHV4DHVID{};

			tagMAXPATH = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DKEY::HV4DIsValidKEY() const
	{
		try
		{
			tagHVID.HV4DIsValidHVID();

		}
		catch (std::domain_error)
		{
			throw std::domain_error("");

		}

		try
		{
			tagMAXPATH.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::domain_error("");

		}

		return;

	}

	void CHV4DKEY::operator = (CHV4DKEY const& e)
	{
		tagHVID = e.tagHVID;

		tagMAXPATH = e.tagMAXPATH;

		try
		{
			HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			tagHVID = CHV4DHVID{};

			tagMAXPATH = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	bool CHV4DKEY::operator == (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return this->tagHVID == key.tagHVID && this->tagMAXPATH == key.tagMAXPATH;

	}

	bool CHV4DKEY::operator != (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == key);

	}

	bool CHV4DKEY::operator < (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return this->tagHVID < key.tagHVID;

	}

	bool CHV4DKEY::operator > (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return this->tagHVID > key.tagHVID;

	}

	void CHV4DKEY::HV4DGetStringKEY(std::wstring& hvid, std::wstring& mp) const
	{
		tagHVID.HV4DGetStringHVID(hvid);

		tagMAXPATH.HV4DGetStringMAXPATH(mp);

		return;

	}

	void CHV4DKEY::HV4DGetArrayKEY(wchar_t p[256], wchar_t f[256]) const
	{
		tagHVID.HV4DGetArrayHVID(p);

		tagMAXPATH.HV4DGetArrayMAXPATH(f);

		return;

	}

	void CHV4DKEY::HV4DGetNativeKEY(GUID& hvid, std::wstring& mp) const
	{
		tagHVID.HV4DGetNativeHVID(hvid);

		tagMAXPATH.HV4DGetStringMAXPATH(mp);

		return;

	}

}