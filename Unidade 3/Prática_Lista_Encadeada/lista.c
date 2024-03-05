#include "lista.h"
#include <stdlib.h>
#include <stdio.h>



typedef struct lista{
    int info;
    struct lista *proxima_elemento;
}Lista;


Lista* cria_lista(void){
    return NULL;
}

/*Inserção */
Lista *insere_elemento(Lista* lista, int valor){
    //aloca novo nó da lista encadeado
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if(novo_no == NULL){
        exit(1);
    }
    //adiciona valor ao novo nó no campo info
    novo_no->info = valor;
    //coloca o novo nó na  lista
    novo_no->proxima_elemento = lista;

    return novo_no;
}

void imprimir_lista(Lista *lista){
    Lista * contador;
    for(contador = lista; contador != NULL; contador = contador->proxima_elemento){
        printf("%d\n", contador->info);
    }
}  

void lista_vazio(Lista *lista){
    if(lista == NULL){
        printf("Lista vazia\n");
    }
    else{
        printf("Lista não vazia\n");
    }
}

void busca_elemento_lista(Lista *lista, int valor){
    Lista *contador;
    for(contador = lista; contador != NULL; contador = contador->proxima_elemento){
        if(contador->info == valor){
            printf("Elemento encontrado %d\n", contador->info);
            return;
        }
    }
    printf("Elemento não encontrado\n");
}