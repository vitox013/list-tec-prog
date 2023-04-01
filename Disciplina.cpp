
#include "Disciplina.h"

#include "stdafx.h"

Disciplina::Disciplina(int na, const char* ac) {
    strcpy(nomeDisc, "");
    strcpy(areaConhecimento, ac);
    id = -1;
    numAlunos = na;
    contAlunos = 0;
    pElemAlunoAtual = NULL;
    pElemAlunoPrim = NULL;
    pDptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
}

Disciplina::~Disciplina() {
    ElemAluno *pAux, *pAux2;
    pAux = pElemAlunoPrim;

    while(pAux != NULL){
      pAux2 = pAux->getProx();
      delete(pAux);
      pAux = pAux2;
    }
    
    pDptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
    pElemAlunoAtual = NULL;
    pElemAlunoPrim = NULL;
}

void Disciplina::setId(int n) { id = n; }

int Disciplina::getId() { return id; }

void Disciplina::setNome(const char* nome) { strcpy(nomeDisc, nome); }

char* Disciplina::getNome() { return nomeDisc; }

void Disciplina::setDpto(Departamento* dpto) {
    pDptoAssociado = dpto;
    dpto->incluirDisciplina(this);
}

Departamento* Disciplina::getDpto() { return pDptoAssociado; }

void Disciplina::setProx(Disciplina* pProx) { this->pProx = pProx; }

Disciplina* Disciplina::getProx() { return pProx; }

void Disciplina::setAnte(Disciplina* pAnterior) { pAnte = pAnterior; }

Disciplina* Disciplina::getAnte() { return pAnte; }

void Disciplina::incluaAluno(Aluno* pAluno) {

    ElemAluno* pAux = new ElemAluno();
    pAux->setAluno(pAluno);

    if ((contAlunos < numAlunos) && (pAluno != NULL)) {
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

void Disciplina::listeAlunos() {
    ElemAluno* pAux = pElemAlunoPrim;
    while (pAux != NULL) {
        cout << "Aluno " << pAux->getNome() << " matriculado em " << nomeDisc
             << endl;
        pAux = pAux->getProx();
    }
}
void Disciplina::listeAlunos2() {
    ElemAluno* pAux = pElemAlunoAtual;
    while (pAux != NULL) {
        cout << "Aluno " << pAux->getNome() << " matriculado em " << nomeDisc
             << endl;
        pAux = pAux->getAnte();
    }
}