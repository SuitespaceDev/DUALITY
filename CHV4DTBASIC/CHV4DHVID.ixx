module;

#include <combaseapi.h>

export module CHV4DTBASIC:CHV4DHVID;

export import std;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DHVID
	{
	public:
		CHV4DHVID();

		CHV4DHVID(std::wstring const&);

		CHV4DHVID(GUID const&);

		CHV4DHVID(CHV4DHVID const&);

	public:
		void operator = (std::wstring const&);

		void operator = (GUID const&);

		void operator = (CHV4DHVID const&);

		bool operator == (std::wstring const&) const;

		bool operator == (GUID const&) const;

		bool operator == (CHV4DHVID const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (GUID const&) const;

		bool operator != (CHV4DHVID const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (GUID const&) const;

		bool operator < (CHV4DHVID const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (GUID const&) const;

		bool operator > (CHV4DHVID const&) const;

		operator std::wstring() const;

		operator GUID const& () const;

		void operator()();

	private:
		void HV4DToString(GUID const&, std::wstring&) const;

		void HV4DToGUID(std::wstring const&, GUID&) const;

	private:
		GUID tagHVID{};

	};

}


namespace CHV4D::CHV4DTBASIC
{
	CHV4DHVID::CHV4DHVID()
	{

		return;

	}

	CHV4DHVID::CHV4DHVID(std::wstring const& s)
	{
		try
		{
			HV4DToGUID(s, tagHVID);

		}
		catch (std::domain_error)
		{
			tagHVID = GUID{};

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DHVID::CHV4DHVID(GUID const& e)
	{
		tagHVID = e;

		return;

	}

	CHV4DHVID::CHV4DHVID(CHV4DHVID const& e)
	{
		tagHVID = e.tagHVID;

		return;

	}

	void CHV4DHVID::operator = (std::wstring const& s)
	{
		try
		{
			HV4DToGUID(s, tagHVID);

		}
		catch (std::domain_error)
		{
			tagHVID = GUID{};

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DHVID::operator = (GUID const& e)
	{
		tagHVID = e;

		return;

	}

	void CHV4DHVID::operator = (CHV4DHVID const& e)
	{
		tagHVID = e.tagHVID;

		return;

	}

	bool CHV4DHVID::operator == (std::wstring const& s) const
	{
		GUID uid{};

		try
		{
			HV4DToGUID(s, uid);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHVID == uid;

	}

	bool CHV4DHVID::operator == (GUID const& e) const
	{
		return tagHVID == e;

	}

	bool CHV4DHVID::operator == (CHV4DHVID const& e) const
	{
		return tagHVID == e.tagHVID;

	}

	bool CHV4DHVID::operator != (std::wstring const& s) const
	{
		GUID uid{};

		try
		{
			HV4DToGUID(s, uid);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHVID != uid;

	}

	bool CHV4DHVID::operator != (GUID const& e) const
	{
		return tagHVID != e;

	}

	bool CHV4DHVID::operator != (CHV4DHVID const& e) const
	{
		return tagHVID != e.tagHVID;

	}

	bool CHV4DHVID::operator < (std::wstring const& s) const
	{
		GUID uid{};

		try
		{
			HV4DToGUID(s, uid);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this < CHV4DHVID{ uid };

	}

	bool CHV4DHVID::operator < (GUID const& e) const
	{
		return *this < CHV4DHVID{ e };

	}

	bool CHV4DHVID::operator < (CHV4DHVID const& e) const
	{
		if (tagHVID.Data1 < e.tagHVID.Data1)
		{
			return true;

		}

		if (tagHVID.Data1 > e.tagHVID.Data1)
		{
			return false;

		}

		if (tagHVID.Data2 < e.tagHVID.Data2)
		{
			return true;

		}

		if (tagHVID.Data2 > e.tagHVID.Data2)
		{
			return false;

		}

		if (tagHVID.Data3 < e.tagHVID.Data3)
		{
			return true;

		}

		if (tagHVID.Data3 > e.tagHVID.Data3)
		{
			return false;

		}

		for (std::uint8_t i = 0; i < 8; i++)
		{
			if (tagHVID.Data4[i] < e.tagHVID.Data4[i])
			{
				return true;

			}

			if (tagHVID.Data4[i] > e.tagHVID.Data4[i])
			{
				return false;

			}

		}

		return false;

	}

	bool CHV4DHVID::operator > (std::wstring const& s) const
	{
		GUID uid{};

		try
		{
			HV4DToGUID(s, uid);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this > CHV4DHVID{ uid };

	}

	bool CHV4DHVID::operator > (GUID const& e) const
	{
		return *this > CHV4DHVID{ e };

	}

	bool CHV4DHVID::operator > (CHV4DHVID const& e) const
	{
		if (tagHVID.Data1 > e.tagHVID.Data1)
		{
			return true;

		}

		if (tagHVID.Data1 < e.tagHVID.Data1)
		{
			return false;

		}

		if (tagHVID.Data2 > e.tagHVID.Data2)
		{
			return true;

		}

		if (tagHVID.Data2 < e.tagHVID.Data2)
		{
			return false;

		}

		if (tagHVID.Data3 > e.tagHVID.Data3)
		{
			return true;

		}

		if (tagHVID.Data3 < e.tagHVID.Data3)
		{
			return false;

		}

		for (std::uint8_t i = 0; i < 8; i++)
		{
			if (tagHVID.Data4[i] > e.tagHVID.Data4[i])
			{
				return true;

			}

			if (tagHVID.Data4[i] < e.tagHVID.Data4[i])
			{
				return false;

			}

		}

		return false;

	}

	CHV4DHVID::operator std::wstring() const
	{
		std::wstring str{};

		HV4DToString(tagHVID, str);

		return str;

	}

	CHV4DHVID::operator GUID const& () const
	{
		return tagHVID;

	}

	void CHV4DHVID::operator()()
	{
		HRESULT ret = CoCreateGuid(&tagHVID);

		if (ret != S_OK)
		{
			throw std::underflow_error("Guid creation failure.");

		}

		return;

	}

	void CHV4DHVID::HV4DToString(GUID const& uid, std::wstring& s) const
	{
		GUID hvid{ uid };

		std::uint8_t i_array[16]{};

		std::uint8_t* data1 = reinterpret_cast<std::uint8_t*>(&hvid.Data1);
		std::uint8_t* data2 = reinterpret_cast<std::uint8_t*>(&hvid.Data2);
		std::uint8_t* data3 = reinterpret_cast<std::uint8_t*>(&hvid.Data3);

		i_array[0] = data1[3];
		i_array[1] = data1[2];
		i_array[2] = data1[1];
		i_array[3] = data1[0];
		i_array[4] = data2[1];
		i_array[5] = data2[0];
		i_array[6] = data3[1];
		i_array[7] = data3[0];
		i_array[8] = (std::uint8_t)hvid.Data4[0];
		i_array[9] = (std::uint8_t)hvid.Data4[1];
		i_array[10] = (std::uint8_t)hvid.Data4[2];
		i_array[11] = (std::uint8_t)hvid.Data4[3];
		i_array[12] = (std::uint8_t)hvid.Data4[4];
		i_array[13] = (std::uint8_t)hvid.Data4[5];
		i_array[14] = (std::uint8_t)hvid.Data4[6];
		i_array[15] = (std::uint8_t)hvid.Data4[7];

		std::vector<std::wstring> view{};

		std::wostringstream ss{};

		for (std::uint8_t i = 0; i < 16; i++)
		{
			ss << std::hex << i_array[i];
			view.push_back(ss.str());

		}

		std::wstring out{ L"{" };

		for (std::uint8_t i = 0; i < 16; i++)
		{
			out = out + view[i];

			if (i == 3) out = out + L"-";
			if (i == 5) out = out + L"-";
			if (i == 7) out = out + L"-";
			if (i == 9) out = out + L"-";

		}

		out = out + L"}";

		s = out;

		return;


	}

	void CHV4DHVID::HV4DToGUID(std::wstring const& s, GUID& uid) const
	{
		uid.Data1 = wcstoul(std::wstring{ &s[1],  &s[9] }.c_str(), nullptr, 16);
		uid.Data2 = (unsigned short)wcstoul(std::wstring{ &s[10], &s[14] }.c_str(), nullptr, 16);
		uid.Data3 = (unsigned short)wcstoul(std::wstring{ &s[15], &s[19] }.c_str(), nullptr, 16);
		uid.Data4[0] = (char)wcstoul(std::wstring{ s[20], s[21] }.c_str(), nullptr, 16);
		uid.Data4[1] = (char)wcstoul(std::wstring{ s[22], s[23] }.c_str(), nullptr, 16);
		uid.Data4[2] = (char)wcstoul(std::wstring{ s[25], s[26] }.c_str(), nullptr, 16);
		uid.Data4[3] = (char)wcstoul(std::wstring{ s[27], s[28] }.c_str(), nullptr, 16);
		uid.Data4[4] = (char)wcstoul(std::wstring{ s[29], s[30] }.c_str(), nullptr, 16);
		uid.Data4[5] = (char)wcstoul(std::wstring{ s[31], s[32] }.c_str(), nullptr, 16);
		uid.Data4[6] = (char)wcstoul(std::wstring{ s[33], s[34] }.c_str(), nullptr, 16);
		uid.Data4[7] = (char)wcstoul(std::wstring{ s[35], s[36] }.c_str(), nullptr, 16);
	}

}