#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresso.h"

struct ingresso {
    float preco;
    char local[30];
    char atracao[30];
};

void preencher(Ingresso *p, int t) {
    for(int i = 0; i < t; i++) {
        printf("\n%dº Ingresso\n\n", i + 1);
        printf("Informe o preço: R$");
        scanf("%f", &p[i].preco);
        printf("Qual a atração? ");
        fflush(stdin);
        fgets(p[i].atracao, 30, stdin);
        printf("Local da apresentação: ");
        fgets(p[i].local, 20, stdin);
        fflush(stdin);
    }
}

void imprimir_dados(Ingresso *p, int t) {
    for(int i = 0; i < t; i++) {
        printf("\n%dº Ingresso\n", i + 1);
        printf("Nome: %s", p[i].atracao);
        printf("Local: %s", p[i].local);
        printf("Preço: R$ %.2f\n", p[i].preco);
        printf("\n");
    }
}

void novo_valor(Ingresso *p, int t) {
    char test;
    int opcao = 0;

    printf("Deseja alterar o preço de algum ingresso? [S/N]");
    scanf(" %c", &test);

    if(test == 'S' || test == 's') {
        do {
            printf("Digite o número(º) do ingresso: ");
            scanf("%d", &opcao);
            if(opcao <= 0 || opcao > t)
                printf("Ingresso Inválido!\n");
            else {
                printf("Valor do Ingresso: R$%.2f\n", p[opcao - 1].preco);
                printf("Qual o novo valor? R$");
                scanf("%f", &p[opcao - 1].preco);
                printf("Valor alterado com sucesso!\n");
            }
        } while (opcao <= 0 || opcao > t);
    }
}

void preco_menor_maior(Ingresso *p, int t) {
    int indice_maior = 0, indice_menor = 0;
    float preco_maior = p[0].preco;  
    float preco_menor = p[0].preco;  

    for (int i = 1; i < t; i++) {
        if (preco_maior < p[i].preco) {
            preco_maior = p[i].preco;
            indice_maior = i;
        }
        if (preco_menor > p[i].preco) {
            preco_menor = p[i].preco;
            indice_menor = i;
        }
    }

    printf("\n%dº Ingresso Mais Caro\n", indice_maior + 1);
    printf("Nome: %sLocal: %sPreço: R$ %.2f\n\n", p[indice_maior].atracao, p[indice_maior].local, p[indice_maior].preco);
    printf("\n%dº Ingresso Mais Barato\n", indice_menor + 1);
    printf("Nome: %sLocal: %sPreço: R$ %.2f\n\n", p[indice_menor].atracao, p[indice_menor].local, p[indice_menor].preco);
}
