#if !defined(_DISCIPLINA_H)
#define _DISCIPLINA_H

#include "Departamento.h"

class Disciplina {
   private:
    int id;
    char nomeDisc[100];
    char areaConhecimento[100];

    Departamento* pDpto;
	Disciplina* pProx;

   public:
    Disciplina();
    ~Disciplina();
    void setId(int id);
    int getId();
    void setNome(const char* nome);
    char* getNome();
	void setDpto(Departamento* dpto);
	Departamento* getDpto();
	void setProx(Disciplina* pProx);
	Disciplina* getProx();
};

#endif  //_DISCIPLINA_H
