#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do aluno
struct Aluno{
char nome[50];
int idade;
long int matricula;
char email[50];
};

int main(void){
  struct Aluno estudante;
  printf("digite o nome do aluno: \n");
  scanf(" %[^\n]", estudante.nome);
  printf("digite a idade do aluno: \n");
  scanf(" %d", &estudante.idade);
  printf("digite a matricula do aluno: \n");
  scanf(" %ld", &estudante.matricula);
  printf("digite o email do aluno: \n");
  scanf(" %[^\n]", estudante.email);
  return 0;
}
