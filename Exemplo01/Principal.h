#include "Aluno.h"
#include "Departamento.h"
#include "Disciplina.h"
#include "Professor.h"
#include "Universidade.h"

class Principal {
   private:
    Professor Simao;
    Professor Newton;
    Professor Einstein;

    Universidade UTFPR, Princeton, Cambridge, UFPR;
    Departamento DAINF, FisicaPrinceton, MatematicaCambridge, DEARTES, DAELN;

    Disciplina Calculo, Fisica, Algoritmos, Artes, Musica, Eletronica, Mecatronica;

    int diaAtual;
    int mesAtual;
    int anoAtual;

   public:
    Principal();

    void Inicializa();
    void InicializaUniversidades();
    void InicializaDepartamentos();
    void InicializaDisciplinas();
    // void InicializaAlunos();
    void InicializaProfessores();

    void Executar();

    void CalcIdadeProfs();
    void UnivOndeProfsTrabalham();
    void DepOndeProfsTrabalham();
    void ListeDiscDptos();
};