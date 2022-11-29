#include "pch.h"

#include "CHV4DOFFSET.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DOFFSET::CHV4DOFFSET()
	{


		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(DWORD const& off_bot, DWORD const& off_upp, DWORD const& sz_bot, DWORD const& sz_upp)
	{
		memcpy(&tagOFFSET[0], &off_bot, sizeof(DWORD));

		memcpy(&tagOFFSET[2], &off_upp, sizeof(DWORD));

		memcpy(&tagSIZE[0], &sz_bot, sizeof(DWORD));

		memcpy(&tagSIZE[2], &sz_upp, sizeof(DWORD));

		try
		{
			HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			memset(tagOFFSET, '\0', sizeof(tagOFFSET));

			memset(tagSIZE, '\0', sizeof(tagSIZE));

			throw std::invalid_argument{""};

		}

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(uint64_t const& o, uint64_t const& sz)
	{
		memcpy(&tagOFFSET[0], &o, sizeof(uint64_t));

		memcpy(&tagSIZE[0], &sz, sizeof(uint64_t));

		try
		{
			HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			memset(tagOFFSET, '\0', sizeof(tagOFFSET));

			memset(tagSIZE, '\0', sizeof(tagSIZE));

			throw std::invalid_argument{ "" };

		}

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(std::wstring const& o, std::wstring const& sz)
	{
		uint64_t offset{ std::wcstoull(o.c_str(), NULL, 10) }, size{ std::wcstoull(sz.c_str(), NULL, 10) };

		memcpy(&tagOFFSET[0], &offset, sizeof(uint64_t));

		memcpy(&tagSIZE[0], &size, sizeof(uint64_t));

		try
		{
			HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			memset(tagOFFSET, '\0', sizeof(tagOFFSET));

			memset(tagSIZE, '\0', sizeof(tagSIZE));

			throw std::invalid_argument{ "" };

		}

		return;

	}

	CHV4DOFFSET::CHV4DOFFSET(CHV4DOFFSET const& e)
	{
		memcpy(tagOFFSET, e.tagOFFSET, sizeof(tagOFFSET));

		memcpy(tagSIZE, e.tagSIZE, sizeof(tagSIZE));

		try
		{
			HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			memset(tagOFFSET, '\0', sizeof(tagOFFSET));

			memset(tagSIZE, '\0', sizeof(tagSIZE));

			throw std::invalid_argument{ "" };

		}

		return;

	}

	void CHV4DOFFSET::HV4DIsValidOffset() const
	{
		if (wcscmp(tagOFFSET, L"0000") || wcscmp(tagSIZE, L"0000"))
		{
			throw std::underflow_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagOFFSET)
		{
			citt = std::find(SYSCALL::HV4DNumericW()->begin(), SYSCALL::HV4DNumericW()->end(), itt);

			if (citt != SYSCALL::HV4DNumericW()->end())
			{
				throw std::domain_error("");

			}

		}

		for (wchar_t itt : tagSIZE)
		{
			citt = std::find(SYSCALL::HV4DNumericW()->begin(), SYSCALL::HV4DNumericW()->end(), itt);

			if (citt != SYSCALL::HV4DNumericW()->end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DOFFSET::operator = (CHV4DOFFSET const& e)
	{
		CHV4DOFFSET offset{ e };

		for (size_t i = 0; i < 4; i++)
		{
			tagOFFSET[i] = offset.tagOFFSET[i];

			tagSIZE[i] = offset.tagSIZE[i];

		}

		try
		{
			HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			memset(tagOFFSET, '\0', sizeof(tagOFFSET));

			memset(tagSIZE, '\0', sizeof(tagSIZE));

			throw std::invalid_argument{ "" };

		}

		return;

	}

	bool CHV4DOFFSET::operator == (CHV4DOFFSET const& e) const
	{
		CHV4DOFFSET offset{ e };

		try
		{
			offset.HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		for (uint32_t i = 0; i < 4; i++)
		{
			if (tagOFFSET[i] != offset.tagOFFSET[i] || tagSIZE[i] != offset.tagSIZE[i])
			{
				return false;

			}

		}

		int ret = memcmp(tagOFFSET, offset.tagOFFSET, sizeof(tagOFFSET));

		if (ret != 0) return false;

		ret = memcmp(tagSIZE, offset.tagSIZE, sizeof(tagSIZE));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DOFFSET::operator != (CHV4DOFFSET const& e) const
	{
		CHV4DOFFSET offset{ e };

		try
		{
			offset.HV4DIsValidOffset();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == offset);

	}

	void CHV4DOFFSET::HV4DGetStringOFFSET(std::wstring& o, std::wstring& sz) const
	{
		long long ret_off{};

		memcpy(&ret_off, tagOFFSET, sizeof(ret_off));

		o = std::to_wstring(ret_off).c_str();

		long long ret_sz{};

		memcpy(&ret_sz, tagSIZE, sizeof(ret_sz));

		sz = std::to_wstring(ret_sz).c_str();

		return;

	}

	void CHV4DOFFSET::HV4DGetNumericOFFSET(uint64_t& o, uint64_t& sz) const
	{
		memcpy(&o, tagOFFSET, sizeof(uint64_t));

		memcpy(&sz, tagSIZE, sizeof(uint64_t));

		return;

	}

	void CHV4DOFFSET::HV4DGetDWORDOFFSET(DWORD& o_bot, DWORD& o_upp, DWORD& sz_bot, DWORD& sz_upp) const
	{
		memcpy(&o_bot, &tagOFFSET[0], sizeof(DWORD));

		memcpy(&o_upp, &tagOFFSET[2], sizeof(DWORD));

		memcpy(&sz_bot, &tagSIZE[0], sizeof(DWORD));

		memcpy(&sz_upp, &tagSIZE[2], sizeof(DWORD));

		return;

	}

	void CHV4DOFFSET::HV4DGetArrayOFFSET(wchar_t a[4], wchar_t b[4]) const
	{
		for (uint8_t i = 0; i < 4; i++)
		{
			a[i] = tagOFFSET[i];

			b[i] = tagSIZE[i];

		}

		return;

	}

}