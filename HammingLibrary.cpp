#include "HammingLibrary.hpp"

namespace HammingLibrary
{

    HammingResult checkHamming(std::vector<int> digits, int count)
    {
        int parity_check = 0;

        if (((count & (count - 1)) != 0) || count < 16)
        { // Check if the count is not a power of 2 greater than 16
            return HammingResult::INVALID_PARAMS;
        }

        for (int i = 0; i < count; i++)
        {
            if (digits[i])
            {
                parity_check = parity_check ^ i;
            }
        }

        if (parity_check == 0)
        {
            return HammingResult::ALL_OK;
        }
        else
        {
            return HammingResult::UNFIXABLE_ERROR;
        }
    };
} // namespace HammingLibrary