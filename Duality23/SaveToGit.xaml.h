#pragma once

#include "SaveToGit.g.h"

namespace winrt::Duality23::implementation
{
    struct SaveToGit : SaveToGitT<SaveToGit>
    {
        SaveToGit();

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct SaveToGit : SaveToGitT<SaveToGit, implementation::SaveToGit>
    {

    };

}
