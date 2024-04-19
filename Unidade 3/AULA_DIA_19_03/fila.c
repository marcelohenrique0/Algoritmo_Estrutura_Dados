#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct _fila{
    int ini, fim;
    int qtde; // num de elementos da fila
    int MAX_SIZE; // tamanho maximo da fila
    int *val; // vetor dos valores
}Fila;

Fila *CriaFila(int MAX_SIZE){
    Fila *Q = (Fila*) calloc(1, sizeof(Fila));

    Q->val = (int*) calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtde = 0;
    Q->ini = Q->fim = 0;

    return Q;
}

void DestruirFila(Fila **Q){
    Fila **Qaux = Q;
    free((*Q)->val);
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){
    return (Q->qtde == 0);
}

int FilaCheia(Fila *Q){
    return (Q->qtde == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elem){
    if (FilaCheia(Q)){
        printf("WARNING: FILA ESTA CHEIA\n");
        return 0; // falha na insercao
    }
    else{
        Q->val[Q->fim] = elem;
        Q->fim = (Q->fim +1) % Q->MAX_SIZE;
        Q->qtde++;
        return 1; // sucesso na insercao
    }
}

int RemoveFila(Fila *Q){
    if (FilaVazia(Q)){
        printf("warning: Fila esta vazia\n");
        return 0; // falha na remocao
    }
    else{
        Q->ini = (Q->ini+1) % Q->MAX_SIZE;
        Q->qtde--;
        return 1; // sucesso na remocao
    }
}

int ConsultaFila(Fila *Q, int *elem){
    if(FilaVazia(Q)){
        printf("warning: fila esta vazia\n");
        return 0; // falha ao consultar fila
    }
    else{
        *elem = Q->val[Q->ini];
        return 1; //sucesso ao consultar fila
    }
}