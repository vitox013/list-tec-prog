#include "Aluno.h"

#include "stdafx.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, const char* nome)
    : Pessoa(diaNa, mesNa, anoNa, nome) {
    pProx = NULL;
    pAnte = NULL;
}

Aluno::Aluno() {
    pProx = NULL;
    pAnte = NULL;
}

Aluno::~Aluno() {
    pProx = NULL;
    pAnte = NULL;
}

void Aluno::setRa(int n) { ra = n; };
int Aluno::getRa() { return ra; }

void Aluno::setProx(Aluno* pA) { this->pProx = pA; }

Aluno* Aluno::getProx() { return pProx; }

void Aluno::setAnte(Aluno* pA) { this->pAnte = pA; }

Aluno* Aluno::getAnte() { return pAnte; }
