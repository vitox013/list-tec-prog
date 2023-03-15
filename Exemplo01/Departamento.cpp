#include "Departamento.h"

#include "stdafx.h"

Departamento::Departamento(const char* nome) { strcpy(nomeDepartamento, nome); }

Departamento::~Departamento() {}

void Departamento::setNomeDepartamento(const char* nome) {
    strcpy(nomeDepartamento, nome);
}

char* Departamento::getNomeDepartamento() { return nomeDepartamento; }