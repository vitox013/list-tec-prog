
#include "ElemAluno.h"

#include "Aluno.h"

ElemAluno::ElemAluno() {
    pAluno = NULL;
    pProx = NULL;
    pAnte = NULL;
}

ElemAluno::~ElemAluno() {
    pAluno = NULL;
    pProx = NULL;
    pAnte = NULL;
}

void ElemAluno::setAluno(Aluno* pA) { pAluno = pA; }

Aluno* ElemAluno::getAluno() { return pAluno; }

char* ElemAluno::getNome() { return pAluno->getNome(); }

void ElemAluno::setProx(ElemAluno* pA) { pProx = pA; }

ElemAluno* ElemAluno::getProx() { return pProx; }

void ElemAluno::setAnte(ElemAluno* pA) { pAnte = pA; }

ElemAluno* ElemAluno::getAnte() { return pAnte; }
