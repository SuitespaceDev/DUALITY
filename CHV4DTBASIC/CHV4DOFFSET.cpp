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

	void CHV4DOFFSET::operator = (std::tuple<std::wstring const&, std::wstring const&> e)
	{
		try
		{
			tagOFFSET = std::get<0>(e);

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagSIZE = std::get<1>(e);

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DOFFSET::operator = (std::tuple<DWORD, DWORD, DWORD, DWORD> e)
	{
		DWORD array[4]{ std::get<0>(e), std::get<1>(e), std::get<2>(e), std::get<3>(e) };

		memcpy(&tagOFFSET, &array[0], sizeof(uint64_t));

		memcpy(&tagSIZE, &array[2], sizeof(uint64_t));

		return;

	}

	void CHV4DOFFSET::operator = (std::tuple<uint64_t, uint64_t> e)
	{
		tagOFFSET = std::get<0>(e);

		tagSIZE = std::get<1>(e);

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

	CHV4DOFFSET::operator std::tuple<std::wstring, std::wstring>() const
	{
		return std::tuple{ tagOFFSET, tagSIZE };

	}

	CHV4DOFFSET::operator std::tuple<uint64_t, uint64_t>() const
	{
		return std::tuple{ tagOFFSET, tagSIZE };

	}

	CHV4DOFFSET::operator std::tuple<DWORD, DWORD, DWORD, DWORD>() const
	{
		DWORD offset_top{}, offset_bot{}, size_top{}, size_bot{};

		memcpy(&offset_bot, &((DWORD*)&tagOFFSET)[0], sizeof(DWORD));

		memcpy(&offset_top, &((DWORD*)&tagOFFSET)[1], sizeof(DWORD));

		memcpy(&size_bot, &((DWORD*)&tagSIZE)[0], sizeof(DWORD));

		memcpy(&size_top, &((DWORD*)&tagSIZE)[1], sizeof(DWORD));

		return std::tuple{ offset_bot, offset_top, size_bot, size_top };

	}

}