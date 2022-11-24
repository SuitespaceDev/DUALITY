#include "pch.h"
#include "UserVMContact.xaml.h"
#if __has_include("UserVMContact.g.cpp")
#include "UserVMContact.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Microsoft::UI::Xaml;

namespace winrt::Duality23::implementation
{
    UserVMContact::UserVMContact()
    {
        InitializeComponent();

        return;

    }

	hstring UserVMContact::LabelUserName() 
	{ 
		
		return label_user_name; 
	
	}

	void UserVMContact::LabelUserName(hstring e) 
	{ 
		label_user_name = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueUserName()
	{ 
		
		return value_user_name; 
	
	}

	void UserVMContact::ValueUserName(hstring e) 
	{ 
		value_user_name = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelAddressOne() 
	{ 
		
		return label_address_one; 
	
	}

	void UserVMContact::LabelAddressOne(hstring e)
	{ 
		label_address_one = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueAddressOne() 
	{ 
		
		return value_address_one; 
	
	}

	void UserVMContact::ValueAddressOne(hstring e) 
	{ 
		value_address_one = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelAddressTwo() 
	{ 
		
		return label_address_two; 
	
	}

	void UserVMContact::LabelAddressTwo(hstring e) 
	{ 
		label_address_two = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueAddressTwo() 
	{ 
		
		return value_address_two; 
	
	}

	void UserVMContact::ValueAddressTwo(hstring e) 
	{ 
		value_address_two = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelCity() 
	{ 
		
		return label_city; 
	
	}

	void UserVMContact::LabelCity(hstring e) 
	{ 
		label_city = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueCity() 
	{ 
		
		return value_city; 
	
	}

	void UserVMContact::ValueCity(hstring e) 
	{ 
		value_city = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelRegion() 
	{ 
		
		return label_region; 
	
	}

	void UserVMContact::LabelRegion(hstring e) 
	{ 
		label_region = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueRegion() 
	{ 
		
		return value_region; 
	
	}

	void UserVMContact::ValueRegion(hstring e) 
	{ 
		value_region = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelEMail() 
	{ 
		
		return label_email; 
	
	}

	void UserVMContact::LabelEMail(hstring e) 
	{ 
		label_email = e; 

		return;

	}

	hstring UserVMContact::ValueEMail() 
	{ 
		
		return value_email; 
	
	}

	void UserVMContact::ValueEMail(hstring e) 
	{ 
		value_email = e; 

		return;

	}

	hstring UserVMContact::LabelPrimaryPhone() 
	{ 
		
		return label_primary_phone; 
	
	}

	void UserVMContact::LabelPrimaryPhone(hstring e) 
	{ 
		label_primary_phone = e; 

		return;

	}

	hstring UserVMContact::ValuePrimaryPhone() 
	{ 
		
		return value_primary_phone; 
	
	}

	void UserVMContact::ValuePrimaryPhone(hstring e) 
	{ 
		value_primary_phone = e; 

		return;

	}

	hstring UserVMContact::LabelSecondaryPhone() 
	{ 
		
		return label_secondary_phone; 
	
	}

	void UserVMContact::LabelSecondaryPhone(hstring e) 
	{ 
		label_secondary_phone = e; 

		return;

	}

	hstring UserVMContact::ValueSecondaryPhone() 
	{ 
		
		return value_secondary_phone; 
	
	}

	void UserVMContact::ValueSecondaryPhone(hstring e) 
	{ 
		value_secondary_phone = e; 

		return;

	}

}
