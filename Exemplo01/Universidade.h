#pragma once
#include "Departamento.h"

class Universidade {
   private:
    char nome[30];

    Departamento *depAssociado;

   public:
    Universidade(const char *nome = "");
    ~Universidade();
    void setNome(const char *nome);
    void setDepAssociado(Departamento *depAssociado);
    char *getNome();
    char* getNomeDpt();
};