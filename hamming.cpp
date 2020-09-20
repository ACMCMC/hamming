#include "HammingLibrary.hpp"
#include <vector>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("Bienvenido.\n");

    std::vector<int> * bytes = new std::vector<int>();

    if (argc != 1)
    {
        printf("Debe especificarse un argumento como cadena de 0s y 1s, p.ej.: \"10001010\"\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        bytes->push_back((argv[1][i]) - '0');
    }

    printf("El vector es: ");
    for (int i = 0; i < bytes->size(); i++)
    {
        printf("%d ", bytes->at(i));
    }
    printf("\n");

    HammingLibrary::HammingResult resultado = HammingLibrary::checkHamming(*bytes, argc);

    printf("ESCANEADOS %d dígitos. RESULTADO: %d\n", argc, resultado);

    return 0;
}