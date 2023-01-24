module;

#include <guiddef.h>

module CHV4DTBASIC:CHV4DKEY;

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
		return ((tagHVID == e.tagHVID) && (tagMAXPATH == e.tagMAXPATH));

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
		return !(tagHVID > e.tagHVID && tagMAXPATH == e.tagMAXPATH);

	}

	CHV4DKEY::operator std::tuple<std::wstring, std::wstring>() const
	{
		return std::tuple{ tagHVID, tagMAXPATH };

	}

	CHV4DKEY::operator std::tuple<GUID, std::wstring>() const
	{
		return std::tuple{ tagHVID, tagMAXPATH };

	}

	CHV4DKEY::operator std::tuple<CHV4DHVID, CHV4DMAXPATH>() const
	{
		return std::tuple{ tagHVID, tagMAXPATH };

	}

}