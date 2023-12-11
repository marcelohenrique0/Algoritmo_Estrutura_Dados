#include <stdio.h>
#include <stdlib.h>

/* typedef
typedef int INTEIRO;
*/

//definindo a estrutura do aluno
typedef struct Aluno{
char nome[50]; //20 bytes
int idade; //4 bytes
long int matricula; //4 bytes
char email[50]; //50 bytes
}aluno;

typedef struct Aluno aluno;

void preenche(struct Aluno * estudante){
    printf("digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);
    printf("digite a idade do aluno: \n");
    scanf(" %d", &estudante->idade);
    printf("digite a matricula do aluno: \n");
    scanf(" %ld", &estudante->matricula);
    printf("digite o email do aluno: \n");
    scanf(" %[^\n]", estudante->email);
}
void imprime(struct Aluno * estudante){
    printf("nome: %s\n", estudante->nome);
    printf("idade: %d\n", estudante->idade);
    printf("matricula: %ld\n", estudante->matricula);
    printf("email: %s\n", estudante->email);
}

struct Professor{
char nome[50]; //20 bytes
int idade; //4 bytes
long int matricula; //4 bytes
char email[50]; //50 bytes
};

void preenche1(struct Professor * mestre){
    printf("digite o nome do professor: \n");
    scanf(" %[^\n]", mestre->nome);
    printf("digite a idade do profesor: \n");
    scanf(" %d", &mestre->idade);
    printf("digite a matricula do professor: \n");
    scanf(" %ld", &mestre->matricula);
    printf("digite o email do professor: \n");
    scanf(" %[^\n]", mestre->email);
}
void imprime1(struct Professor * mestre){
    printf("nome: %s\n", mestre->nome);
    printf("idade: %d\n", mestre->idade);
    printf("matricula: %ld\n", mestre->matricula);
    printf("email: %s\n", mestre->email);
}

//ALOCAÇÃO DINÂMICA DE STRUCT POIS A VARIÁVEL AGORA É UM PONTEIRO
int main(void){
  struct Aluno * estudante = (struct aluno*) malloc(sizeof(struct Aluno));
  if (estudante == NULL){
    exit (1);
  }
  struct Professor * mestre = (struct Professor*) malloc(sizeof(struct Professor));
  if (mestre == NULL){
    exit(1);
  }
  preenche(estudante);
  imprime(estudante);
  free(estudante);
  preenche1(mestre);
  imprime1(mestre);
  free(mestre);
  return 0;
}
