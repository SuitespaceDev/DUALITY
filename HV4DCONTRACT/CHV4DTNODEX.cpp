#include "pch.h"

#include "CHV4DSYSFILE.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DWINRT;

using namespace pugi;

namespace winrt::HV4D::HV4DDUALITY
{
	CHV4DSYSFILE::CHV4DSYSFILE()
	{
		HVID = CHV4DHVID{};

		MMM = CHV4DMMM{};

		MMDDYYYY = CHV4DMMDDYYYY{};

		HHMMSS = CHV4DHHMMSS{};

		NAME = CHV4DMAXPATH{};

		FILE = CHV4DABS{};

		OFFSET = CHV4DNUMERIC{};

		OFFSETSZ = CHV4DNUMERIC{};

		FILEOFFSET = CHV4DNUMERIC{};

		FILEOFFSETSZ = CHV4DNUMERIC{};

		return;

	}

	CHV4DSYSFILE::CHV4DSYSFILE(
		HV4DHVID		const& hvid,
		HV4DMMM			const& mmm,
		HV4DMMDDYYYY    const& mmddyyyy,
		HV4DHHMMSS		const& hhmmss,
		HV4DMAXPATH		const& name,
		HV4DABS			const& file,
		HV4DNUMERIC		const& offset,
		HV4DNUMERIC		const& offsetsz,
		HV4DNUMERIC		const& file_offset,
		HV4DNUMERIC		const& file_offsetsz)
	{
		HVID = hvid;

		MMM = mmm;

		MMDDYYYY = mmddyyyy;

		HHMMSS = hhmmss;

		NAME = name;

		FILE = file;

		OFFSET = offset;

		OFFSETSZ = offsetsz;

		FILEOFFSET = file_offset;

		FILEOFFSETSZ = file_offsetsz;

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DSYSFILE::CHV4DSYSFILE(
		HV4D::HV4DDUALITY::CHV4DHVID		const& hvid,
		HV4D::HV4DDUALITY::CHV4DMMM			const& mmm,
		HV4D::HV4DDUALITY::CHV4DMMDDYYYY	const& mmddyyyy,
		HV4D::HV4DDUALITY::CHV4DHHMMSS		const& hhmmss,
		HV4D::HV4DDUALITY::CHV4DMAXPATH		const& name,
		HV4D::HV4DDUALITY::CHV4DABS			const& file,
		HV4D::HV4DDUALITY::CHV4DNUMERIC		const& offset,
		HV4D::HV4DDUALITY::CHV4DNUMERIC		const& offsetsz,
		HV4D::HV4DDUALITY::CHV4DNUMERIC		const& file_offset,
		HV4D::HV4DDUALITY::CHV4DNUMERIC		const& file_offsetsz)
	{
		HVID = hvid;

		MMM = mmm;

		MMDDYYYY = mmddyyyy;

		HHMMSS = hhmmss;

		NAME = name;

		FILE = file;

		OFFSET = offset;

		OFFSETSZ = offsetsz;

		FILEOFFSET = file_offset;

		FILEOFFSETSZ = file_offsetsz;

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DSYSFILE::CHV4DSYSFILE(HV4D_SYSTEM_FILE_DESC const& e)
	{
		HVID = e.hvid;

		MMM = e.mmm;

		MMDDYYYY = e.mmddyyyy;

		HHMMSS = e.hhmmss;

		NAME = e.name;

		FILE = e.file;

		OFFSET = e.offset.o;

		OFFSETSZ = e.offset.sz;

		FILEOFFSET = e.fileoff.o;

		FILEOFFSETSZ = e.fileoff.sz;

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DSYSFILE::HV4DIsValidSystemFile()
	{
		if (HVID == CHV4DHVID{} &&
			MMM == CHV4DMMM{} &&
			MMDDYYYY == CHV4DMMDDYYYY{} &&
			HHMMSS == CHV4DHHMMSS{} &&
			NAME == CHV4DMAXPATH{} &&
			FILE == CHV4DABS{} &&
			OFFSET == CHV4DNUMERIC{} &&
			OFFSETSZ == CHV4DNUMERIC{} &&
			OFFSET == CHV4DNUMERIC{} &&
			FILEOFFSETSZ == CHV4DNUMERIC{})
		{
			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		HV4DRETURN error_hvid{};
		HV4DRETURN error_mmm{};
		HV4DRETURN error_mmddyyyy{};
		HV4DRETURN error_hhmmss{};
		HV4DRETURN error_name{};
		HV4DRETURN error_file{};
		HV4DRETURN error_offset{};
		HV4DRETURN error_offsetsz{};
		HV4DRETURN error_file_offset{};
		HV4DRETURN error_file_offsetsz{};

		try
		{
			HVID.HV4DIsValidGUID();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_hvid = thrown;

			}

		}

		try
		{
			MMM.HV4DIsValidMMM();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_mmm = thrown;

			}

		}

		try
		{
			MMDDYYYY.HV4DIsValidMMDDYYYY();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_mmddyyyy = thrown;

			}

		}

		try
		{
			HHMMSS.HV4DIsValidHHMMSS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_hhmmss = thrown;

			}

		}

		try
		{
			NAME.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_name = thrown;

			}

		}

		try
		{
			FILE.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_file = thrown;

			}

		}

		try
		{
			OFFSET.HV4DIsValidNUMERIC();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_offset = thrown;

			}

		}

		try
		{
			OFFSETSZ.HV4DIsValidNUMERIC();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_offsetsz = thrown;

			}

		}

		try
		{
			FILEOFFSET.HV4DIsValidNUMERIC();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_file_offset = thrown;

			}

		}

		try
		{
			FILEOFFSETSZ.HV4DIsValidNUMERIC();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else
			{
				error_file_offsetsz = thrown;

			}

		}

		if (error_hvid == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_mmm == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_mmddyyyy == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_hhmmss == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_name == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_file == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_offset == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_offsetsz == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_file_offset == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED &&
			error_file_offsetsz == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemFile();

			throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	void CHV4DSYSFILE::HV4DClearSystemFile()
	{
		HVID = CHV4DHVID{};

		MMM = CHV4DMMM{};

		MMDDYYYY = CHV4DMMDDYYYY{};

		HHMMSS = CHV4DHHMMSS{};

		NAME = CHV4DMAXPATH{};

		FILE = CHV4DABS{};

		OFFSET = CHV4DNUMERIC{};

		OFFSETSZ = CHV4DNUMERIC{};

		FILEOFFSET = CHV4DNUMERIC{};

		FILEOFFSETSZ = CHV4DNUMERIC{};

		return;

	}

	void CHV4DSYSFILE::operator = (HV4D_SYSTEM_FILE_DESC const& e)
	{
		HVID = e.hvid;

		MMM = e.mmm;

		MMDDYYYY = e.mmddyyyy;

		HHMMSS = e.hhmmss;

		NAME = e.name;

		FILE = e.file;

		OFFSET = e.offset.o;

		OFFSETSZ = e.offset.sz;

		FILEOFFSET = e.fileoff.o;

		FILEOFFSETSZ = e.fileoff.sz;

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DSYSFILE::operator = (CHV4DSYSFILE const& e)
	{
		HVID = e.HVID;

		MMM = e.MMM;

		MMDDYYYY = e.MMDDYYYY;

		HHMMSS = e.HHMMSS;

		NAME = e.NAME;

		FILE = e.FILE;

		OFFSET = e.OFFSET;

		OFFSETSZ = e.OFFSETSZ;

		FILEOFFSET = e.FILEOFFSET;

		FILEOFFSETSZ = e.FILEOFFSETSZ;

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	bool CHV4DSYSFILE::operator == (HV4D_SYSTEM_FILE_DESC const& e)
	{
		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DSYSFILE sysfile{ e };

		try
		{
			sysfile.HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == sysfile;

	}

	bool CHV4DSYSFILE::operator == (CHV4DSYSFILE const& e)
	{
		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DSYSFILE sysfile{ e };

		try
		{
			sysfile.HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		bool ret = true;

		if (HVID != e.HVID) ret = false;

		if (MMM != e.MMM) ret = false;

		if (MMDDYYYY != e.MMDDYYYY) ret = false;

		if (HHMMSS != e.HHMMSS) ret = false;

		if (NAME != e.NAME) ret = false;

		if (FILE != e.FILE) ret = false;

		if (OFFSET != e.OFFSET) ret = false;

		if (OFFSETSZ != e.OFFSETSZ) ret = false;

		if (FILEOFFSET != e.FILEOFFSET) ret = false;

		if (FILEOFFSETSZ != e.FILEOFFSETSZ) ret = false;

		return ret;

	}

	bool CHV4DSYSFILE::operator != (HV4D_SYSTEM_FILE_DESC const& e)
	{
		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DSYSFILE sysfile{ e };

		try
		{
			sysfile.HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == sysfile);

	}

	bool CHV4DSYSFILE::operator != (CHV4DSYSFILE const& e)
	{
		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DSYSFILE sysfile{ e };

		try
		{
			sysfile.HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == sysfile);

	}

	HV4DRETURN CHV4DSYSFILE::HV4DGetWinrtSystemFile(HV4D_SYSTEM_FILE_DESC& o)
	{
		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		if (HVID.HV4DGetWinrtGUID(o.hvid) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (MMM.HV4DGetWinrtMMM(o.mmm) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (MMDDYYYY.HV4DGetWinrtMMDDYYYY(o.mmddyyyy) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (HHMMSS.HV4DGetWinrtHHMMSS(o.hhmmss) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (NAME.HV4DGetWinrtMAXPATH(o.name) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (FILE.HV4DGetWinrtABS(o.file) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (OFFSET.HV4DGetWinrtNUMERIC(o.offset.o) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (OFFSETSZ.HV4DGetWinrtNUMERIC(o.offset.sz) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (FILEOFFSET.HV4DGetWinrtNUMERIC(o.fileoff.o) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (FILEOFFSETSZ.HV4DGetWinrtNUMERIC(o.fileoff.sz) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			o = HV4D_SYSTEM_FILE_DESC{};

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWritepVoidSystemFile(void* pvoid)
	{
		wchar_t buffer[2048]{ '\0' };

		wchar_t* pbuffer = buffer;

		wchar_t hvid[32]{ '\0' };

		if (HVID.HV4DGetArrayGUID(hvid) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, hvid, sizeof(hvid));

		pbuffer += 32;

		wchar_t mmm[7]{ '\0' };

		if (MMM.HV4DGetArrayMMM(mmm) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, mmm, sizeof(mmm));

		pbuffer += 7;

		wchar_t mmddyyyy[8]{ '\0' };

		if (MMDDYYYY.HV4DGetArrayMMDDYYYY(mmddyyyy) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, mmddyyyy, sizeof(mmddyyyy));

		pbuffer += 8;

		wchar_t hhmmss[6]{ '\0' };

		if (HHMMSS.HV4DGetArrayHHMMSS(hhmmss) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, hhmmss, sizeof(hhmmss));

		pbuffer += 6;

		wchar_t name[256]{ '\0' };

		if (NAME.HV4DGetArrayMAXPATH(name) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, name, sizeof(name));

		pbuffer += 256;

		wchar_t path[256]{ '\0' };

		wchar_t file[256]{ '\0' };

		if (FILE.HV4DGetArrayABS(path, file) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, path, sizeof(path));

		pbuffer += 256;

		memcpy(pbuffer, file, sizeof(file));

		pbuffer += 256;

		wchar_t offset[4]{ '\0' };

		if (OFFSET.HV4DGetArrayNUMERIC(offset) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, offset, sizeof(offset));

		pbuffer += 4;

		wchar_t size[4]{ '\0' };

		if (OFFSETSZ.HV4DGetArrayNUMERIC(size) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, size, sizeof(size));

		pbuffer += 4;

		wchar_t file_offset[4]{ '\0' };

		if (FILEOFFSET.HV4DGetArrayNUMERIC(file_offset) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, file_offset, sizeof(file_offset));

		pbuffer += 4;

		wchar_t file_size[4]{ '\0' };

		if (FILEOFFSETSZ.HV4DGetArrayNUMERIC(file_size) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			memset(pvoid, '\0', sizeof(buffer));

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		memcpy(pbuffer, file_size, sizeof(file_size));

		pbuffer += 4;

		memcpy(pvoid, buffer, sizeof(buffer));

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadpVoidSystemFile(void* pvoid)
	{
		HV4DClearSystemFile();

		wchar_t* pbuffer = (wchar_t*)pvoid;

		wchar_t hvid[256]{};

		memcpy(hvid, pbuffer, sizeof(hvid));

		try
		{
			HVID = winrt::hstring(hvid);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 32;

		wchar_t mmm[7]{};

		memcpy(mmm, pbuffer, sizeof(mmm));

		try
		{
			MMM = winrt::hstring(hvid);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 7;

		wchar_t mmddyyyy[8]{};

		memcpy(mmddyyyy, pbuffer, sizeof(mmddyyyy));

		try
		{
			MMDDYYYY = winrt::hstring(mmddyyyy);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 6;

		wchar_t hhmmss[6]{};

		memcpy(hhmmss, pbuffer, sizeof(hhmmss));

		try
		{
			HHMMSS = winrt::hstring(hhmmss);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 6;

		wchar_t name[256]{};

		memcpy(name, pbuffer, sizeof(name));

		try
		{
			NAME = winrt::hstring(name);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 256;

		wchar_t filep[256]{};

		memcpy(filep, pbuffer, sizeof(filep));

		wchar_t file[256]{};

		memcpy(file, pbuffer, sizeof(file));

		try
		{
			FILE = CHV4DABS{ winrt::hstring(filep), winrt::hstring(file) };

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 512;

		wchar_t offset[4]{};

		memcpy(offset, pbuffer, sizeof(offset));

		try
		{
			OFFSET = winrt::hstring(offset);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 4;

		wchar_t offsetsz[4]{};

		memcpy(offsetsz, pbuffer, sizeof(offsetsz));

		try
		{
			OFFSETSZ = winrt::hstring(offsetsz);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 4;

		wchar_t file_offset[4]{};

		memcpy(file_offset, pbuffer, sizeof(file_offset));

		try
		{
			FILEOFFSET = winrt::hstring(file_offset);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 4;

		wchar_t file_offsetsz[4]{};

		memcpy(file_offsetsz, pbuffer, sizeof(file_offsetsz));

		try
		{
			FILEOFFSETSZ = winrt::hstring(file_offsetsz);

		}
		catch (HV4DRETURN)
		{
			HV4DClearSystemFile();

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		pbuffer += 4;

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			return thrown;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadNodeSystemFile(xml_node const& e)
	{
		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		xml_attribute PropertyName{};

		hstring ValuePropertyName{ L"" };

		for (Property = Property.child(L"Property"); Property; Property.next_sibling(L"Property"))
		{
			PropertyName = Property.attribute(L"PropertyName");

			if (!PropertyName)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValuePropertyName = PropertyName.value();

			HV4D_SYSTEM_FILE_FIELD_ID index{};

			try
			{
				index = HV4DMapSystemFileFieldHstringToID()->at(ValuePropertyName);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			switch (index) {

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_GUID:

				if (HV4DReadHVID(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_MMM:

				if (HV4DReadMMM(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_MMDDYYYY:

				if (HV4DReadMMDDYYYY(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_HHMMSS:

				if (HV4DReadHHMMSS(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_NAME:

				if (HV4DReadNAME(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_PATH:

				if (HV4DReadFILEPATH(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILE:

				if (HV4DReadFILE(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_OFFSET:

				if (HV4DReadOFFSET(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_SIZE:

				if (HV4DReadOFFSETSZ(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILEOFFSET:

				if (HV4DReadFILEOFFSET(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILESIZE:

				if (HV4DReadFILEOFFSETSZ(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteNodeSystemFile(xml_node const& e)
	{
		if (!e)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		try
		{
			HV4DIsValidSystemFile();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				HV4DClearSystemFile();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		xml_node Property{ e };

		xml_attribute PropertyName{};

		hstring ValuePropertyName{ L"" };

		for (Property = Property.child(L"Property"); Property; Property.next_sibling(L"Property"))
		{
			PropertyName = Property.attribute(L"PropertyName");

			if (!PropertyName)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValuePropertyName = PropertyName.value();

			HV4D_SYSTEM_FILE_FIELD_ID index{};

			try
			{
				index = HV4DMapSystemFileFieldHstringToID()->at(ValuePropertyName);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			switch (index) {

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_GUID:

				if (HV4DWriteHVID(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_MMM:

				if (HV4DWriteMMM(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_MMDDYYYY:

				if (HV4DWriteMMDDYYYY(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_HHMMSS:

				if (HV4DWriteHHMMSS(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_NAME:

				if (HV4DWriteNAME(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_PATH:

				if (HV4DWriteFILEPATH(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILE:

				if (HV4DWriteFILE(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_OFFSET:

				if (HV4DWriteOFFSET(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_SIZE:

				if (HV4DWriteOFFSETSZ(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILEOFFSET:

				if (HV4DWriteFILEOFFSET(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILESIZE:

				if (HV4DWriteFILEOFFSETSZ(Property) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				break;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DValidateNodeSystemFile(xml_node const& e, hstring const& t)
	{
		xml_node SystemFile{ e };

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		xml_attribute FileType{};

		hstring ValueFileType{ L"" };

		FileType = SystemFile.attribute(L"FileType");

		if (!FileType)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		ValueFileType = FileType.value();

		if (ValueFileType != t)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		HV4D_SYSTEM_FILE_DESC WinrtSystemFileDesc{};

		if (HV4DGetWinrtSystemFile(WinrtSystemFileDesc) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		xml_node Property{};

		xml_attribute PropertyName{};

		hstring ValuePropertyName{ L"" };

		hstring Value{ L"" };

		for (Property = SystemFile.child(L"Property"); Property; Property.next_sibling(L"Property"))
		{
			PropertyName = Property.attribute(L"PropertyName");

			if (ValueFileType != L"FDUALITY")
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValuePropertyName = PropertyName.value();

			HV4D_SYSTEM_FILE_FIELD_ID id{};

			try
			{
				id = HV4DMapSystemFileFieldHstringToID()->at(ValuePropertyName);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			Value = Property.value();

			switch (id) {

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_GUID:

			{
				CHV4DHVID hvid{};

				try
				{
					hvid == Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (hvid != WinrtSystemFileDesc.hvid)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_MMM:

			{
				CHV4DMMM mmm{};

				try
				{
					mmm = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (mmm != WinrtSystemFileDesc.mmm)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_MMDDYYYY:

			{
				CHV4DMMDDYYYY mmddyyyy{};

				try
				{
					mmddyyyy = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (mmddyyyy != WinrtSystemFileDesc.mmddyyyy)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_HHMMSS:

			{
				CHV4DHHMMSS hhmmss{};

				try
				{
					hhmmss = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (hhmmss != WinrtSystemFileDesc.hhmmss)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_NAME:

			{
				CHV4DMAXPATH name{};

				try
				{
					name = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (name != WinrtSystemFileDesc.name)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_PATH:

			{
				CHV4DMAXPATH path{};

				try
				{
					path = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (HV4DHasSymbols(Value) != HV4DRETURN::HV4D_FALSE)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (path != WinrtSystemFileDesc.file.p)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILE:

			{
				CHV4DMAXPATH file{};

				try
				{
					file = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (HV4DHasSymbols(Value) != HV4DRETURN::HV4D_FALSE)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (file != WinrtSystemFileDesc.file.f)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_OFFSET:

			{
				CHV4DNUMERIC offset{};

				try
				{
					offset = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (offset != WinrtSystemFileDesc.offset.o)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_SIZE:

			{
				CHV4DNUMERIC sz{};

				try
				{
					sz = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (sz != WinrtSystemFileDesc.offset.sz)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILEOFFSET:

			{
				CHV4DNUMERIC offset{};

				try
				{
					offset = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (offset != WinrtSystemFileDesc.fileoff.o)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			case HV4D_SYSTEM_FILE_FIELD_ID::HV4D_FILESIZE:

			{
				CHV4DNUMERIC sz{};

				try
				{
					sz = Value;

				}
				catch (HV4DRETURN)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (sz != WinrtSystemFileDesc.fileoff.sz)
				{
					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

			}

				break;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadHVID(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		hstring val = Property.value();

		try
		{
			HVID = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteHVID(xml_node const& e)
	{
		hstring hvid{};

		if (HVID.HV4DGetHstringGUID(hvid) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(hvid.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadMMM(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			MMM = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteMMM(xml_node const& e)
	{
		hstring mmm{};

		if (MMM.HV4DGetHstringMMM(mmm) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(mmm.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadMMDDYYYY(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			MMDDYYYY = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteMMDDYYYY(xml_node const& e)
	{
		hstring mmddyyyy{};

		if (MMDDYYYY.HV4DGetHstringMMDDYYYY(mmddyyyy) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(mmddyyyy.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadHHMMSS(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			HHMMSS = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteHHMMSS(xml_node const& e)
	{
		hstring hhmmss{};

		if (NAME.HV4DGetHstringMAXPATH(hhmmss) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(hhmmss.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadNAME(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			NAME = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteNAME(xml_node const& e)
	{
		hstring name{};

		if (NAME.HV4DGetHstringMAXPATH(name) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(name.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadFILEPATH(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val{}, other{};

		if (FILE.HV4DGetHstringABS(val, other) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		val = Property.value();

		try
		{
			FILE = CHV4DABS{ val, other };

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteFILEPATH(xml_node const& e)
	{
		hstring path{}, dll{};

		if (FILE.HV4DGetHstringABS(path, dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(path.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadFILE(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring other{}, val{};

		if (FILE.HV4DGetHstringABS(other, val) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		val = Property.value();

		try
		{
			FILE = CHV4DABS{ other, val };

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteFILE(xml_node const& e)
	{
		hstring path{}, dll{};

		if (FILE.HV4DGetHstringABS(path, dll) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(dll.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadOFFSET(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			OFFSET = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteOFFSET(xml_node const& e)
	{
		hstring off{};

		if (OFFSET.HV4DGetHstringNUMERIC(off) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(off.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadOFFSETSZ(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			OFFSETSZ = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteOFFSETSZ(xml_node const& e)
	{
		hstring sz{};

		if (OFFSETSZ.HV4DGetHstringNUMERIC(sz) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(sz.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadFILEOFFSET(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			FILEOFFSET = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteFILEOFFSET(xml_node const& e)
	{
		hstring off{};

		if (FILEOFFSET.HV4DGetHstringNUMERIC(off) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(off.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DReadFILEOFFSETSZ(xml_node const& n)
	{
		xml_node Property{ n };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		hstring val = Property.value();

		try
		{
			FILEOFFSETSZ = val;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DSYSFILE::HV4DWriteFILEOFFSETSZ(xml_node const& e)
	{
		hstring sz{};

		if (FILEOFFSETSZ.HV4DGetHstringNUMERIC(sz) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		xml_node Property{ e };

		if (!Property)
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		if (Property.set_value(sz.c_str()))
		{
			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}