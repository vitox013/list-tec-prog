#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    int dia;
    int mes;
    int ano;
    int idade;
};

void calcularIdade(struct Pessoa *pessoa, int dia, int mes, int ano) {
    pessoa->idade = ano - pessoa->ano;

    pessoa->mes > mes
        ? pessoa->idade--
        : pessoa->mes == mes && pessoa->dia > dia && pessoa->idade--;
}

int main() {
    struct Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 03;
    Einstein.ano = 1879;

    Newton.dia = 04;
    Newton.mes = 01;
    Newton.ano = 1649;

    calcularIdade(&Einstein, 8, 3, 2023);
    calcularIdade(&Newton, 8, 3, 2023);

    printf("A idade de Einstein seria %d\n", Einstein.idade);
    printf("A idade de Newton seria %d\n", Newton.idade);

    return 0;
}