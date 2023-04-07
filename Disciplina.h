#if !defined(_DISCIPLINA_H)
#define _DISCIPLINA_H

#include "Aluno.h"
#include "Departamento.h"
#include "ElemAluno.h"
#include "ListaAlunos.h"

class Disciplina {
   private:
    int id;
    char nomeDisc[100];
    char areaConhecimento[100];

    Departamento* pDptoAssociado;
    Disciplina* pProx;
    Disciplina* pAnte;
    ListaAlunos ObjLAlunos;

   public:
    Disciplina(int na = 45, const char* ac = "");
    ~Disciplina();
    void setId(int id);
    int getId();
    void setNome(const char* nome);
    char* getNome();
    void setDpto(Departamento* dpto);
    Departamento* getDpto();
    void setProx(Disciplina* pProx);
    Disciplina* getProx();
    void setAnte(Disciplina* pAnte);
    Disciplina* getAnte();
    void incluaAluno(Aluno* pAluno);
    void listeAlunos();
    void listeAlunos2();
};

#endif  //_DISCIPLINA_H
