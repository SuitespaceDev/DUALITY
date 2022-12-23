#include "pch.h"
#include "UserFilterTime.xaml.h"
#if __has_include("UserFilterTime.g.cpp")
#include "UserFilterTime.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	UserFilterTime::UserFilterTime()
	{
		InitializeComponent();

		LoadYYYY();

		LoadMMM();

		LoadDD();

		LoadHH();

		LoadMM();

		LoadSS();

		LoadOP();

		return;

	}

	void UserFilterTime::LoadMMM()
	{
		months.Clear();

		months.Append(L"Jan");
		months.Append(L"Feb");
		months.Append(L"Mar");
		months.Append(L"Apr");
		months.Append(L"May");
		months.Append(L"Jun");
		months.Append(L"Jul");
		months.Append(L"Aug");
		months.Append(L"Sep");
		months.Append(L"Oct");
		months.Append(L"Nov");
		months.Append(L"Dec");

		selected_month = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedMonth" });

		return;

	}

	void UserFilterTime::LoadDD()
	{
		days.Clear();

		days.Append(L"01");
		days.Append(L"02");
		days.Append(L"03");
		days.Append(L"04");
		days.Append(L"05");
		days.Append(L"06");
		days.Append(L"07");
		days.Append(L"08");
		days.Append(L"09");
		days.Append(L"10");
		days.Append(L"11");
		days.Append(L"12");
		days.Append(L"13");
		days.Append(L"14");
		days.Append(L"15");
		days.Append(L"16");
		days.Append(L"17");
		days.Append(L"18");
		days.Append(L"19");
		days.Append(L"20");
		days.Append(L"21");
		days.Append(L"22");
		days.Append(L"23");
		days.Append(L"24");
		days.Append(L"24");
		days.Append(L"25");
		days.Append(L"26");
		days.Append(L"27");
		days.Append(L"28");

		if (selected_month == 0 ||
			selected_month == 2 ||
			selected_month == 4 ||
			selected_month == 6 ||
			selected_month == 7 ||
			selected_month == 9 ||
			selected_month == 11 )
		{
			days.Append(L"29");
			days.Append(L"30");
			days.Append(L"31");

		}

		if (selected_month == 3 ||
			selected_month == 5 ||
			selected_month == 8 ||
			selected_month == 10)
		{
			days.Append(L"29");
			days.Append(L"30");

		}

		if (selected_month == 1)
		{
			days.Append(L"29");

			try
			{
				CTBASE::CHV4DMMDDYYYY flex{ std::wstring{ L"02/29/" + selected_year } };

			}
			catch (std::exception)
			{
				days.RemoveAtEnd();

			}

		}

		selected_day = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedDay" });

		return;

	}

	void UserFilterTime::LoadYYYY()
	{
		years.Clear();

		years.Append(L"2010");
		years.Append(L"2011");
		years.Append(L"2012");
		years.Append(L"2013");
		years.Append(L"2014");
		years.Append(L"2015");
		years.Append(L"2016");
		years.Append(L"2017");
		years.Append(L"2018");
		years.Append(L"2019");
		years.Append(L"2020");
		years.Append(L"2021");
		years.Append(L"2022");
		years.Append(L"2023");
		years.Append(L"2024");
		years.Append(L"2024");
		years.Append(L"2025");
		years.Append(L"2026");
		years.Append(L"2027");
		years.Append(L"2028");
		years.Append(L"2029");
		years.Append(L"2030");

		selected_year = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedYear" });

		return;

	}

	void UserFilterTime::LoadHH()
	{
		hours.Clear();

		hours.Append(L"00");
		hours.Append(L"01");
		hours.Append(L"02");
		hours.Append(L"03");
		hours.Append(L"04");
		hours.Append(L"05");
		hours.Append(L"06");
		hours.Append(L"07");
		hours.Append(L"08");
		hours.Append(L"09");
		hours.Append(L"10");
		hours.Append(L"11");
		hours.Append(L"12");
		hours.Append(L"13");
		hours.Append(L"14");
		hours.Append(L"15");
		hours.Append(L"16");
		hours.Append(L"17");
		hours.Append(L"18");
		hours.Append(L"19");
		hours.Append(L"20");
		hours.Append(L"21");
		hours.Append(L"22");
		hours.Append(L"23");

		selected_hour = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedHour" });

		return;

	}

	void UserFilterTime::LoadMM()
	{
		minutes.Clear();

		minutes.Append(L"00");
		minutes.Append(L"01");
		minutes.Append(L"02");
		minutes.Append(L"03");
		minutes.Append(L"04");
		minutes.Append(L"05");
		minutes.Append(L"06");
		minutes.Append(L"07");
		minutes.Append(L"08");
		minutes.Append(L"09");
		minutes.Append(L"10");
		minutes.Append(L"11");
		minutes.Append(L"12");
		minutes.Append(L"13");
		minutes.Append(L"14");
		minutes.Append(L"15");
		minutes.Append(L"16");
		minutes.Append(L"17");
		minutes.Append(L"18");
		minutes.Append(L"19");
		minutes.Append(L"20");
		minutes.Append(L"21");
		minutes.Append(L"22");
		minutes.Append(L"23");
		minutes.Append(L"24");
		minutes.Append(L"25");
		minutes.Append(L"26");
		minutes.Append(L"27");
		minutes.Append(L"28");
		minutes.Append(L"29");
		minutes.Append(L"30");
		minutes.Append(L"31");
		minutes.Append(L"32");
		minutes.Append(L"33");
		minutes.Append(L"34");
		minutes.Append(L"35");
		minutes.Append(L"36");
		minutes.Append(L"37");
		minutes.Append(L"38");
		minutes.Append(L"39");
		minutes.Append(L"40");
		minutes.Append(L"41");
		minutes.Append(L"42");
		minutes.Append(L"43");
		minutes.Append(L"44");
		minutes.Append(L"45");
		minutes.Append(L"46");
		minutes.Append(L"47");
		minutes.Append(L"48");
		minutes.Append(L"49");
		minutes.Append(L"50");
		minutes.Append(L"51");
		minutes.Append(L"52");
		minutes.Append(L"53");
		minutes.Append(L"54");
		minutes.Append(L"55");
		minutes.Append(L"56");
		minutes.Append(L"57");
		minutes.Append(L"58");
		minutes.Append(L"59");

		selected_minute = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedMinute" });

		return;

	}

	void UserFilterTime::LoadSS()
	{
		seconds.Clear();

		seconds.Append(L"00");
		seconds.Append(L"01");
		seconds.Append(L"02");
		seconds.Append(L"03");
		seconds.Append(L"04");
		seconds.Append(L"05");
		seconds.Append(L"06");
		seconds.Append(L"07");
		seconds.Append(L"08");
		seconds.Append(L"09");
		seconds.Append(L"10");
		seconds.Append(L"11");
		seconds.Append(L"12");
		seconds.Append(L"13");
		seconds.Append(L"14");
		seconds.Append(L"15");
		seconds.Append(L"16");
		seconds.Append(L"17");
		seconds.Append(L"18");
		seconds.Append(L"19");
		seconds.Append(L"20");
		seconds.Append(L"21");
		seconds.Append(L"22");
		seconds.Append(L"23");
		seconds.Append(L"24");
		seconds.Append(L"25");
		seconds.Append(L"26");
		seconds.Append(L"27");
		seconds.Append(L"28");
		seconds.Append(L"29");
		seconds.Append(L"30");
		seconds.Append(L"31");
		seconds.Append(L"32");
		seconds.Append(L"33");
		seconds.Append(L"34");
		seconds.Append(L"35");
		seconds.Append(L"36");
		seconds.Append(L"37");
		seconds.Append(L"38");
		seconds.Append(L"39");
		seconds.Append(L"40");
		seconds.Append(L"41");
		seconds.Append(L"42");
		seconds.Append(L"43");
		seconds.Append(L"44");
		seconds.Append(L"45");
		seconds.Append(L"46");
		seconds.Append(L"47");
		seconds.Append(L"48");
		seconds.Append(L"49");
		seconds.Append(L"50");
		seconds.Append(L"51");
		seconds.Append(L"52");
		seconds.Append(L"53");
		seconds.Append(L"54");
		seconds.Append(L"55");
		seconds.Append(L"56");
		seconds.Append(L"57");
		seconds.Append(L"58");
		seconds.Append(L"59");

		selected_second = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedSecond" });

		return;

	}

	void UserFilterTime::LoadOP()
	{
		operators.Clear();

		operators.Append(L"<");
		operators.Append(L"<=");
		operators.Append(L"<");
		operators.Append(L"==");
		operators.Append(L"!=");
		operators.Append(L">=");
		operators.Append(L">");

		selected_operator = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedOperator" });

		return;

	}

	winrt::hstring UserFilterTime::Label()
	{
		
		return label;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Months()
	{

		return months;

	}

	void UserFilterTime::NextMonth(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_month < 11)
		{
			selected_month++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousMonth(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_month > 0)
		{
			selected_month--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedMonth()
	{
		
		return selected_month;

	}

	void UserFilterTime::SelectedMonth(uint32_t const& e)
	{
		selected_month = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedMonth" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Days()
	{

		return days;

	}

	void UserFilterTime::NextDay(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_day < 11)
		{
			selected_day++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousDay(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_day > 0)
		{
			selected_day--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedDay()
	{

		return selected_day;

	}

	void UserFilterTime::SelectedDay(uint32_t const& e)
	{
		selected_day = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedDay" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Years()
	{

		return years;

	}

	void UserFilterTime::NextYear(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_year < 11)
		{
			selected_year++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousYear(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_year > 0)
		{
			selected_year--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedYear()
	{

		return selected_year;

	}

	void UserFilterTime::SelectedYear(uint32_t const& e)
	{
		selected_year = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedYear" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Hours()
	{

		return hours;

	}

	void UserFilterTime::NextHour(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_hour < 11)
		{
			selected_hour++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousHour(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_hour > 0)
		{
			selected_hour--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedHour()
	{

		return selected_hour;

	}

	void UserFilterTime::SelectedHour(uint32_t const& e)
	{
		selected_hour = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedHour" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Minutes()
	{

		return minutes;

	}

	void UserFilterTime::NextMinute(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_minute < 11)
		{
			selected_minute++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousMinute(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_minute > 0)
		{
			selected_minute--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedMinute()
	{

		return selected_minute;

	}

	void UserFilterTime::SelectedMinute(uint32_t const& e)
	{
		selected_minute = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedMinute" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Seconds()
	{

		return seconds;

	}

	void UserFilterTime::NextSecond(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_second < 11)
		{
			selected_second++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousSecond(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_second > 0)
		{
			selected_second--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedSecond()
	{

		return selected_second;

	}

	void UserFilterTime::SelectedSecond(uint32_t const& e)
	{
		selected_second = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedSecond" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterTime::Operators()
	{

		return operators;

	}

	void UserFilterTime::NextOperator(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_operator < 11)
		{
			selected_operator++;

			LoadDD();

		}

		return;

	}

	void UserFilterTime::PreviousOperator(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{
		if (selected_operator > 0)
		{
			selected_operator--;

			LoadDD();

		}

	}

	uint32_t UserFilterTime::SelectedOperator()
	{

		return selected_operator;

	}

	void UserFilterTime::SelectedOperator(uint32_t const& e)
	{
		selected_operator = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedOperator" });

		return;

	}

	event_token UserFilterTime::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilterTime::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}