module;

export module CHV4DTBASIC:CHV4DHEX;

export import std;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DHEX
	{
	public:
		CHV4DHEX();

		CHV4DHEX(std::uint64_t const&);

		CHV4DHEX(std::wstring const&);

		CHV4DHEX(CHV4DHEX const&);

	private:
		void HV4DIsValidHEX(std::wstring const&) const;

	public:
		void operator = (std::uint64_t const&);

		void operator = (std::wstring const&);

		void operator = (CHV4DHEX const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DHEX const&) const;

		operator std::wstring() const;

		operator std::uint64_t() const;

	private:
		std::wstring tagHEX{};

	private:
		const std::vector<wchar_t> HV4DHexW{ '0', '1', '2', '3', '4', '5', '6', '7', '8',
			'9', 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f' };

	};

}
