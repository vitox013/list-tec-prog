#include "Pessoa.h"

#include <string.h>

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome) {
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    strcpy(nomeP, nome);
}

void Pessoa::calcularIdade(int diaAtual, int mesAtual, int anoAtual) {
    idadeP = anoAtual - anoP;

    mesP > mesAtual ? idadeP--
                    : mesP == mesAtual&& diaAtual > diaAtual&& idadeP--;

    printf("%s teria %d anos\n", nomeP, idadeP);
}
// int Pessoa::getIdade() { return idadeP; }