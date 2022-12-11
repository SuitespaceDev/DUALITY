#pragma once

#include "TableIndex.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableIndex : TableIndexT<TableIndex>
    {
    public:
        TableIndex();

    public:
        winrt::hstring LabelIndexHVID();

        void LabelIndexHVID(winrt::hstring const&);

    private:
        winrt::hstring label_index_hvid{};

    public:
        winrt::hstring ValueIndexHVID();

        void ValueIndexHVID(winrt::hstring const&);

    private:
        winrt::hstring value_index_hvid{};

    public:
        winrt::hstring LabelIndexMMM();

        void LabelIndexMMM(winrt::hstring const&);

    private:
        winrt::hstring label_index_mmm{};

    public:
        winrt::hstring ValueIndexMIL();

        void ValueIndexMIL(winrt::hstring const&);

    private:
        winrt::hstring value_index_mil{};

    public:
        winrt::hstring ValueIndexMAJ();

        void ValueIndexMAJ(winrt::hstring const&);

    private:
        winrt::hstring value_index_maj{};

    public:
        winrt::hstring ValueIndexMIN();

        void ValueIndexMIN(winrt::hstring const&);

    private:
        winrt::hstring value_index_min{};

    public:
        winrt::hstring LabelIndexMaxPath();

        void LabelIndexMaxPath(winrt::hstring const&);

    private:
        winrt::hstring label_index_maxpath{};

    public:
        winrt::hstring ValueIndexMaxPath();

        void ValueIndexMaxPath(winrt::hstring const&);

    private:
        winrt::hstring value_index_maxpath{};

    public:
        winrt::hstring LabelIndexCreated();

        void LabelIndexCreated(winrt::hstring const&);

    private:
        winrt::hstring label_index_created{};

    public:
        winrt::hstring ValueIndexCreated();

        void ValueIndexCreated(winrt::hstring const&);

    private:
        winrt::hstring value_index_created{};

    public:
        winrt::hstring LabelIndexSaved();

        void LabelIndexSaved(winrt::hstring const&);

    private:
        winrt::hstring label_index_saved{};

    public:
        winrt::hstring ValueIndexSaved();

        void ValueIndexSaved(winrt::hstring const&);

    private:
        winrt::hstring value_index_saved{};

    public:
        winrt::hstring LabelIndexOpened();

        void LabelIndexOpened(winrt::hstring const&);

    private:
        winrt::hstring label_index_opened{};

    public:
        winrt::hstring ValueIndexOpened();

        void ValueIndexOpened(winrt::hstring const&);

    private:
        winrt::hstring value_index_opened{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableIndex : TableIndexT<TableIndex, implementation::TableIndex>
    {
    };
}
