#include "pch.h"

#include "CHV4DOFFSET.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DOFFSET::CHV4DOFFSET()
	{


		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(std::wstring const& o, std::wstring const& sz)
	{
		try
		{
			tagOFFSET = o;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagSIZE = sz;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(DWORD const& off_bot, DWORD const& off_upp, DWORD const& sz_bot, DWORD const& sz_upp)
	{
		DWORD array[4]{ off_bot, off_upp, sz_bot, sz_upp };

		memcpy(&tagOFFSET, &array[0], sizeof(uint64_t));

		memcpy(&tagSIZE, &array[2], sizeof(uint64_t));

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(uint64_t const& o, uint64_t const& sz)
	{
		tagOFFSET = o;

		tagSIZE = sz;

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(CHV4DOFFSET const& e)
	{
		tagOFFSET = e.tagOFFSET;

		tagSIZE = e.tagSIZE;

		return;

	}

	void CHV4DOFFSET::operator = (CHV4DOFFSET const& e)
	{
		tagOFFSET = e.tagOFFSET;

		tagSIZE = e.tagSIZE;

		return;

	}

	bool CHV4DOFFSET::operator == (CHV4DOFFSET const& e) const
	{
		return tagOFFSET == e.tagOFFSET && tagSIZE == e.tagSIZE;

	}

	bool CHV4DOFFSET::operator != (CHV4DOFFSET const& e) const
	{
		return !(tagOFFSET == e.tagOFFSET && tagSIZE == e.tagSIZE);

	}

	void CHV4DOFFSET::HV4DGetStringOFFSET(std::wstring& o, std::wstring& sz) const
	{
		tagOFFSET.HV4DGetStringNUMERIC(o);

		tagSIZE.HV4DGetStringNUMERIC(sz);

		return;

	}

	void CHV4DOFFSET::HV4DGetNumericOFFSET(uint64_t& o, uint64_t& sz) const
	{
		tagOFFSET.HV4DGetNUMERIC(o);

		tagSIZE.HV4DGetNUMERIC(sz);

		return;

	}

	void CHV4DOFFSET::HV4DGetDWORDOFFSET(DWORD& o_bot, DWORD& o_upp, DWORD& sz_bot, DWORD& sz_upp) const
	{
		uint64_t offset{}, size{};

		tagOFFSET.HV4DGetNUMERIC(offset);

		tagSIZE.HV4DGetNUMERIC(size);

		memcpy(&o_bot, &((DWORD*)&offset)[0], sizeof(DWORD));

		memcpy(&o_upp, &((DWORD*)&offset)[1], sizeof(DWORD));

		memcpy(&sz_bot, &((DWORD*)&size)[0], sizeof(DWORD));

		memcpy(&sz_upp, &((DWORD*)&size)[1], sizeof(DWORD));

		return;

	}

}