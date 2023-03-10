#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Pessoa.h"
int main() {
    Pessoa Einstein(14, 3, 1879, "Einstein");
    Pessoa Newton(4, 1, 1643, "Newton");

    Einstein.calcularIdade(8, 3, 2023);
    Newton.calcularIdade(8, 3, 2023);

    getchar();
    return 0;
}