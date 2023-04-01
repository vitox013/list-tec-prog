#pragma once
#include "Pessoa.h"

class Departamento;

class Aluno : public Pessoa {
   private:
    int ra;
    Aluno* pProx;
    Aluno* pAnte;

   public:
    Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Aluno();
    ~Aluno();
    void setRa(int ra);
    int getRa();
    void setProx(Aluno* pA);
    Aluno* getProx();
    void setAnte(Aluno* pA);
    Aluno* getAnte();
};