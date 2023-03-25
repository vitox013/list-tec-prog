#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor : public Pessoa {
   private:
    Universidade* pUnivFiliado;
    Departamento* pDptoFiliado;

   public:
    Professor(int diaNa, int mesNa, int anoNa, const char* nome);
    Professor();
    ~Professor();
    void setUnivFiliado(Universidade* pu);
    void setDptFiliado(Departamento* pdpt);
    void ondeTrabalho();
    void qualDptTrabalho();
};