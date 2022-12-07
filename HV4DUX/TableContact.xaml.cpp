#include "pch.h"
#include "TableContact.xaml.h"
#if __has_include("TableContact.g.cpp")
#include "TableContact.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    TableContact::TableContact()
    {
        InitializeComponent();

        return;

    }

	hstring TableContact::LabelUserName() 
	{ 
		
		return label_user_name; 
	
	}

	void TableContact::LabelUserName(winrt::hstring const& e) 
	{ 
		label_user_name = e; 
	
		return;
	
	}

	hstring TableContact::ValueUserName()
	{ 
		
		return value_user_name; 
	
	}

	void TableContact::ValueUserName(winrt::hstring const& e) 
	{ 
		value_user_name = e; 
	
		return;
	
	}

	hstring TableContact::LabelAddressOne() 
	{ 
		
		return label_address_one; 
	
	}

	void TableContact::LabelAddressOne(winrt::hstring const& e)
	{ 
		label_address_one = e; 
	
		return;
	
	}

	hstring TableContact::ValueAddressOne() 
	{ 
		
		return value_address_one; 
	
	}

	void TableContact::ValueAddressOne(winrt::hstring const& e) 
	{ 
		value_address_one = e; 
	
		return;
	
	}

	hstring TableContact::LabelAddressTwo() 
	{ 
		
		return label_address_two; 
	
	}

	void TableContact::LabelAddressTwo(winrt::hstring const& e) 
	{ 
		label_address_two = e; 
	
		return;
	
	}

	hstring TableContact::ValueAddressTwo() 
	{ 
		
		return value_address_two; 
	
	}

	void TableContact::ValueAddressTwo(winrt::hstring const& e) 
	{ 
		value_address_two = e; 
	
		return;
	
	}

	hstring TableContact::LabelCity() 
	{ 
		
		return label_city; 
	
	}

	void TableContact::LabelCity(winrt::hstring const& e) 
	{ 
		label_city = e; 
	
		return;
	
	}

	hstring TableContact::ValueCity() 
	{ 
		
		return value_city; 
	
	}

	void TableContact::ValueCity(winrt::hstring const& e) 
	{ 
		value_city = e; 
	
		return;
	
	}

	hstring TableContact::LabelRegion() 
	{ 
		
		return label_region; 
	
	}

	void TableContact::LabelRegion(winrt::hstring const& e) 
	{ 
		label_region = e; 
	
		return;
	
	}

	hstring TableContact::ValueRegion() 
	{ 
		
		return value_region; 
	
	}

	void TableContact::ValueRegion(winrt::hstring const& e) 
	{ 
		value_region = e; 
	
		return;
	
	}

	hstring TableContact::LabelEMail() 
	{ 
		
		return label_email; 
	
	}

	void TableContact::LabelEMail(winrt::hstring const& e) 
	{ 
		label_email = e; 

		return;

	}

	hstring TableContact::ValueEMail() 
	{ 
		
		return value_email; 
	
	}

	void TableContact::ValueEMail(winrt::hstring const& e) 
	{ 
		value_email = e; 

		return;

	}

	hstring TableContact::LabelPrimaryPhone() 
	{ 
		
		return label_primary_phone; 
	
	}

	void TableContact::LabelPrimaryPhone(winrt::hstring const& e) 
	{ 
		label_primary_phone = e; 

		return;

	}

	hstring TableContact::ValuePrimaryPhone() 
	{ 
		
		return value_primary_phone; 
	
	}

	void TableContact::ValuePrimaryPhone(winrt::hstring const& e) 
	{ 
		value_primary_phone = e; 

		return;

	}

	hstring TableContact::LabelSecondaryPhone() 
	{ 
		
		return label_secondary_phone; 
	
	}

	void TableContact::LabelSecondaryPhone(winrt::hstring const& e) 
	{ 
		label_secondary_phone = e; 

		return;

	}

	hstring TableContact::ValueSecondaryPhone() 
	{ 
		
		return value_secondary_phone; 
	
	}

	void TableContact::ValueSecondaryPhone(winrt::hstring const& e) 
	{ 
		value_secondary_phone = e; 

		return;

	}

}
