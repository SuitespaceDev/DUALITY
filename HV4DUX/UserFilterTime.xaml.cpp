#include "pch.h"
#include "UserFilterTime.xaml.h"
#if __has_include("UserFilterTime.g.cpp")
#include "UserFilterTime.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
	UserFilterTime::UserFilterTime()
	{
		InitializeComponent();

		return;

	}

	void UserFilterTime::UserFilterTimeLoaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		LoadYYYY();

		LoadMMM();

		LoadDD();

		LoadHH();

		LoadMM();

		LoadSS();

		LoadOP();

		return;

	}

	event_token UserFilterTime::FilterChanged(WF::EventHandler<hstring> const& handler)
	{
		return filter_changed_event.add(handler);

	}

	void UserFilterTime::FilterChanged(winrt::event_token const& token) noexcept
	{
		filter_changed_event.remove(token);

		return;

	}

	void UserFilterTime::LoadMMM()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"Jan");
		collection.Append(L"Feb");
		collection.Append(L"Mar");
		collection.Append(L"Apr");
		collection.Append(L"May");
		collection.Append(L"Jun");
		collection.Append(L"Jul");
		collection.Append(L"Aug");
		collection.Append(L"Sep");
		collection.Append(L"Oct");
		collection.Append(L"Nov");
		collection.Append(L"Dec");

		MMM().FilterList(collection);

		tokens.insert(std::pair(L"MMM", MMM().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::LoadDD()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"01");
		collection.Append(L"02");
		collection.Append(L"03");
		collection.Append(L"04");
		collection.Append(L"05");
		collection.Append(L"06");
		collection.Append(L"07");
		collection.Append(L"08");
		collection.Append(L"09");
		collection.Append(L"10");
		collection.Append(L"11");
		collection.Append(L"12");
		collection.Append(L"13");
		collection.Append(L"14");
		collection.Append(L"15");
		collection.Append(L"16");
		collection.Append(L"17");
		collection.Append(L"18");
		collection.Append(L"19");
		collection.Append(L"20");
		collection.Append(L"21");
		collection.Append(L"22");
		collection.Append(L"23");
		collection.Append(L"24");
		collection.Append(L"24");
		collection.Append(L"25");
		collection.Append(L"26");
		collection.Append(L"27");
		collection.Append(L"28");

		if (MMM().Value() == L"Jan" ||
			MMM().Value() == L"Mar" ||
			MMM().Value() == L"May" ||
			MMM().Value() == L"Jul" ||
			MMM().Value() == L"Aug" ||
			MMM().Value() == L"Oct" ||
			MMM().Value() == L"Dec")
		{
			collection.Append(L"29");
			collection.Append(L"30");
			collection.Append(L"31");

		}

		if (MMM().Value() == L"Apr" ||
			MMM().Value() == L"Jun" ||
			MMM().Value() == L"Sep" ||
			MMM().Value() == L"Nov")
		{
			collection.Append(L"29");
			collection.Append(L"30");

		}

		if (MMM().Value() == L"Feb")
		{
			collection.Append(L"29");

			try
			{
				CTBASE::CHV4DMMDDYYYY{ std::wstring{ L"02/29/" + YYYY().Value() } };

			}
			catch (std::exception)
			{
				collection.RemoveAtEnd();

			}

		}

		DD().FilterList(collection);

		tokens.insert(std::pair(L"DD", DD().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::LoadYYYY()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"2010");
		collection.Append(L"2011");
		collection.Append(L"2012");
		collection.Append(L"2013");
		collection.Append(L"2014");
		collection.Append(L"2015");
		collection.Append(L"2016");
		collection.Append(L"2017");
		collection.Append(L"2018");
		collection.Append(L"2019");
		collection.Append(L"2020");
		collection.Append(L"2021");
		collection.Append(L"2022");
		collection.Append(L"2023");
		collection.Append(L"2024");
		collection.Append(L"2024");
		collection.Append(L"2025");
		collection.Append(L"2026");
		collection.Append(L"2027");
		collection.Append(L"2028");
		collection.Append(L"2029");
		collection.Append(L"2030");

		YYYY().FilterList(collection);

		tokens.insert(std::pair(L"YYYY", YYYY().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::LoadHH()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"00");
		collection.Append(L"01");
		collection.Append(L"02");
		collection.Append(L"03");
		collection.Append(L"04");
		collection.Append(L"05");
		collection.Append(L"06");
		collection.Append(L"07");
		collection.Append(L"08");
		collection.Append(L"09");
		collection.Append(L"10");
		collection.Append(L"11");
		collection.Append(L"12");
		collection.Append(L"13");
		collection.Append(L"14");
		collection.Append(L"15");
		collection.Append(L"16");
		collection.Append(L"17");
		collection.Append(L"18");
		collection.Append(L"19");
		collection.Append(L"20");
		collection.Append(L"21");
		collection.Append(L"22");
		collection.Append(L"23");

		HH().FilterList(collection);

		tokens.insert(std::pair(L"HH", HH().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::LoadMM()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"00");
		collection.Append(L"01");
		collection.Append(L"02");
		collection.Append(L"03");
		collection.Append(L"04");
		collection.Append(L"05");
		collection.Append(L"06");
		collection.Append(L"07");
		collection.Append(L"08");
		collection.Append(L"09");
		collection.Append(L"10");
		collection.Append(L"11");
		collection.Append(L"12");
		collection.Append(L"13");
		collection.Append(L"14");
		collection.Append(L"15");
		collection.Append(L"16");
		collection.Append(L"17");
		collection.Append(L"18");
		collection.Append(L"19");
		collection.Append(L"20");
		collection.Append(L"21");
		collection.Append(L"22");
		collection.Append(L"23");
		collection.Append(L"24");
		collection.Append(L"25");
		collection.Append(L"26");
		collection.Append(L"27");
		collection.Append(L"28");
		collection.Append(L"29");
		collection.Append(L"30");
		collection.Append(L"31");
		collection.Append(L"32");
		collection.Append(L"33");
		collection.Append(L"34");
		collection.Append(L"35");
		collection.Append(L"36");
		collection.Append(L"37");
		collection.Append(L"38");
		collection.Append(L"39");
		collection.Append(L"40");
		collection.Append(L"41");
		collection.Append(L"42");
		collection.Append(L"43");
		collection.Append(L"44");
		collection.Append(L"45");
		collection.Append(L"46");
		collection.Append(L"47");
		collection.Append(L"48");
		collection.Append(L"49");
		collection.Append(L"50");
		collection.Append(L"51");
		collection.Append(L"52");
		collection.Append(L"53");
		collection.Append(L"54");
		collection.Append(L"55");
		collection.Append(L"56");
		collection.Append(L"57");
		collection.Append(L"58");
		collection.Append(L"59");

		MM().FilterList(collection);

		tokens.insert(std::pair(L"MM", MM().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::LoadSS()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"00");
		collection.Append(L"01");
		collection.Append(L"02");
		collection.Append(L"03");
		collection.Append(L"04");
		collection.Append(L"05");
		collection.Append(L"06");
		collection.Append(L"07");
		collection.Append(L"08");
		collection.Append(L"09");
		collection.Append(L"10");
		collection.Append(L"11");
		collection.Append(L"12");
		collection.Append(L"13");
		collection.Append(L"14");
		collection.Append(L"15");
		collection.Append(L"16");
		collection.Append(L"17");
		collection.Append(L"18");
		collection.Append(L"19");
		collection.Append(L"20");
		collection.Append(L"21");
		collection.Append(L"22");
		collection.Append(L"23");
		collection.Append(L"24");
		collection.Append(L"25");
		collection.Append(L"26");
		collection.Append(L"27");
		collection.Append(L"28");
		collection.Append(L"29");
		collection.Append(L"30");
		collection.Append(L"31");
		collection.Append(L"32");
		collection.Append(L"33");
		collection.Append(L"34");
		collection.Append(L"35");
		collection.Append(L"36");
		collection.Append(L"37");
		collection.Append(L"38");
		collection.Append(L"39");
		collection.Append(L"40");
		collection.Append(L"41");
		collection.Append(L"42");
		collection.Append(L"43");
		collection.Append(L"44");
		collection.Append(L"45");
		collection.Append(L"46");
		collection.Append(L"47");
		collection.Append(L"48");
		collection.Append(L"49");
		collection.Append(L"50");
		collection.Append(L"51");
		collection.Append(L"52");
		collection.Append(L"53");
		collection.Append(L"54");
		collection.Append(L"55");
		collection.Append(L"56");
		collection.Append(L"57");
		collection.Append(L"58");
		collection.Append(L"59");

		SS().FilterList(collection);

		tokens.insert(std::pair(L"SS", SS().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::LoadOP()
	{
		WFITT::IObservableVector<hstring> collection{ winrt::single_threaded_observable_vector<hstring>() };

		collection.Append(L"<");
		collection.Append(L"<=");
		collection.Append(L"<");
		collection.Append(L"==");
		collection.Append(L"!=");
		collection.Append(L">=");
		collection.Append(L">");

		OP().FilterList(collection);

		tokens.insert(std::pair(L"OP", OP().FilterEvent(WF::EventHandler<hstring>{ this, &UserFilterTime::FilterByTimeAndOp })));

		return;

	}

	void UserFilterTime::FilterByTimeAndOp(WF::IInspectable const& sender, hstring const& e)
	{

		return;

	}

}