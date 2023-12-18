#include <stdio.h>
#include <stdlib.h>
/* Exemplo de ALINHAMENTO DE ESTRUTURAS */

typedef struct disciplina {
    char nome[20];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    Disciplina * materias; // Aninhamento de estrutua disciplina na estrutura aluno
}Aluno;

int main (void){
    // Alocando memoria para variável aluno
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno==NULL){
        exit(1);
    }
    // Aloca memoria para o vetor de 2 discliplinas
    aluno->materias = (Disciplina*) malloc(2*sizeof(Disciplina));
    if(aluno->materias==NULL){
        exit(1);
    }
    printf("Informe os dados do aluno: nome, idade e matricula\n");
    scanf(" %[^\n]", aluno->nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);
    // Cadastro das disciplinas
    int index;
    for(index=0; index<2; index++){
        printf("Cadastro da disciplina %d\n", index+1);
        // Lendo o nome da disciplina no index do vetor
        scanf(" %[^\n]", aluno->materias[index].nome);
        scanf("%d", &aluno->materias[index].codigo);
        scanf("%d", &aluno->materias[index].nota);
    }
    return 0;
}