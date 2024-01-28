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
    Disciplina materias; // Aninhamento de estrutua disciplina na estrutura aluno
}Aluno;

int main (void){

    Aluno aluno; // Declarado uma variável do tipo Aluno
    aluno.idade = 21; // Acessado a variável idade dentro da struct aluno
    aluno.matricula = 2023011357;
    aluno.materias.codigo = 98078;
    printf(" %d, %d, %d \n", aluno.idade, aluno.materias, aluno.materias.codigo);
    return 0;
}