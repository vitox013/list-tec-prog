
#include "Disciplina.h"

#include "stdafx.h"

Disciplina::Disciplina() {
    strcpy(nomeDisc, "");
    strcpy(areaConhecimento, "");
    id = -1;
    pDpto = NULL;
    pProx = NULL;
}

Disciplina::~Disciplina() {
    pDpto = NULL;
    pProx = NULL;
}

void Disciplina::setId(int n) { id = n; }

int Disciplina::getId() { return id; }

void Disciplina::setNome(const char* nome) { strcpy(nomeDisc, nome); }

char* Disciplina::getNome() { return nomeDisc; }

void Disciplina::setDpto(Departamento* dpto) { pDpto = dpto; }

Departamento* Disciplina::getDpto() { return pDpto; }

void Disciplina::setProx(Disciplina* pProx) { this->pProx = pProx; }

Disciplina* Disciplina::getProx() { return pProx; }
