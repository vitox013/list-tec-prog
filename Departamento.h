#pragma once
class Disciplina;
class Universidade;
class ListaDisciplinas;

class Departamento {
   private:
    int id;
    char nomeDepartamento[130];
    Universidade* pUnivAssociada;
    ListaDisciplinas* pObjLDisciplinas;

   public:
    Departamento();
    ~Departamento();
    void setId(int id);
    int getId();
    void setNomeDepartamento(const char* nomeDepartamento);
    char* getNomeDepartamento();
    void setUniversidade(Universidade* uniAssociada);
    Universidade* getUniversidade();
    void incluirDisciplina(Disciplina* pD);
    void listarDisciplinas();
    void listarDisciplinas2();
};