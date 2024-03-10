#include <stdio.h>
#include <stdlib.h>

typedef struct Turma{
    char nome[30];
    float notas[4];
    float media;
}alunos;


int main(void){
    int total;
    FILE *arquivo = fopen("alunos.txt","aw");
    if(arquivo ==NULL){
        printf("erro ao criar o arquivo\n");
        exit(1);
    }
    printf("Cadastro de alunos\n ");
    printf("Digite o total de alunos: ");
    scanf("%d",&total);
    
    alunos turma[total];

    for(int i = 0; i < total; i++){

        printf("_________________%d______________\n",i+1);
        printf("Digite o nome do aluno: ");
        scanf("%s", turma[i].nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &turma[i].notas[0]);

        printf("Digite a segunda nota: ");
        scanf("%f", &turma[i].notas[1]);

        printf("Digite a terceira nota: ");
        scanf("%f", &turma[i].notas[2]);

        printf("Digite a quarta nota: ");
        scanf("%f", &turma[i].notas[3]);

        printf("Digite a quinta nota: ");
        scanf("%f", &turma[i].notas[4]);
        
        turma[i].media = (turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2] + turma[i].notas[3] + turma[i].notas[4])/5;
        
        fprintf(arquivo,"Aluno %d  \n Nome %s \n Notas: %.2f %.2f %.2f %.2f %.2f \n Media: %2f\n",i+1,turma[i].nome,turma[i].notas[0],turma[i].notas[1],turma[i].notas[2],turma[i].notas[3],turma[i].notas[4] ,turma[i].media);
    }

    printf("Alunos registrados com sucesso!\n");

    fclose(arquivo);

    return 0;
}