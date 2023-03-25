#pragma once
#include <vector>
using namespace std;
#include "Departamento.h"

class Universidade {
   private:
    char nome[30];

    vector<Departamento *> pDepAssociado;

   public:
    Universidade();
    ~Universidade();
    void setNome(const char *nome);
    void setDepAssociado(Departamento *depAssociado);
    char *getNome();
    void imprimeDptos();
};