#include "HammingLibrary.hpp"
#include <stdio.h>

namespace HammingLibrary
{

    HammingResult checkHamming(std::vector<int> digits)
    {
        int parity_check = 0;

        if (((digits.size() & (digits.size() - 1)) != 0) || digits.size() < 16)
        { // Check if the count is not a power of 2 greater than 16
            return HammingResult::INVALID_PARAMS;
        }

        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i])
            {
                printf("El bit %d es 1. %d\n", i, parity_check);
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