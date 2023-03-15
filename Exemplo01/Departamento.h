
class Departamento {
   private:
    char nomeDepartamento[30];

   public:
    Departamento(const char *nomeDepartamento = "") {}
    ~Departamento() {}
    void setNomeDepartamento(const char *nomeDepartamento) {}
    char *getNomeDepartamento() { return nomeDepartamento; }
};