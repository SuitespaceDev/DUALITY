export module CHV4DOFFSET;

import std;

import CHV4DNUMERIC;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DOFFSET
	{
	public:
		CHV4DOFFSET();

		CHV4DOFFSET(std::wstring const& l, std::wstring const& u);

		CHV4DOFFSET(unsigned long const& lo, unsigned long const& uo, unsigned long const& lsz, unsigned long const& usz);

		CHV4DOFFSET(std::uint64_t const& l, std::uint64_t const& u);

		CHV4DOFFSET(CHV4DOFFSET const&);

	public:
		void operator = (std::tuple<std::wstring const&, std::wstring const&>);

		void operator = (std::tuple<unsigned long, unsigned long, unsigned long, unsigned long>);

		void operator = (std::tuple<std::uint64_t, std::uint64_t>);

		void operator = (CHV4DOFFSET const&);

		bool operator == (CHV4DOFFSET const&) const;

		bool operator != (CHV4DOFFSET const&) const;

		operator std::tuple<std::wstring, std::wstring>() const;

		operator std::tuple<std::uint64_t, std::uint64_t>() const;

		operator std::tuple<unsigned long, unsigned long, unsigned long, unsigned long>() const;

	private:
		CHV4DNUMERIC tagOFFSET{};

		CHV4DNUMERIC tagSIZE{};

	};

}

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

	CHV4DOFFSET::CHV4DOFFSET(unsigned long const& off_bot, unsigned long const& off_upp, unsigned long const& sz_bot, unsigned long const& sz_upp)
	{
		unsigned long array[4]{ off_bot, off_upp, sz_bot, sz_upp };

		std::memcpy(&tagOFFSET, &array[0], sizeof(std::uint64_t));

		std::memcpy(&tagSIZE, &array[2], sizeof(std::uint64_t));

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(std::uint64_t const& o, std::uint64_t const& sz)
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

	void CHV4DOFFSET::operator = (std::tuple<unsigned long, unsigned long, unsigned long, unsigned long> e)
	{
		unsigned long array[4]{ std::get<0>(e), std::get<1>(e), std::get<2>(e), std::get<3>(e) };

		std::memcpy(&tagOFFSET, &array[0], sizeof(std::uint64_t));

		std::memcpy(&tagSIZE, &array[2], sizeof(std::uint64_t));

		return;

	}

	void CHV4DOFFSET::operator = (std::tuple<std::uint64_t, std::uint64_t> e)
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

	CHV4DOFFSET::operator std::tuple<std::uint64_t, std::uint64_t>() const
	{
		return std::tuple{ tagOFFSET, tagSIZE };

	}

	CHV4DOFFSET::operator std::tuple<unsigned long, unsigned long, unsigned long, unsigned long>() const
	{
		unsigned long offset_top{}, offset_bot{}, size_top{}, size_bot{};

		std::memcpy(&offset_bot, &((unsigned long*)&tagOFFSET)[0], sizeof(unsigned long));

		std::memcpy(&offset_top, &((unsigned long*)&tagOFFSET)[1], sizeof(unsigned long));

		std::memcpy(&size_bot, &((unsigned long*)&tagSIZE)[0], sizeof(unsigned long));

		std::memcpy(&size_top, &((unsigned long*)&tagSIZE)[1], sizeof(unsigned long));

		return std::tuple{ offset_bot, offset_top, size_bot, size_top };

	}

}