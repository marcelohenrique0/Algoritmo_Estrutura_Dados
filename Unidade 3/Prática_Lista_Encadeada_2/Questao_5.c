#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 81
#define MAX_DEPTO 2

typedef struct funcionario {
    char depto[MAX_DEPTO];
    int mat;
    char nome[MAX_NOME];
    float salario;
} Funcionario;

typedef struct listaFunc {
    Funcionario *funcionario;
    struct listaFunc *prox;
} ListaFunc;

ListaFunc *listfunc_cria() {
    return NULL;
}

void handle_error(const char *message) {
    printf("[ERRO] %s\n", message);
    exit(1);
}

ListaFunc *listfunc_adc(ListaFunc *l, Funcionario *f) {
    ListaFunc *novo = (ListaFunc *)malloc(sizeof(ListaFunc));
    if (novo == NULL) {
        handle_error("Memória insuficiente!");
    }
    novo->funcionario = (Funcionario *)malloc(sizeof(Funcionario));
    if (novo->funcionario == NULL) {
        handle_error("Memória insuficiente!");
    }
    novo->prox = l;
    memcpy(novo->funcionario, f, sizeof(Funcionario));
    return novo;
}

void listfunc_imprime(ListaFunc *f) {
    ListaFunc *p;
    for (p = f; p != NULL; p = p->prox) {
        printf("Departamento: %s\n", p->funcionario->depto);
        printf("Matrícula: %d\n", p->funcionario->mat);
        printf("Nome: %s\n", p->funcionario->nome);
        printf("Salário: %.2f\n", p->funcionario->salario);
        printf("========================\n");
    }
}

float lstfunc_folha_pagto(ListaFunc *f, char depto[]) {
    ListaFunc *p;
    float total = 0.0;
    for (p = f; p != NULL; p = p->prox) {
        if (strcmp(p->funcionario->depto, depto) == 0) {
            total += p->funcionario->salario;
        }
    }
    if (total == 0) {
        handle_error("Departamento inexistente!");
    }
    return total;
}

void listfunc_libera(ListaFunc *f) {
    ListaFunc *p = f;
    while (p != NULL) {
        ListaFunc *t = p->prox;
        free(p->funcionario);
        free(p);
        p = t;
    }
}

int main(void) {
    char dptm[MAX_DEPTO];
    ListaFunc *listaf = listfunc_cria();
    Funcionario func;
    
    printf("Adicione informações de 5 funcionários:\n");
    for (int i = 0; i < 5; i++) {
        printf("Funcionário %d:\n", i+1);
        printf("Departamento: ");
        scanf(" %s", func.depto);
        printf("Matrícula: ");
        scanf("%d", &func.mat);
        printf("Nome: ");
        scanf(" %[^\n]s", func.nome);
        printf("Salário: ");
        scanf("%f", &func.salario);
        listaf = listfunc_adc(listaf, &func);
    }
    
    printf("\nInformações dos funcionários:\n");
    listfunc_imprime(listaf);
    
    printf("\nInsira o departamento para verificar a folha salarial: ");
    scanf(" %s", dptm);
    float fs = lstfunc_folha_pagto(listaf, dptm);
    printf("\nO total do departamento %s é de: %.2f$\n", dptm, fs);
    
    listfunc_libera(listaf);
    return 0;
}