#include "Departamento.h"

#include "Disciplina.h"
#include "Universidade.h"
#include "stdafx.h"

Departamento::Departamento() {
    id = -1;
    strcpy(nomeDepartamento, "");
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}

Departamento::~Departamento() {
    pDiscAtual = NULL;
    pDiscPrim = NULL;
}

void Departamento::setId(int id) { this->id = id; }

int Departamento::getId() { return id; }

void Departamento::setNomeDepartamento(const char* nome) {
    strcpy(nomeDepartamento, nome);
}

char* Departamento::getNomeDepartamento() { return nomeDepartamento; }

void Departamento::setUniversidade(Universidade* u) { pUnivAssociada = u; }

Universidade* Departamento::getUniversidade() { return pUnivAssociada; }

void Departamento::incluirDisciplina(Disciplina* pD) {
    if (pD != NULL) {
        if (pDiscPrim == NULL) {
            pDiscPrim = pD;
            pDiscAtual = pD;
        } else {
            pDiscAtual->setProx(pD);
            pDiscAtual = pD;
        }
    }
}

void Departamento::listarDisciplinas() {
    Disciplina* pAux = pDiscPrim;
    while (pAux != NULL) {
        cout << "A disciplina " << pAux->getNome()
             << " pertence ao Departamento de " << getNomeDepartamento() << endl;
        pAux = pAux->getProx();
    }
}
