export module CHV4DKEY;

import <guiddef.h>;

import <vector>;

import <string>;

import <stdexcept>;

import <tuple>;

import CHV4DHVID;
import CHV4DMAXPATH;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DKEY
	{
	public:
		CHV4DKEY();

		CHV4DKEY(std::wstring const&, std::wstring const&);

		CHV4DKEY(GUID const&, std::wstring const&);

		CHV4DKEY(CHV4DKEY const&);

	public:
		void operator = (CHV4DKEY const&);

		bool operator == (CHV4DKEY const&) const;

		bool operator != (CHV4DKEY const&) const;

		bool operator < (CHV4DKEY const&) const;

		bool operator > (CHV4DKEY const&) const;

		operator std::tuple<std::wstring, std::wstring>() const;

		operator std::tuple<GUID, std::wstring>() const;

		operator std::tuple<CHV4DHVID, CHV4DMAXPATH>() const;

	private:
		CHV4DHVID tagHVID{};

		CHV4DMAXPATH tagMAXPATH{};

	};

	struct CHV4DKEYFN
	{
		std::size_t operator() (CHV4DKEY const& k) const
		{
			std::tuple<GUID, std::wstring> key = k;

			std::size_t h1{}, h2{}, h3;

			memcpy(&h1, &std::get<0>(key), sizeof(long long));

			memcpy(&h2, &std::get<0>(key).Data4, sizeof(long long));

			h1 = h1 ^ h2;

			h3 = std::hash<std::wstring>()(std::get<1>(key));

			return h1 ^ h3;

		}

	};

}

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
		return !(tagHVID < e.tagHVID&& tagMAXPATH == e.tagMAXPATH);

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