#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Pessoa.h"
int main() {
    Pessoa Einstein(14, 3, 1879, "Einstein");
    Pessoa Newton(4, 1, 1643, "Newton");

    Einstein.calcularIdade(8, 3, 2023);
    Newton.calcularIdade(8, 3, 2023);

    // printf("Einstein teria %d\n", Einstein.getIdade());
    // printf("Newton teria %d\n", Newton.getIdade());

    getchar();
    return 0;
}