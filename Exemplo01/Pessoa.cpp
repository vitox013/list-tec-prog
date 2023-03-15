#include "Pessoa.h"

#include "stdafx.h"

using std::cout;
using std::endl;

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome) {
    inicializa(diaNa, mesNa, anoNa, nome);
}
Pessoa::Pessoa() { inicializa(0, 0, 0, ""); }

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
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
}

void Pessoa::imprimeIdade() {
    // printf("%s teria %d anos\n", nomeP, idadeP);
    cout << nomeP << " teria " << idadeP << " anos" << endl;
}

void Pessoa::calcIdadeImprime(int diaAtual, int mesAtual, int anoAtual) {
    calcularIdade(diaAtual, mesAtual, anoAtual);
    imprimeIdade();
}

void Pessoa::setUnivFiliado(Universidade* pu) { pUnivFiliado = pu; }
void Pessoa::ondeTrabalho() {
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Pessoa::setDptFiliado(Departamento* pdpt) { pDptoFiliado = pdpt; }

void Pessoa::qualDptTrabalho() {
    cout << nomeP << " trabalha no departamento "
         << pDptoFiliado->getNomeDepartamento() << endl;
}

