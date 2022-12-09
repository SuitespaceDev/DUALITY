#include "pch.h"
#include "TableIndex.xaml.h"
#if __has_include("TableIndex.g.cpp")
#include "TableIndex.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    TableIndex::TableIndex()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableIndex::LabelIndexHVID()
    {
        return label_index_hvid;

    }

    void TableIndex::LabelIndexHVID(winrt::hstring const& e)
    {
        label_index_hvid = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexHVID()
    {
        return value_index_hvid;

    }

    void TableIndex::ValueIndexHVID(winrt::hstring const& e)
    {
        value_index_hvid = e;

        return;

    }

    winrt::hstring TableIndex::LabelIndexMMM()
    {
        return label_index_mmm;

    }

    void TableIndex::LabelIndexMMM(winrt::hstring const& e)
    {
        label_index_mmm = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexMIL()
    {
        return value_index_mil;

    }

    void TableIndex::ValueIndexMIL(winrt::hstring const& e)
    {
        value_index_mil = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexMAJ()
    {
        return value_index_maj;

    }

    void TableIndex::ValueIndexMAJ(winrt::hstring const& e)
    {
        value_index_maj = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexMIN()
    {
        return value_index_min;

    }

    void TableIndex::ValueIndexMIN(winrt::hstring const& e)
    {
        value_index_min = e;

        return;

    }

    winrt::hstring TableIndex::LabelIndexMaxPath()
    {
        return label_index_maxpath;

    }

    void TableIndex::LabelIndexMaxPath(winrt::hstring const& e)
    {
        label_index_maxpath = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexMaxPath()
    {
        return value_index_maxpath;

    }

    void TableIndex::ValueIndexMaxPath(winrt::hstring const& e)
    {
        value_index_maxpath = e;

        return;

    }

    winrt::hstring TableIndex::LabelIndexCreated()
    {
        return label_index_created;

    }

    void TableIndex::LabelIndexCreated(winrt::hstring const& e)
    {
        label_index_created = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexCreated()
    {
        return value_index_created;

    }

    void TableIndex::ValueIndexCreated(winrt::hstring const& e)
    {
        value_index_created = e;

        return;

    }

    winrt::hstring TableIndex::LabelIndexSaved()
    {
        return label_index_saved;

    }

    void TableIndex::LabelIndexSaved(winrt::hstring const& e)
    {
        label_index_saved = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexSaved()
    {
        return value_index_saved;

    }

    void TableIndex::ValueIndexSaved(winrt::hstring const& e)
    {
        value_index_saved = e;

        return;

    }

    winrt::hstring TableIndex::LabelIndexOpened()
    {
        return label_index_opened;

    }

    void TableIndex::LabelIndexOpened(winrt::hstring const& e)
    {
        label_index_opened = e;

        return;

    }

    winrt::hstring TableIndex::ValueIndexOpened()
    {
        return value_index_opened;

    }

    void TableIndex::ValueIndexOpened(winrt::hstring const& e)
    {
        value_index_opened = e;

        return;

    }

}
