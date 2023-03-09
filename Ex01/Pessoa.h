#include <stdio.h>

class Pessoa {
   private:
    char nomeP[20];
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

   public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome);
    void calcularIdade(int diaAtual, int mesAtual, int anoAtual);
    // int getIdade();
};