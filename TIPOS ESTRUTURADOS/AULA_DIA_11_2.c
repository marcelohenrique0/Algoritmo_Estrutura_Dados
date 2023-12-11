#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do aluno
struct Aluno{
char nome[50]; //20 bytes
int idade; //4 bytes
long int matricula; //4 bytes
char email[50]; //50 bytes
};

void preencher(struct Aluno * estudante){
    printf("digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);
    printf("digite a idade do aluno: \n");
    scanf(" %d", &estudante->idade);
    printf("digite a matricula do aluno: \n");
    scanf(" %ld", &estudante->matricula);
    printf("digite o email do aluno: \n");
    scanf(" %[^\n]", estudante->email);
}

//ALOCAÇÃO DINÂMICA DE STRUCT POIS A VARIÁVEL AGORA É UM PONTEIRO
int main(void){
  struct Aluno * estudante = (struct aluno*) malloc(sizeof(struct Aluno));
  if (estudante == NULL){
    exit (1);
  }
  preencher(estudante);
  free(estudante);
  return 0;
}
