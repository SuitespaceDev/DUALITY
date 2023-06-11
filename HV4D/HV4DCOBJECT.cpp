#include "pch.h"
#include "HV4DCOBJECT.h"
#if __has_include("HV4DCOBJECT.g.cpp")
#include "HV4DCOBJECT.g.cpp"
#endif

namespace winrt::HV4D::implementation
{
	HV4DCOBJECT::HV4DCOBJECT()
	{

		return;

	}

	HV4DCOBJECT::HV4DCOBJECT(WFC::IMap<winrt::guid, IInspectable> initializers)
	{


		return;

	}

	winrt::Windows::Foundation::Collections::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DCOBJECT::HV4DSupportedInterfaces()
	{


		return SupportedInterfaces;

	}

	void HV4DCOBJECT::HV4DListSupportedInterfaces()
	{
		SupportedInterfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();



	}

	winrt::guid HV4DCOBJECT::HV4DUuidOfInstance()
	{



	}

	uint64_t HV4DCOBJECT::HV4DCreatedDateTime()
	{



	}

	uint64_t HV4DCOBJECT::HV4DUpdatedDateTime()
	{



	}

	winrt::guid HV4DCOBJECT::HV4DUuidOfClassObject() 
	{ 
	

		return winrt::guid{L"{839C965B-45FC-475A-A163-57A83D712293}"}; 
	
	}

	winrt::hstring HV4DCOBJECT::HV4DNameOfClassObject()
	{



	}

	winrt::guid HV4DCOBJECT::HV4DUuidOfCollection() 
	{ 
		
		
		return winrt::guid{L"{05EAF3E1-F4E5-458B-BD95-A7121C22826A}"}; 
	
	}

	void HV4DCOBJECT::HV4DSetUuidOfInstance()
	{



	}

	void HV4DCOBJECT::HV4DSetCreatedDateTime()
	{



	}

	void HV4DCOBJECT::HV4DSetUpdatedDateTime()
	{



	}

	HV4D::IHV4DTTYPE HV4DCOBJECT::HV4DGetTType()
	{



	}

	HV4D::IHV4DSERVICE HV4DCOBJECT::HV4DGetService()
	{



	}

}
