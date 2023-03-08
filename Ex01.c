#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  int dia;
  int mes;
  int ano;
  int idade;
};

int calcularIdade(struct Pessoa pessoa, int ano) { return ano - pessoa.ano; }

int main() {
  struct Pessoa Einstein, Newton;

  Einstein.dia = 14;
  Einstein.mes = 03;
  Einstein.ano = 1879;

  Newton.dia = 04;
  Newton.mes = 01;
  Newton.ano = 1649;

  Einstein.idade = calcularIdade(Einstein, 2022);
  Newton.idade = calcularIdade(Newton, 2022);

  printf("A idade de Einstein seria %d\n", Einstein.idade);
  printf("A idade de Newton seria %d\n", Newton.idade);
  
  return 0;
}