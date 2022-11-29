#include "pch.h"

#include "CHV4DKEY.h"

using namespace winrt;

using namespace winrt::HV4D;

namespace HV4D::CHV4DTBASIC
{
	CHV4DKEY::CHV4DKEY()
	{


		return;

	}

	CHV4DKEY::CHV4DKEY(std::wstring_view const& hvid, std::wstring_view const& mp)
	{
		tagHVID = hvid;

		tagMAXPATH = mp;

		try
		{
			HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw std::invalid_argument;

			}

		}

		return;

	}

	CHV4DKEY::CHV4DKEY(winrt::guid const& hvid, std::wstring_view const& mp)
	{
		tagHVID = hvid;

		tagMAXPATH = mp;

		try
		{
			HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw std::invalid_argument;

			}

		}

		return;

	}

	CHV4DKEY::CHV4DKEY(KEY const& e)
	{
		tagHVID = e.hvid;

		tagMAXPATH = e.n;

		try
		{
			HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw std::invalid_argument;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw std::invalid_argument;

			}

		}

		return;

	}

	void CHV4DKEY::HV4DIsValidKEY() const
	{
		try
		{
			tagHVID.HV4DIsValidHVID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::domain_error;

			}

		}

		try
		{
			tagMAXPATH.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::domain_error;

			}

		}

		return;

	}

	void CHV4DKEY::operator = (KEY const& e)
	{
		tagHVID = e.hvid;

		tagMAXPATH = e.n;

		try
		{
			HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw std::invalid_argument;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw std::invalid_argument;

			}

		}

		return;

	}

	bool CHV4DKEY::operator == (KEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this == key;

	}

	bool CHV4DKEY::operator == (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return this->tagHVID == key.tagHVID && this->tagMAXPATH == key.tagMAXPATH;

	}

	bool CHV4DKEY::operator != (KEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == key);

	}

	bool CHV4DKEY::operator != (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == key);

	}

	bool CHV4DKEY::operator < (KEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return this->tagHVID < key.tagHVID;

	}

	bool CHV4DKEY::operator < (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return this->tagHVID < key.tagHVID;

	}

	bool CHV4DKEY::operator > (KEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return this->tagHVID > key.tagHVID;

	}

	bool CHV4DKEY::operator > (CHV4DKEY const& e) const
	{
		CHV4DKEY key{ e };

		try
		{
			key.HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return this->tagHVID > key.tagHVID;

	}

	void CHV4DKEY::HV4DGetHstringKEY(std::wstring_view& hvid, std::wstring_view& mp) const
	{
		tagHVID.HV4DGetHstringHVID(hvid);

		tagMAXPATH.HV4DGetHstringMAXPATH(mp);

		return;

	}

	void CHV4DKEY::HV4DGetArrayKEY(wchar_t p[256], wchar_t f[256]) const
	{
		tagHVID.HV4DGetArrayHVID(p);

		tagMAXPATH.HV4DGetArrayMAXPATH(f);

		return;

	}

	void CHV4DKEY::HV4DGetWinrtKEY(KEY& o) const
	{
		tagHVID.HV4DGetNativeHVID(o.hvid);

		tagMAXPATH.HV4DGetWinrtMAXPATH(o.n);

		return;

	}

	void CHV4DKEY::HV4DGetNativeKEY(winrt::guid& hvid, std::wstring_view& mp) const
	{
		tagHVID.HV4DGetNativeHVID(hvid);

		tagMAXPATH.HV4DGetHstringMAXPATH(mp);

		return;

	}

}