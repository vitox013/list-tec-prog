#include "Universidade.h"
#include "stdafx.h"
#pragma once

class Pessoa {
   protected:
    char nomeP[20];
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

   public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome);
    Pessoa();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);
    void calcularIdade(int diaAtual, int mesAtual, int anoAtual);
    void imprimeIdade();
    void calcIdadeImprime(int diaAtual, int mesAtual, int anoAtual);
};