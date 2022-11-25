#pragma once

#include "SaveToGit.g.h"

namespace winrt::Duality137::implementation
{
    struct SaveToGit : SaveToGitT<SaveToGit>
    {
        SaveToGit();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct SaveToGit : SaveToGitT<SaveToGit, implementation::SaveToGit>
    {

    };

}
