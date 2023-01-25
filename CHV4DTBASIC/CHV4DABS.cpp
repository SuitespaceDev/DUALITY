module;

#include <string>

#include <tuple>

#include <stdexcept>

module CHV4DTBASIC:CHV4DABS;

namespace CHV4D::CHV4DTBASIC
{
	CHV4DABS::CHV4DABS()
	{


		return;

	}

	CHV4DABS::CHV4DABS(std::wstring const& p, std::wstring const& f)
	{
		try
		{
			tagPATH = p;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagFILE = f;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DABS::CHV4DABS(CHV4DMAXPATH const& p, CHV4DMAXPATH const& f)
	{
		tagPATH = p;

		tagFILE = f;

	}

	CHV4DABS::CHV4DABS(CHV4DABS const& e)
	{
		tagPATH = e.tagPATH;

		tagFILE = e.tagFILE;

		return;

	}

	void CHV4DABS::operator = (std::tuple<std::wstring const&, std::wstring const&> abs)
	{
		try
		{
			tagPATH = std::get<0>(abs);

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagFILE = std::get<1>(abs);

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DABS::operator = (CHV4DABS const& e)
	{
		tagPATH = e.tagPATH;

		tagFILE = e.tagFILE;

		return;

	}

	bool CHV4DABS::operator == (CHV4DABS const& e) const
	{
		return tagPATH == e.tagPATH && tagFILE == e.tagFILE;

	}

	bool CHV4DABS::operator != (CHV4DABS const& e) const
	{
		return !(tagPATH == e.tagPATH && tagFILE == e.tagFILE);


	}

	CHV4DABS::operator std::tuple<std::wstring, std::wstring>() const
	{
		return std::tuple{ tagPATH, tagFILE };

	}

	CHV4DABS::operator std::tuple<CHV4DMAXPATH, CHV4DMAXPATH>() const
	{
		return std::tuple{ tagPATH, tagFILE };

	}

}