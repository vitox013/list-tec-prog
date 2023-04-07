

#ifndef _ELEMDISC_H
#define _ELEMDISC_H

#include "Disciplina.h"

class ElemDisc {
   private:
    Disciplina* pDisciplina;
    ElemDisc* pProx;
    ElemDisc* pAnte;

   public:
    ElemDisc();

    ~ElemDisc();

    void setProx(ElemDisc* pProx);
    ElemDisc* getProx();

    void setAnte(ElemDisc* pAnte);
    ElemDisc* getAnte();

    void setDisciplina(Disciplina* pDisc);
    Disciplina* getDisciplina();

    char* getNome();
};

#endif  //_ELEMDISC_H