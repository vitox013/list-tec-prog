

#if !defined(_ELEMALUNO_H)
#define _ELEMALUNO_H
class Aluno;

class ElemAluno {
   private:
    Aluno* pAluno;
    ElemAluno* pProx;
    ElemAluno* pAnte;

   public:
    ElemAluno();
    ~ElemAluno();
    void setAluno(Aluno* pA);
    Aluno* getAluno();
    char* getNome();
    void setProx(ElemAluno* pA);
    ElemAluno* getProx();
    void setAnte(ElemAluno* pA);
    ElemAluno* getAnte();
};

#endif  //_ELEMALUNO_H
