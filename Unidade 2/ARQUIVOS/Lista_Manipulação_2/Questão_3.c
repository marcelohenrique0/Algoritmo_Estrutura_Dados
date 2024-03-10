#include <stdio.h>
#include <stdlib.h>

typedef struct Loja{
    char nome_da_fruta[30];
    float preco;
}frutas;

int main(void){
    int op;
    frutas loja;
    FILE *arquivo = fopen("frutas.txt","aw");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    printf("-CADASTRO DE FRUTAS-\n");
    do{
        printf("Digite o nome da fruta: ");
        scanf("%s",loja.nome_da_fruta);
        
        printf("Digite o preço da fruta: ");
        scanf("%f",&loja.preco);

        fprintf(arquivo,"----------------\nNome da fruta: %s \n Preço: %.2f \n",loja.nome_da_fruta,loja.preco);

        printf("Deseja continuar cadastrando ( 1-sim / 2-nao): ");
        scanf("%d",&op);
    }while (op != 2);

    printf("frutas cadastradas com sucesso!");

    fclose(arquivo);


    return 0;
}