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
    // Vetor de disciplinas
    Disciplina materias[1]; // Aninhamento de estrutua disciplina na estrutura aluno
}Aluno;

int main (void){

    Aluno aluno; // Declarado uma variável do tipo Aluno
    aluno.idade = 21; // Acessado a variável idade dentro da struct aluno
    aluno.matricula = 2023011357;
    aluno.materias[1].codigo = 98078;
    printf(" %d, %d, %d \n", aluno.idade, aluno.materias, aluno.materias[1].codigo);
    return 0;
}