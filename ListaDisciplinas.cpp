
#include "ListaDisciplinas.h"

#include "stdafx.h"

ListaDisciplinas::ListaDisciplinas(int nd, const char* nome) {
    numDisc = nd;
    contDisc = 0;
    strcpy(nomeDptLista, nome);
    pElemDiscPrim = NULL;
    pElemDiscAtual = NULL;
}

ListaDisciplinas::~ListaDisciplinas() {}

void ListaDisciplinas::setNomeDptLista(const char* nome) {
    strcpy(nomeDptLista, nome);
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pDisc) {
    if (((contDisc < numDisc) || (numDisc == -1)) && pDisc != NULL) {
        ElemDisc* pAux = new ElemDisc();
        pAux->setDisciplina(pDisc);

        if (pElemDiscPrim == NULL) {
            pElemDiscPrim = pAux;
            pElemDiscAtual = pAux;
        } else {
            pElemDiscAtual->setProx(pAux);
            pAux->setAnte(pElemDiscAtual);
            pElemDiscAtual = pAux;
        }

        contDisc++;

    } else {
        cout << "Disciplina não incluída!"
             << " Quantia de disc. já lotada em " << numDisc << " disciplinas"
             << endl;
    }
}

void ListaDisciplinas::listeDisciplinas() {
    ElemDisc* pAux = pElemDiscPrim;

    while (pAux != NULL) {
        cout << "A disciplina " << pAux->getNome() << " do Departamento de "
             << nomeDptLista << endl;
        pAux = pAux->getProx();
    }
}
void ListaDisciplinas::listeDisciplinas2() {
    ElemDisc* pAux = pElemDiscAtual;
    while (pAux != NULL) {
        cout << "A disciplina " << pAux->getNome()
             << " pertence ao Departamento de " << nomeDptLista << endl;
        pAux = pAux->getAnte();
    }
}