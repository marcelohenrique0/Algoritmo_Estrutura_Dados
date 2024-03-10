/*TAD: Aluno */
#include <stdio.h>
#include "aluno.h"
#include <stdlib.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if(estudante==NULL){
        exit(1);
    } 
    printf("informe o nome do aluno: \n");
    scanf(" %[^\n]", estudante-> nome );
    printf("informe a matricula: \n");
    scanf("%d", &estudante-> matricula );
    printf("informe o IRA: \n");
    scanf("%f", &estudante-> IRA );

    return estudante;
}

void imprimir_dados (Aluno * aluno) {
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("IRA: %.2f\n", aluno->IRA);
}

void matricula (Aluno * aluno) {
    printf("Matricula: %d\n", aluno->matricula);
}

void libera_memoria (Aluno * aluno) {
    free(aluno);
}

