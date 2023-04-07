#include "Departamento.h"

#include "Disciplina.h"
#include "ListaDisciplinas.h"
#include "Universidade.h"
#include "stdafx.h"

Departamento::Departamento() {
    id = -1;
    strcpy(nomeDepartamento, "");
    pObjLDisciplinas = new ListaDisciplinas(-1, "");
}

Departamento::~Departamento() {
    if (pObjLDisciplinas) {
        delete pObjLDisciplinas;
    }
}

void Departamento::setId(int id) { this->id = id; }

int Departamento::getId() { return id; }

void Departamento::setNomeDepartamento(const char* nome) {
    strcpy(nomeDepartamento, nome);
    pObjLDisciplinas->setNomeDptLista(nome);
}

char* Departamento::getNomeDepartamento() { return nomeDepartamento; }

void Departamento::setUniversidade(Universidade* u) { pUnivAssociada = u; }

Universidade* Departamento::getUniversidade() { return pUnivAssociada; }

void Departamento::incluirDisciplina(Disciplina* pD) {
    pObjLDisciplinas->incluaDisciplina(pD);
}

void Departamento::listarDisciplinas() {
    pObjLDisciplinas->listeDisciplinas();
}

void Departamento::listarDisciplinas2() {
   pObjLDisciplinas->listeDisciplinas2(); 
}
