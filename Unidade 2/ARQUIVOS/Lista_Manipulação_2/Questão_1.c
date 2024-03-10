#include <stdio.h>
#include <stdlib.h>

int main(void){
    int id;
    int total;
    char nome[20];
    float salario;

    FILE *arquivo;

    arquivo = fopen("funcionarios.txt","aw");

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo arquivo");
        exit (1);
    }
    printf("Digite o Total de funcionarios que deseja cadastrar: ");
    scanf("%d",&total);

    for(int i = 0; i <total; i++){
        printf("------------%d---------------\n",i+1);
        printf("Digite o nome: ");
        scanf("%s",nome);
        printf("Digite salário: ");
        scanf("%f",&salario);
        id = i+1;
        
        fprintf(arquivo,"Dados da pessoa %d \n Nome %s \n Salario %.2f \n ID: %d\n",i+1, nome,salario,id);
        }

        printf("Funcionários Cadastrados com sucesso!!");

        fclose(arquivo);

    return 0;
}