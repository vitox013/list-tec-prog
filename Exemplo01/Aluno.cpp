#include "Aluno.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, const char* nome)
    : Pessoa(diaNa, mesNa, anoNa, nome) {}

Aluno::Aluno() {}

Aluno::~Aluno() {}

void Aluno::setRa(int n) { ra = n; };
int Aluno::getRa() { return ra; }
