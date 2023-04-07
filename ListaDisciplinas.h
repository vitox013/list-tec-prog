
#ifndef _LISTADISCIPLINAS_H
#define _LISTADISCIPLINAS_H

#include "ElemDisc.h"
#include "Disciplina.h"

class ListaDisciplinas {
   private:
    int numDisc;
    int contDisc;
    char nomeDptLista[150];
    ElemDisc* pElemDiscPrim;
    ElemDisc* pElemDiscAtual;

   public:
    ListaDisciplinas(int nd = 1000, const char* n = "");

    ~ListaDisciplinas();

    void setNomeDptLista(const char* n);
    void incluaDisciplina(Disciplina* pDisc);
    void listeDisciplinas();
    void listeDisciplinas2();
};

#endif  //_LISTADISCIPLINAS_H