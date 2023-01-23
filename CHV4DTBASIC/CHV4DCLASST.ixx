export module CHV4DCLASST;

import std;

import CHV4DMAXPATH;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DCLASST
	{
	public:
		CHV4DCLASST();

		CHV4DCLASST(std::wstring const&, std::wstring const&);

		CHV4DCLASST(CHV4DMAXPATH const&, CHV4DMAXPATH const&);

		CHV4DCLASST(CHV4DCLASST const&);

	public:
		void operator = (std::tuple<std::wstring const&, std::wstring const&>);

		void operator = (CHV4DCLASST const&);

		bool operator == (CHV4DCLASST const&) const;

		bool operator != (CHV4DCLASST const&) const;

		operator std::tuple<std::wstring, std::wstring>() const;

		operator std::tuple<CHV4DMAXPATH, CHV4DMAXPATH>() const;

	private:
		CHV4DMAXPATH tagNAMESPACE{};

		CHV4DMAXPATH tagWINRTCLASS{};

	};

}

namespace CHV4D::CHV4DTBASIC
{
	CHV4DCLASST::CHV4DCLASST()
	{


		return;

	}

	CHV4DCLASST::CHV4DCLASST(std::wstring const& ns, std::wstring const& c)
	{
		try
		{
			tagNAMESPACE = ns;

		}
		catch (std::invalid_argument)
		{
			tagNAMESPACE = CHV4DMAXPATH{};

			tagWINRTCLASS = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		try
		{
			tagWINRTCLASS = c;

		}
		catch (std::invalid_argument)
		{
			tagNAMESPACE = CHV4DMAXPATH{};

			tagWINRTCLASS = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DCLASST::CHV4DCLASST(CHV4DMAXPATH const& ns, CHV4DMAXPATH const& c)
	{
		tagNAMESPACE = ns;

		tagWINRTCLASS = c;

	}

	CHV4DCLASST::CHV4DCLASST(CHV4DCLASST const& e)
	{
		tagNAMESPACE = e.tagNAMESPACE;

		tagWINRTCLASS = e.tagWINRTCLASS;

		return;

	}

	void CHV4DCLASST::operator = (std::tuple<std::wstring const&, std::wstring const&> e)
	{
		try
		{
			tagNAMESPACE = std::get<0>(e);

		}
		catch (std::invalid_argument)
		{
			tagNAMESPACE = CHV4DMAXPATH{};

			tagWINRTCLASS = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		try
		{
			tagWINRTCLASS = std::get<1>(e);

		}
		catch (std::invalid_argument)
		{
			tagNAMESPACE = CHV4DMAXPATH{};

			tagWINRTCLASS = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DCLASST::operator = (CHV4DCLASST const& e)
	{
		tagNAMESPACE = e.tagNAMESPACE;

		tagWINRTCLASS = e.tagWINRTCLASS;

		return;

	}

	bool CHV4DCLASST::operator == (CHV4DCLASST const& e) const
	{

		return tagNAMESPACE == e.tagNAMESPACE && tagWINRTCLASS == e.tagWINRTCLASS;

	}

	bool CHV4DCLASST::operator != (CHV4DCLASST const& e) const
	{
		return !(tagNAMESPACE == e.tagNAMESPACE && tagWINRTCLASS == e.tagWINRTCLASS);

	}

	CHV4DCLASST::operator std::tuple<std::wstring, std::wstring>() const
	{
		return std::tuple{ tagNAMESPACE, tagWINRTCLASS };

	}

	CHV4DCLASST::operator std::tuple<CHV4DMAXPATH, CHV4DMAXPATH>() const
	{
		return std::tuple{ tagNAMESPACE, tagWINRTCLASS };

	}

}