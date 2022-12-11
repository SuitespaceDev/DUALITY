#pragma once

#include "TableImage.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableImage : TableImageT<TableImage>
    {
    public:
        TableImage();

    public:
        winrt::hstring LabelImageHVID();

        void LabelImageHVID(winrt::hstring const&);

    private:
        winrt::hstring label_image_hvid{};

    public:
        winrt::hstring ValueImageHVID();

        void ValueImageHVID(winrt::hstring const&);

    private:
        winrt::hstring value_image_hvid{};

    public:
        winrt::hstring LabelImageName();

        void LabelImageName(winrt::hstring const&);

    private:
        winrt::hstring label_image_name{};

    public:
        winrt::hstring LabelImageType();

        void LabelImageType(winrt::hstring const&);

    private:
        winrt::hstring label_image_type{};

    public:
        winrt::hstring LabelImageCreatedDATETIME();

        void LabelImageCreatedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_image_created_datetime{};

    public:
        winrt::hstring ValueImageCreatedDATETIME();

        void ValueImageCreatedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_image_created_datetime{};

    public:
        winrt::hstring LabelImageSavedDATETIME();

        void LabelImageSavedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_image_saved_datetime{};

    public:
        winrt::hstring ValueImageSavedDATETIME();

        void ValueImageSavedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_image_saved_datetime{};

    public:
        winrt::hstring LabelImageOpenedDATETIME();

        void LabelImageOpenedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_image_opened_datetime{};

    public:
        winrt::hstring ValueImageOpenedDATETIME();

        void ValueImageOpenedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_image_opened_datetime{};

    public:
        winrt::hstring LabelHV4DVOLOFF();

        void LabelHV4DVOLOFF(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DVOL_off{};

    public:
        winrt::hstring ValueHV4DVOLOFF();

        void ValueHV4DVOLOFF(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DVOL_off{};

    public:
        winrt::hstring LabelHV4DVOLSZ();

        void LabelHV4DVOLSZ(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DVOL_sz{};

    public:
        winrt::hstring ValueHV4DVOLSZ();

        void ValueHV4DVOLSZ(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DVOL_sz{};

    public:
        winrt::hstring LabelHV4DSFTOFF();

        void LabelHV4DSFTOFF(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DSFT_off{};

    public:
        winrt::hstring ValueHV4DSFTOFF();

        void ValueHV4DSFTOFF(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DSFT_off{};

    public:
        winrt::hstring LabelHV4DSFTSZ();

        void LabelHV4DSFTSZ(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DSFT_sz{};

    public:
        winrt::hstring ValueHV4DSFTSZ();

        void ValueHV4DSFTSZ(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DSFT_sz{};

    public:
        winrt::hstring LabelHV4DMIROFF();

        void LabelHV4DMIROFF(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DMIR_off{};

    public:
        winrt::hstring ValueHV4DMIROFF();

        void ValueHV4DMIROFF(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DMIR_off{};

    public:
        winrt::hstring LabelHV4DMIRSZ();

        void LabelHV4DMIRSZ(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DMIR_sz{};

    public:
        winrt::hstring ValueHV4DMIRSZ();

        void ValueHV4DMIRSZ(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DMIR_sz{};

    public:
        winrt::hstring LabelHV4DATTOFF();

        void LabelHV4DATTOFF(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DATT_off{};

    public:
        winrt::hstring ValueHV4DATTOFF();

        void ValueHV4DATTOFF(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DATT_off{};

    public:
        winrt::hstring LabelHV4DATTSZ();

        void LabelHV4DATTSZ(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DATT_sz{};

    public:
        winrt::hstring ValueHV4DATTSZ();

        void ValueHV4DATTSZ(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DATT_sz{};

    public:
        winrt::hstring LabelHV4DBMPOFF();

        void LabelHV4DBMPOFF(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DBMP_off{};

    public:
        winrt::hstring ValueHV4DBMPOFF();

        void ValueHV4DBMPOFF(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DBMP_off{};

    public:
        winrt::hstring LabelHV4DBMPSZ();

        void LabelHV4DBMPSZ(winrt::hstring const&);

    private:
        winrt::hstring label_HV4DBMP_sz{};

    public:
        winrt::hstring ValueHV4DBMPSZ();

        void ValueHV4DBMPSZ(winrt::hstring const&);

    private:
        winrt::hstring value_HV4DBMP_sz{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableImage : TableImageT<TableImage, implementation::TableImage>
    {
    };
}
