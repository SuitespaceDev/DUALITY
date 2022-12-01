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
		try
		{
			tagHVID = hvid;

		}
		catch (std::invalid_argument)
		{
			tagHVID = CHV4DHVID{};

			tagMAXPATH = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		try
		{
			tagMAXPATH = mp;

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
		try
		{
			tagHVID = hvid;

		}
		catch (std::invalid_argument)
		{
			tagHVID = CHV4DHVID{};

			tagMAXPATH = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		try
		{
			tagMAXPATH = mp;

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

		return;

	}

	void CHV4DKEY::operator = (CHV4DKEY const& e)
	{
		tagHVID = e.tagHVID;

		tagMAXPATH = e.tagMAXPATH;

		return;

	}

	bool CHV4DKEY::operator == (CHV4DKEY const& e) const
	{
		return tagHVID == e.tagHVID && tagMAXPATH == e.tagMAXPATH;

	}

	bool CHV4DKEY::operator != (CHV4DKEY const& e) const
	{
		return !(tagHVID == e.tagHVID && tagMAXPATH == e.tagMAXPATH);

	}

	bool CHV4DKEY::operator < (CHV4DKEY const& e) const
	{
		return !(tagHVID < e.tagHVID && tagMAXPATH == e.tagMAXPATH);

	}

	bool CHV4DKEY::operator > (CHV4DKEY const& e) const
	{
		return !(tagHVID > e.tagHVID&& tagMAXPATH == e.tagMAXPATH);

	}

	void CHV4DKEY::HV4DGetStringKEY(std::wstring& hvid, std::wstring& mp) const
	{
		tagHVID.HV4DGetStringHVID(hvid);

		tagMAXPATH.HV4DGetStringMAXPATH(mp);

		return;

	}

	void CHV4DKEY::HV4DGetNativeKEY(GUID& hvid, std::wstring& mp) const
	{
		tagHVID.HV4DGetNativeHVID(hvid);

		tagMAXPATH.HV4DGetStringMAXPATH(mp);

		return;

	}

	void CHV4DKEY::HV4DGetHVIDMAXPATH(CHV4DHVID& hvid, CHV4DMAXPATH& mp) const
	{
		hvid = tagHVID;

		mp = tagMAXPATH;

		return;

	}

}