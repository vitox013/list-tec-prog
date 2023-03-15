#include "Universidade.h"
#include "stdafx.h"

class Pessoa {
   private:
    char nomeP[20];
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    Universidade* pUnivFiliado;
    Departamento* pDptoFiliado;

   public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome);
    Pessoa();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);
    void calcularIdade(int diaAtual, int mesAtual, int anoAtual);
    void imprimeIdade();
    void calcIdadeImprime(int diaAtual, int mesAtual, int anoAtual);
    void setUnivFiliado(Universidade* pu);
    void setDptFiliado(Departamento* pdpt);
    void ondeTrabalho();
    void qualDptTrabalho();
};