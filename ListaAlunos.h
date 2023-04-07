#ifndef _LISTAALUNOS_H
#define _LISTAALUNOS_H

#include "ElemAluno.h"

class ListaAlunos {
   private:
    ElemAluno* pElemAlunoPrim;
    ElemAluno* pElemAlunoAtual;
    int numAlunos;
    int contAlunos;
    char nomeDiscLista[150];

   public:
    ListaAlunos(int na = 44, const char* n = "");

    ~ListaAlunos();

    void setNomeDiscLista(const char* n);
    char* getNomeDiscLista();

    void incluaAluno(Aluno* pA);

    void listeAlunos();

    void listeAlunos2();
};

#endif  //_LISTAALUNOS_H