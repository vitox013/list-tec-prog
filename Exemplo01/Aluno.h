#include "Pessoa.h"

class Aluno : public Pessoa {
   private:
    int ra;

   public:
    Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Aluno();
    ~Aluno();
    void setRa(int ra);
    int getRa();
};