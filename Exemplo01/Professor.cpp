#include "Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome)
    : Pessoa(diaNa, mesNa, anoNa, nome) {
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::Professor() : Pessoa() {
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::~Professor() {}

void Professor::setUnivFiliado(Universidade* pu) { pUnivFiliado = pu; }
void Professor::ondeTrabalho() {
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Professor::setDptFiliado(Departamento* pdpt) { pDptoFiliado = pdpt; }

void Professor::qualDptTrabalho() {
    cout << nomeP << " trabalha no departamento de"
         << pDptoFiliado->getNomeDepartamento() << endl;
}