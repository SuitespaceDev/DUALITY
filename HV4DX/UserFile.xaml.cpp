#include "pch.h"
#include "UserFile.xaml.h"
#if __has_include("UserFile.g.cpp")
#include "UserFile.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFile::UserFile()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserFile::Label()
	{

		return label;

	}

	winrt::hstring UserFile::Value()
	{

		return value;

	}

	void UserFile::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	void UserFile::FilePicker(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{


		return;

	}

	winrt::hstring UserFile::Placeholder()
	{

		return placeholder;

	}

	bool UserFile::ReadOnly()
	{

		return read_only;

	}

	void UserFile::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserFile::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFile::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
