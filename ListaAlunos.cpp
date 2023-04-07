#include "ListaAlunos.h"

#include "stdafx.h"

ListaAlunos::ListaAlunos(int na, const char* n) {
    numAlunos = na;
    contAlunos = 0;
    strcpy(nomeDiscLista, n);
    pElemAlunoAtual = NULL;
    pElemAlunoPrim = NULL;
}

ListaAlunos::~ListaAlunos() {
    ElemAluno* pAux1 = pElemAlunoPrim;
    ElemAluno* pAux2 = pAux1;

    while (pAux1 != NULL) {
        pAux2 = pAux1->getProx();
        delete (pAux1);
        pAux1 = pAux2;
    }
    pElemAlunoAtual = NULL;
    pElemAlunoPrim = NULL;
}

void ListaAlunos::setNomeDiscLista(const char* n) { strcpy(nomeDiscLista, n); }
char* ListaAlunos::getNomeDiscLista() { return nomeDiscLista; }

void ListaAlunos::incluaAluno(Aluno* pAluno) {
    if ((contAlunos < numAlunos) && (pAluno != NULL)) {
        ElemAluno* pAux = new ElemAluno();
        pAux->setAluno(pAluno);
        if (pElemAlunoPrim == NULL) {
            pElemAlunoPrim = pAux;
            pElemAlunoAtual = pAux;
        } else {
            pElemAlunoAtual->setProx(pAux);
            pAux->setAnte(pElemAlunoAtual);
            pElemAlunoAtual = pAux;
        }
        contAlunos++;
    } else {
        cout << "Aluno não incluido, ";
        contAlunos < numAlunos ? cout << "turma lotada!" << endl
                               : cout << "aluno está nulo!" << endl;
    }
}

/**
 * Retorna a lista de alunos
 * @return void
 */
void ListaAlunos::listeAlunos() {
    ElemAluno* pAux = pElemAlunoPrim;
    while (pAux != NULL) {
        cout << "Aluno " << pAux->getNome() << " matriculado em "
             << nomeDiscLista << endl;
        pAux = pAux->getProx();
    }
}

/**
 * Retorna a lista de alunos de tras para frente
 * @return void
 */
void ListaAlunos::listeAlunos2() {
    ElemAluno* pAux = pElemAlunoAtual;
    while (pAux != NULL) {
        cout << "Aluno " << pAux->getNome() << " matriculado em "
             << nomeDiscLista << endl;
        pAux = pAux->getAnte();
    }
}