#include "Universidade.h"

#include "stdafx.h"

Universidade::Universidade() { strcpy(nome, ""); }

Universidade::~Universidade() {}

void Universidade::setNome(const char* n) { strcpy(nome, n); }

void Universidade::setDepAssociado(Departamento* nomeDpt) {
    if (nomeDpt != NULL) pDepAssociado.push_back(nomeDpt);
}
char* Universidade::getNome() { return nome; }

void Universidade::imprimeDptos() {
    pDepAssociado.size();
    for (int i = 0; i < 50; i++) {
        cout << pDepAssociado[i]->getNomeDepartamento() << endl;
    }
}
