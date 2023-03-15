#include "Universidade.h"

#include "stdafx.h"

Universidade::Universidade(const char* n) { strcpy(nome, n); }

Universidade::~Universidade() {}

void Universidade::setNome(const char* n) { strcpy(nome, n); }
void Universidade::setDepAssociado(Departamento* nomeDpt) {
    depAssociado = nomeDpt;
}
char* Universidade::getNome() { return nome; }

char* Universidade::getNomeDpt() {
    return depAssociado->getNomeDepartamento();
};