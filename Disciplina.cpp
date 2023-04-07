
#include "Disciplina.h"

#include "stdafx.h"

Disciplina::Disciplina(int na, const char* ac) : ObjLAlunos(na, ac) {
    strcpy(nomeDisc, "");
    strcpy(areaConhecimento, ac);
    id = -1;
    pDptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
}

Disciplina::~Disciplina() {
    pDptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
}

void Disciplina::setId(int n) { id = n; }

int Disciplina::getId() { return id; }

void Disciplina::setNome(const char* nome) {
    strcpy(nomeDisc, nome);
    ObjLAlunos.setNomeDiscLista(nome);
}

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

void Disciplina::incluaAluno(Aluno* pAluno) { ObjLAlunos.incluaAluno(pAluno); }

void Disciplina::listeAlunos() { ObjLAlunos.listeAlunos(); }
void Disciplina::listeAlunos2() { ObjLAlunos.listeAlunos2(); }