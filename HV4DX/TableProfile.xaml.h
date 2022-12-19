#pragma once

#include "TableProfile.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableProfile : TableProfileT<TableProfile>
    {
    public:
        TableProfile();

    public:
        winrt::hstring LabelProfileHVID();

        void LabelProfileHVID(winrt::hstring const&);

    private:
        winrt::hstring label_profile_hvid{};

    public:
        winrt::hstring ValueProfileHVID();

        void ValueProfileHVID(winrt::hstring const&);

    private:
        winrt::hstring value_profile_hvid{};

    public:
        winrt::hstring LabelProfileMMM();

        void LabelProfileMMM(winrt::hstring const&);

    private:
        winrt::hstring label_profile_mmm{};

    public:
        winrt::hstring ValueProfileMIL();

        void ValueProfileMIL(winrt::hstring const&);

    private:
        winrt::hstring value_profile_mil{};

    public:
        winrt::hstring ValueProfileMAJ();

        void ValueProfileMAJ(winrt::hstring const&);

    private:
        winrt::hstring value_profile_maj{};

    public:
        winrt::hstring ValueProfileMIN();

        void ValueProfileMIN(winrt::hstring const&);

    private:
        winrt::hstring value_profile_min{};

    public:
        winrt::hstring LabelProfileMaxPath();

        void LabelProfileMaxPath(winrt::hstring const&);

    private:
        winrt::hstring label_profile_maxpath{};

    public:
        winrt::hstring ValueProfileMaxPath();

        void ValueProfileMaxPath(winrt::hstring const&);

    private:
        winrt::hstring value_profile_maxpath{};

    public:
        winrt::hstring LabelProfileCreated();

        void LabelProfileCreated(winrt::hstring const&);

    private:
        winrt::hstring label_profile_created{};

    public:
        winrt::hstring ValueProfileCreated();

        void ValueProfileCreated(winrt::hstring const&);

    private:
        winrt::hstring value_profile_created{};

    public:
        winrt::hstring LabelProfileSaved();

        void LabelProfileSaved(winrt::hstring const&);

    private:
        winrt::hstring label_profile_saved{};

    public:
        winrt::hstring ValueProfileSaved();

        void ValueProfileSaved(winrt::hstring const&);

    private:
        winrt::hstring value_profile_saved{};

    public:
        winrt::hstring LabelProfileOpened();

        void LabelProfileOpened(winrt::hstring const&);

    private:
        winrt::hstring label_profile_opened{};

    public:
        winrt::hstring ValueProfileOpened();

        void ValueProfileOpened(winrt::hstring const&);

    private:
        winrt::hstring value_profile_opened{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProfile : TableProfileT<TableProfile, implementation::TableProfile>
    {
    };
}
