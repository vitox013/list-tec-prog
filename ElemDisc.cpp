
#include "ElemDisc.h"

ElemDisc::ElemDisc() {
    pAnte = NULL;
    pProx = NULL;
}

ElemDisc::~ElemDisc() {
    pAnte = NULL;
    pProx = NULL;
}

/**
 * @param ElemDisc* pProx
 * @return void
 */
void ElemDisc::setProx(ElemDisc* pProximo) { pProx = pProximo; }

/**
 * @return ElemDisc*
 */
ElemDisc* ElemDisc::getProx() { return pProx; }

void ElemDisc::setAnte(ElemDisc* pAnterior) { pAnte = pAnterior; }

ElemDisc* ElemDisc::getAnte() { return pAnte; }

void ElemDisc::setDisciplina(Disciplina* pDisc) { pDisciplina = pDisc; }

Disciplina* ElemDisc::getDisciplina() { return pDisciplina; }

char* ElemDisc::getNome() { return pDisciplina->getNome(); }