#include "pch.h"

#include "CHV4DKEY.h"

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI
{
	CHV4DKEY::CHV4DKEY()
	{


		return;

	}

	CHV4DKEY::CHV4DKEY(hstring const& hvid, hstring const& mp)
	{
		tagHVID = hvid;

		tagMAXPATH = mp;

		try
		{
			HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DKEY::CHV4DKEY(winrt::guid const& hvid, hstring const& mp)
	{
		tagHVID = hvid;

		tagMAXPATH = mp;

		try
		{
			HV4DIsValidKEY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		try
		{
			tagMAXPATH.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				tagHVID = CHV4DHVID{};

				tagMAXPATH = CHV4DMAXPATH{};

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return this->tagHVID > key.tagHVID;

	}

	HV4DRETURN CHV4DKEY::HV4DGetHstringKEY(winrt::hstring& hvid, winrt::hstring& mp) const
	{
		tagHVID.HV4DGetHstringHVID(hvid);

		tagMAXPATH.HV4DGetHstringMAXPATH(mp);

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DKEY::HV4DGetArrayKEY(wchar_t p[256], wchar_t f[256]) const
	{
		tagHVID.HV4DGetArrayHVID(p);

		tagMAXPATH.HV4DGetArrayMAXPATH(f);

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DKEY::HV4DGetWinrtKEY(KEY& o) const
	{
		tagHVID.HV4DGetNativeHVID(o.hvid);

		tagMAXPATH.HV4DGetWinrtMAXPATH(o.n);

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DKEY::HV4DGetNativeKEY(winrt::guid& hvid, hstring& mp) const
	{
		tagHVID.HV4DGetNativeHVID(hvid);

		tagMAXPATH.HV4DGetHstringMAXPATH(mp);

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}