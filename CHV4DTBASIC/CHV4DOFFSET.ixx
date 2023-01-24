module;

export module CHV4DTBASIC:CHV4DOFFSET;

export import std;

import :CHV4DNUMERIC;

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
