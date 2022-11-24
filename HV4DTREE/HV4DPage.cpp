#include "pch.h"

#include "HV4DPage.h"

using namespace std;

using namespace winrt;

using namespace winrt::HV4D;


namespace winrt::HV4D::HV4DDRIVEIO
{
	uint32_t NUM_PAGES{ 256 };

	uint64_t PAGE_SIZE{ 4194304 };

	std::vector<HANDLE> MutexArray{ NULL };

	std::vector<char*> Page{ NULL };

	std::vector<std::function<HV4D::HV4DRETURN(const char const*,
		uint64_t const&, uint32_t const&)>> Lambdas{ nullptr };

	HV4DRETURN HV4DResizePage(uint64_t const& s, uint32_t& x, uint64_t& r)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;




		return error;

	}

	HV4DRETURN HV4DIndexLambdas()
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		for (size_t i = 0; i < NUM_PAGES; i++)
		{
			MutexArray[i] = CreateMutexA(NULL, FALSE, NULL);

			Lambdas.push_back([](const char const* b, uint64_t const& s, uint32_t const& p)
				{
					HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

					DWORD ret = WaitForSingleObject(MutexArray[p], INFINITE);

					return error;

				});

		}

		return error;

	}

	HV4DRETURN HV4DWriteToPage(const char const* b, uint64_t const& s, uint32_t const& p)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		Lambdas.at(p)(b, s, p);

		//...... do write stuff; asserted(buffer_sz < unallocated page clusters)

		return error;

	}

	HV4DRETURN HV4DReleaseMutexes()
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		for (size_t i = 0; i < NUM_PAGES; i++)
		{
			bool release = ReleaseMutex(MutexArray[i]);

		}

		return error;
	
	}

}