#include "pch.h"
#include "TableProfile.xaml.h"
#if __has_include("TableProfile.g.cpp")
#include "TableProfile.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableProfile::TableProfile()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableProfile::LabelProfileHVID()
    {
        return label_profile_hvid;

    }

    void TableProfile::LabelProfileHVID(winrt::hstring const& e)
    {
        label_profile_hvid = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileHVID()
    {
        return value_profile_hvid;

    }

    void TableProfile::ValueProfileHVID(winrt::hstring const& e)
    {
        value_profile_hvid = e;

        return;

    }

    winrt::hstring TableProfile::LabelProfileMMM()
    {
        return label_profile_mmm;

    }

    void TableProfile::LabelProfileMMM(winrt::hstring const& e)
    {
        label_profile_mmm = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileMIL()
    {
        return value_profile_mil;

    }

    void TableProfile::ValueProfileMIL(winrt::hstring const& e)
    {
        value_profile_mil = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileMAJ()
    {
        return value_profile_maj;

    }

    void TableProfile::ValueProfileMAJ(winrt::hstring const& e)
    {
        value_profile_maj = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileMIN()
    {
        return value_profile_min;

    }

    void TableProfile::ValueProfileMIN(winrt::hstring const& e)
    {
        value_profile_min = e;

        return;

    }

    winrt::hstring TableProfile::LabelProfileMaxPath()
    {
        return label_profile_maxpath;

    }

    void TableProfile::LabelProfileMaxPath(winrt::hstring const& e)
    {
        label_profile_maxpath = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileMaxPath()
    {
        return value_profile_maxpath;

    }

    void TableProfile::ValueProfileMaxPath(winrt::hstring const& e)
    {
        value_profile_maxpath = e;

        return;

    }

    winrt::hstring TableProfile::LabelProfileCreated()
    {
        return label_profile_created;

    }

    void TableProfile::LabelProfileCreated(winrt::hstring const& e)
    {
        label_profile_created = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileCreated()
    {
        return value_profile_created;

    }

    void TableProfile::ValueProfileCreated(winrt::hstring const& e)
    {
        value_profile_created = e;

        return;

    }

    winrt::hstring TableProfile::LabelProfileSaved()
    {
        return label_profile_saved;

    }

    void TableProfile::LabelProfileSaved(winrt::hstring const& e)
    {
        label_profile_saved = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileSaved()
    {
        return value_profile_saved;

    }

    void TableProfile::ValueProfileSaved(winrt::hstring const& e)
    {
        value_profile_saved = e;

        return;

    }

    winrt::hstring TableProfile::LabelProfileOpened()
    {
        return label_profile_opened;

    }

    void TableProfile::LabelProfileOpened(winrt::hstring const& e)
    {
        label_profile_opened = e;

        return;

    }

    winrt::hstring TableProfile::ValueProfileOpened()
    {
        return value_profile_opened;

    }

    void TableProfile::ValueProfileOpened(winrt::hstring const& e)
    {
        value_profile_opened = e;

        return;

    }

}
