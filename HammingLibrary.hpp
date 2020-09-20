#pragma once

#include <vector>

namespace HammingLibrary
{
    enum HammingResult
    {
        ALL_OK,
        FIXABLE_ERROR,
        UNFIXABLE_ERROR,
        INVALID_PARAMS,
    };

    HammingResult checkHamming(std::vector<int> digits);
} // namespace HammingLibrary