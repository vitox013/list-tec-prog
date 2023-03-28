#pragma once
class Disciplina;
class Universidade;

class Departamento {
   private:
    int id;
    char nomeDepartamento[130];
    Disciplina* pDiscPrim;
    Disciplina* pDiscAtual;
    Universidade* pUnivAssociada;

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