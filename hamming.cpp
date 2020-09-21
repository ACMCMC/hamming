#include "HammingLibrary.hpp"
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int main(int argc, char **argv)
{

    std::vector<int> * bytes = new std::vector<int>();

    if (argc != 2)
    {
        printf("A string of 0s and 1s must be passed as an argument; e.g.: \"10001010\"\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        bytes->push_back((argv[1][i]) - '0');
    }

    printf("The read vector is: ");
    for (int i = 0; i < bytes->size(); i++)
    {
        printf("%d ", bytes->at(i));
    }
    printf("\n");

    HammingLibrary::HammingResult result = HammingLibrary::checkHamming(*bytes);

    printf("SCANNED %d digits. RESULT: %d\n", bytes->size(), result);

    delete(bytes);

    return 0;
}