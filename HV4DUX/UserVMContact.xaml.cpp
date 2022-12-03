#include "pch.h"
#include "UserVMContact.xaml.h"
#if __has_include("UserVMContact.g.cpp")
#include "UserVMContact.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
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

	void UserVMContact::LabelUserName(winrt::hstring const& e) 
	{ 
		label_user_name = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueUserName()
	{ 
		
		return value_user_name; 
	
	}

	void UserVMContact::ValueUserName(winrt::hstring const& e) 
	{ 
		value_user_name = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelAddressOne() 
	{ 
		
		return label_address_one; 
	
	}

	void UserVMContact::LabelAddressOne(winrt::hstring const& e)
	{ 
		label_address_one = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueAddressOne() 
	{ 
		
		return value_address_one; 
	
	}

	void UserVMContact::ValueAddressOne(winrt::hstring const& e) 
	{ 
		value_address_one = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelAddressTwo() 
	{ 
		
		return label_address_two; 
	
	}

	void UserVMContact::LabelAddressTwo(winrt::hstring const& e) 
	{ 
		label_address_two = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueAddressTwo() 
	{ 
		
		return value_address_two; 
	
	}

	void UserVMContact::ValueAddressTwo(winrt::hstring const& e) 
	{ 
		value_address_two = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelCity() 
	{ 
		
		return label_city; 
	
	}

	void UserVMContact::LabelCity(winrt::hstring const& e) 
	{ 
		label_city = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueCity() 
	{ 
		
		return value_city; 
	
	}

	void UserVMContact::ValueCity(winrt::hstring const& e) 
	{ 
		value_city = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelRegion() 
	{ 
		
		return label_region; 
	
	}

	void UserVMContact::LabelRegion(winrt::hstring const& e) 
	{ 
		label_region = e; 
	
		return;
	
	}

	hstring UserVMContact::ValueRegion() 
	{ 
		
		return value_region; 
	
	}

	void UserVMContact::ValueRegion(winrt::hstring const& e) 
	{ 
		value_region = e; 
	
		return;
	
	}

	hstring UserVMContact::LabelEMail() 
	{ 
		
		return label_email; 
	
	}

	void UserVMContact::LabelEMail(winrt::hstring const& e) 
	{ 
		label_email = e; 

		return;

	}

	hstring UserVMContact::ValueEMail() 
	{ 
		
		return value_email; 
	
	}

	void UserVMContact::ValueEMail(winrt::hstring const& e) 
	{ 
		value_email = e; 

		return;

	}

	hstring UserVMContact::LabelPrimaryPhone() 
	{ 
		
		return label_primary_phone; 
	
	}

	void UserVMContact::LabelPrimaryPhone(winrt::hstring const& e) 
	{ 
		label_primary_phone = e; 

		return;

	}

	hstring UserVMContact::ValuePrimaryPhone() 
	{ 
		
		return value_primary_phone; 
	
	}

	void UserVMContact::ValuePrimaryPhone(winrt::hstring const& e) 
	{ 
		value_primary_phone = e; 

		return;

	}

	hstring UserVMContact::LabelSecondaryPhone() 
	{ 
		
		return label_secondary_phone; 
	
	}

	void UserVMContact::LabelSecondaryPhone(winrt::hstring const& e) 
	{ 
		label_secondary_phone = e; 

		return;

	}

	hstring UserVMContact::ValueSecondaryPhone() 
	{ 
		
		return value_secondary_phone; 
	
	}

	void UserVMContact::ValueSecondaryPhone(winrt::hstring const& e) 
	{ 
		value_secondary_phone = e; 

		return;

	}

}
